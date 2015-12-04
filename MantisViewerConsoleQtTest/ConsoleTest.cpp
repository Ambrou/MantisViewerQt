#include "CppUnitTest.h"
#include <QCoreApplication>
#include <QSignalSpy>
#include "../MantisViewerConsoleQt/MantisViewerConsoleQt.h"
#include "../MantisViewerConsoleQt/IOManager.h"
#include "../MantisViewerConsoleQt/LecteurClavier.h"
#include "../MantisManager/BaseConnecteur.h"
#include "../MantisManager/MantisManagerException.h"

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
			Mock<IOManager> mockLecteur;
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
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
				QString login() const { return MantisViewerConsoleQt::login(); };
				QString motDePasse() const { return MantisViewerConsoleQt::motDePasse(); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<BaseConnecteur> mockBase;

			When(Method(mockIOManager, lireCommande)).Return("login").Return("******");
			Fake(Method(mockIOManager, ecrire));

			MaConsole console(&app, mockBase.get(), mockIOManager.get());

		
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
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			QString texte("");
			Mock<IOManager> mockIOManager;
			Mock<BaseConnecteur> mockBase;
		
			When(Method(mockBase, recupererProjets)).Do(recupererProjets_delegate);
			When(Method(mockIOManager, ecrire)).Do([&](const QString& _texte){ texte = _texte; });

			// Soit une Console
			MaConsole console(&app, mockBase.get(), mockIOManager.get());

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
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<BaseConnecteur> mockBase;
			QVector<QString>listeTicketsTrouves;
			
			When(Method(mockBase, recupererTicketsDuProjet)).Do(recupererTicketsDuProjet_delegate);
			When(Method(mockIOManager, lireCommande)).Return("TeTriS");
			When(Method(mockIOManager, ecrire)).AlwaysDo([&](const QString& _texte){ listeTicketsTrouves.append(_texte); });
			// Soit une Console
			MaConsole console(&app, mockBase.get(), mockIOManager.get());

			// Quand je traite la demande lister Projet
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("lister tickets");

			// Alors j'attends la commande suivante
			Assert::AreEqual(true, attendreCommandeSuivante);
			Assert::AreEqual(3, listeTicketsTrouves.size());
			Assert::AreEqual("bug 1",  listeTicketsTrouves.at(0).toStdString().c_str());
			Assert::AreEqual("bug 3",  listeTicketsTrouves.at(1).toStdString().c_str());
			Assert::AreEqual("evol 7", listeTicketsTrouves.at(2).toStdString().c_str());

		}

		static void recupererTicketDeLaVersionsDuProjet_delegate(QVector<QString>&listeTickets, const QString nomDuProjet, const QString nomVersion, const QString& user, const QString& password)
		{
			listeTickets.append("bug 1");
			listeTickets.append("bug 3");
			listeTickets.append("evol 7");
		}

		TEST_METHOD(listerLesTicketsDUneVersionDUnProjet)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<BaseConnecteur> mockBase;
			QVector<QString>listeTicketsTrouves;

			When(Method(mockBase, recupererTicketDeLaVersionsDuProjet)).Do(recupererTicketDeLaVersionsDuProjet_delegate);
			When(Method(mockIOManager, lireCommande)).Return("TeTriS", "CD");
			When(Method(mockIOManager, ecrire)).AlwaysDo([&](const QString& _texte){ listeTicketsTrouves.append(_texte); });
			// Soit une Console
			MaConsole console(&app, mockBase.get(), mockIOManager.get());

			// Quand je traite la demande lister Projet
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("lister tickets pour une version");

			// Alors j'attends la commande suivante
			Assert::AreEqual(true, attendreCommandeSuivante);
			Assert::AreEqual(5, listeTicketsTrouves.size());
			Assert::AreEqual("Projet", listeTicketsTrouves.at(0).toStdString().c_str());
			Assert::AreEqual("Version", listeTicketsTrouves.at(1).toStdString().c_str());
			Assert::AreEqual("bug 1", listeTicketsTrouves.at(2).toStdString().c_str());
			Assert::AreEqual("bug 3", listeTicketsTrouves.at(3).toStdString().c_str());
			Assert::AreEqual("evol 7", listeTicketsTrouves.at(4).toStdString().c_str());

		}

		TEST_METHOD(modifierLEtatDUnTicket)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<BaseConnecteur> mockBase;

			// Soit une console en attente de commande
			MaConsole console(&app, mockBase.get(), mockIOManager.get());
			QString id;
			QString etat;
			When(Method(mockBase, changerEtatTicket)).Do([&](const QString& _id, const QString& _etat, const QString& , const QString& ){ id = _id; etat = _etat; });
			Fake(Method(mockIOManager, ecrire));
			When(Method(mockIOManager, lireCommande)).Return("12").Return("validé");

			// Lorsque je demande le passage d'un ticket de l'etat nouveau à en analyse
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("changer etat ticket");

			// Alors la console attend la prochainne commande
			Assert::AreEqual(true, attendreCommandeSuivante);
			// Et le ticket a changer d'état
			//Verify(Method(mockBase, changerEtatTicket).Using("12", "validé"));
			Assert::IsTrue(QString("12") == id);
			Assert::IsTrue(QString("validé") == etat);
		}

		TEST_METHOD(modifierLEtatDUnTicketAvecEchec)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<BaseConnecteur> mockBase;
			class ME : public MantisManagerException
			{
			public:
				const QString What() const{ return ""; };
			};

			// Soit une console en attente de commande
			MaConsole console(&app, mockBase.get(), mockIOManager.get());

			When(Method(mockBase, changerEtatTicket)).Throw(ME());
			Fake(Method(mockIOManager, ecrire));
			When(Method(mockIOManager, lireCommande)).Return("12").Return("validé");

			// Lorsque je demande le passage d'un ticket de l'etat nouveau à en analyse
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("changer etat ticket");

			// Alors la console attend la prochainne commande
			Assert::AreEqual(true, attendreCommandeSuivante);

		}

	};
}