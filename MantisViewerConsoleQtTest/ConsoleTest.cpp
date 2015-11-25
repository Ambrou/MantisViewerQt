#include "CppUnitTest.h"
#include <QCoreApplication>
#include <QSignalSpy>
#include "../MantisViewerConsoleQt/MantisViewerConsoleQt.h"
#include "../MantisViewerConsoleQt/LecteurCommande.h"
#include "../MantisViewerConsoleQt/LecteurClavier.h"
#include "../MantisManager/BaseConnecteur.h"
#include "fakeit.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace fakeit;

namespace MantisViewerConsoleQtTest
{
	std::string titus("titus");

	TEST_CLASS(ConsoleTest)
	{
	public:

		TEST_METHOD(quitterLApplication)
		{
			// Contexte
			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<LecteurCommande> mockLecteur;
			Mock<BaseConnecteur> mockBase;
			
			// Soit la commande saisi est une demande de sortie d'application
			When(Method(mockLecteur, lireCommande)).Return("quitter");
			// Et une Console
			MantisViewerConsoleQt console(&app, mockBase.get(), mockLecteur.get());
			QSignalSpy spyConsoleQuitter(&console, &MantisViewerConsoleQt::quitter);
			
			// Et elle est en cours			
			console.start();

			while (console.isFinished() == false) {};
			// Alors la demande de quitter est emis
			Assert::AreEqual(1, spyConsoleQuitter.count());
		}


		TEST_METHOD(connexionAMantis)
		{
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, LecteurCommande& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
				QString login() const { return MantisViewerConsoleQt::login(); };
				QString motDePasse() const { return MantisViewerConsoleQt::motDePasse(); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<LecteurCommande> mockLecteur;
			Mock<BaseConnecteur> mockBase;

			When(Method(mockLecteur, lireCommande)).Return("login").Return("******");

			MaConsole console(&app, mockBase.get(), mockLecteur.get());

		
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("connecter");

			Assert::AreEqual(true, attendreCommandeSuivante);
			Assert::AreEqual(QString("login").toStdString(), console.login().toStdString());
			Assert::AreEqual(QString("******").toStdString(), console.motDePasse().toStdString());
		}

		static void recupererProjets_delegate(QVector<QString>&listeProjets, const QString& user, const QString& password)
		{
			listeProjets.append("TeTriS");
		}

		TEST_METHOD(listerLesProjets)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, LecteurCommande& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			QString texte("");
			Mock<LecteurCommande> mockLecteur;
			Mock<BaseConnecteur> mockBase;
		
			When(Method(mockBase, recupererProjets)).Do(recupererProjets_delegate);
			When(Method(mockLecteur, ecrire)).Do([&](const QString& _texte){ texte = _texte; });

			// Soit une Console
			MaConsole console(&app, mockBase.get(), mockLecteur.get());

			// Quand je traite la demande lister Projet
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("lister projets");
			
			// Alors j'attends la commande suivante
			Assert::AreEqual(true, attendreCommandeSuivante);
			// Et les projets sont affichés
			Assert::AreEqual("TeTriS", texte.toStdString().c_str());
		}

		static void recupererTicketsDuProjet_delegate(QVector<QString>&listeTicket, const QString nomDuProjet, const QString& user, const QString& password)
		{
			listeTicket.append("bug 1");
			listeTicket.append("bug 3");
			listeTicket.append("evol 7");
		}

		TEST_METHOD(listerLesTicketsDUnProjet)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, LecteurCommande& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<LecteurCommande> mockLecteur;
			Mock<BaseConnecteur> mockBase;
			QVector<QString>listeTicketsTrouves;
			
			When(Method(mockBase, recupererTicketsDuProjet)).Do(recupererTicketsDuProjet_delegate);
			When(Method(mockLecteur, lireCommande)).Return("TeTriS");
			When(Method(mockLecteur, ecrire)).AlwaysDo([&](const QString& _texte){ listeTicketsTrouves.append(_texte); });
			// Soit une Console
			MaConsole console(&app, mockBase.get(), mockLecteur.get());

			// Quand je traite la demande lister Projet
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("lister tickets");

			// Alors j'attends la commande suivante
			Assert::AreEqual(true, attendreCommandeSuivante);
			Assert::AreEqual(3, listeTicketsTrouves.size());
			Assert::AreEqual("bug 1",  listeTicketsTrouves.at(0).toStdString().c_str());
			Assert::AreEqual("bug 3",  listeTicketsTrouves.at(1).toStdString().c_str());
			Assert::AreEqual("evol 7", listeTicketsTrouves.at(2).toStdString().c_str());

		}

	};
}