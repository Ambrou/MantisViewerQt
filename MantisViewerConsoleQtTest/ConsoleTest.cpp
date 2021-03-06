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
			Mock<MantisManager::BaseConnecteur> mockBase;
			
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
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
				QString login() const { return MantisViewerConsoleQt::login(); };
				QString motDePasse() const { return MantisViewerConsoleQt::motDePasse(); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;

			When(Method(mockIOManager, lireCommande)).Return("login").Return("******");
			Fake(Method(mockIOManager, ecrire));

			MaConsole console(&app, mockBase.get(), mockIOManager.get());

		
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("connecter");

			Assert::AreEqual(true, attendreCommandeSuivante);
			Assert::AreEqual(QString("login").toStdString(), console.login().toStdString());
			Assert::AreEqual(QString("******").toStdString(), console.motDePasse().toStdString());
		}

		static void recupererProjets_delegate(QStringList &listeProjets, const QString& user, const QString& password)
		{
			listeProjets << "TeTriS";
		}

		TEST_METHOD(listerLesProjets)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			QString texte("");
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;
		
			When(Method(mockBase, recupererProjets)).Do(recupererProjets_delegate);
			When(Method(mockIOManager, ecrire)).Do([&](const QString& _texte){ texte = _texte; });

			// Soit une Console
			MaConsole console(&app, mockBase.get(), mockIOManager.get());

			// Quand je traite la demande lister Projet
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("lister projets");
			
			// Alors j'attends la commande suivante
			Assert::AreEqual(true, attendreCommandeSuivante);
			// Et les projets sont affich�s
			Assert::AreEqual("TeTriS", texte.toStdString().c_str());
		}

		static void recupererTicketsDuProjet_delegate(QVector<MantisData::Ticket>&listeTicket, const QString nomDuProjet, const QString& user, const QString& password)
		{
			listeTicket.append(MantisData::Ticket(1, "bug 1", 10, 10));
			listeTicket.append(MantisData::Ticket(5, "bug 3", 10, 10));
			listeTicket.append(MantisData::Ticket(8, "evol 7", 10, 10));
		}

		TEST_METHOD(listerLesTicketsDUnProjet)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;
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
			Assert::AreEqual("1	10	bug 1",  listeTicketsTrouves.at(0).toStdString().c_str());
			Assert::AreEqual("5	10	bug 3",  listeTicketsTrouves.at(1).toStdString().c_str());
			Assert::AreEqual("8	10	evol 7", listeTicketsTrouves.at(2).toStdString().c_str());

		}

		static void recupererTicketDeLaVersionsDuProjet_delegate(QVector<MantisData::Ticket>&listeTickets, const QString nomDuProjet, const QString nomVersion, const QString& user, const QString& password)
		{
			listeTickets.append(MantisData::Ticket(1, "bug 1", 10, 10));
			listeTickets.append(MantisData::Ticket(5, "bug 3", 10, 10));
			listeTickets.append(MantisData::Ticket(8, "evol 7", 10, 10));
		}

		TEST_METHOD(listerLesTicketsDUneVersionDUnProjet)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;
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
			Assert::AreEqual("1	10	bug 1", listeTicketsTrouves.at(2).toStdString().c_str());
			Assert::AreEqual("5	10	bug 3", listeTicketsTrouves.at(3).toStdString().c_str());
			Assert::AreEqual("8	10	evol 7", listeTicketsTrouves.at(4).toStdString().c_str());

		}

		TEST_METHOD(modifierLEtatDUnTicket)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;

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
			Assert::IsTrue(QString("12") == id);
			Assert::IsTrue(QString("validé") == etat);
		}

		TEST_METHOD(modifierLEtatDUnTicketAvecEchec)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;
			class ME : public MantisManager::MantisManagerException
			{
			public:
				const QString What() const{ return ""; };
			};

			// Soit une console en attente de commande
			MaConsole console(&app, mockBase.get(), mockIOManager.get());

			When(Method(mockBase, changerEtatTicket)).Throw(ME());
			Fake(Method(mockIOManager, ecrire));
			When(Method(mockIOManager, lireCommande)).Return("12").Return("valid�");

			// Lorsque je demande le passage d'un ticket de l'etat nouveau � en analyse
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("changer etat ticket");

			// Alors la console attend la prochainne commande
			Assert::AreEqual(true, attendreCommandeSuivante);

		}

		TEST_METHOD(saisirUnNouveauTicket)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QString _nomDuProjet;
			QString _description;
			QString _resume;
			QString _categorie;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;

			MaConsole console(&app, mockBase.get(), mockIOManager.get());
			// on s'en fout de ce qu'on écrit
			Fake(Method(mockIOManager, ecrire));
			When(Method(mockIOManager, lireCommande)).Return("Projet").Return("Description").Return("Resumé").Return("Catégorie");
			When(Method(mockBase, creerUnTicket)).Do([&](const QString& nomDuProjet, const QString& description, const QString& resume, const QString& categorie, const QString&, const QString&){ _resume = resume; _categorie = categorie; _description = description; _nomDuProjet = nomDuProjet; });

			// Lorsque je demande le passage d'un ticket de l'etat nouveau � en analyse
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("creer ticket");

			// Alors la console attend la prochainne commande
			Assert::AreEqual(true, attendreCommandeSuivante);
			// Et le ticket est crée
			Assert::IsTrue(QString("Projet") == _nomDuProjet);
			Assert::IsTrue(QString("Description") == _description);
			Assert::IsTrue(QString("Catégorie") == _categorie);
			Assert::IsTrue(QString("Resumé") == _resume);

		}
		
		TEST_METHOD(saisirUneNouvelleVersion)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QString nomProjet;
			QString nouvelleVersion;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;

			MaConsole console(&app, mockBase.get(), mockIOManager.get());
			// on s'en fout de ce qu'on écrit
			Fake(Method(mockIOManager, ecrire));
			When(Method(mockIOManager, lireCommande)).Return("Projet").Return("Version");
			When(Method(mockBase, creerUneVersion)).Do([&](const QString& nomVersion, const QString& projet, const QString& user, const QString& password ){ nomProjet = projet; nouvelleVersion = nomVersion; });

			// Lorsque je demande le passage d'un ticket de l'etat nouveau � en analyse
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("creer version");

			// Alors la console attend la prochainne commande
			Assert::AreEqual(true, attendreCommandeSuivante);
			Assert::IsTrue(QString("Version") == nouvelleVersion);
			Assert::IsTrue(QString("Projet") == nomProjet);

		}



		TEST_METHOD(definirUneDateDeLivraisonDUneVersion)
		{
			// Contexte
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, MantisManager::BaseConnecteur &baseConnecteur, IOManager& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QString nomProjet;
			QString version;
			QDate date;
			QTime time;
			QCoreApplication app(argc, 0);
			Mock<IOManager> mockIOManager;
			Mock<MantisManager::BaseConnecteur> mockBase;

			MaConsole console(&app, mockBase.get(), mockIOManager.get());
			// on s'en fout de ce qu'on écrit
			Fake(Method(mockIOManager, ecrire));
			When(Method(mockIOManager, lireCommande)).Return("Projet").Return("Version").Return("15/12/2015").Return("17:30:15");
			When(Method(mockBase, definirDateLivraisonDUneVersion))
				.Do([&](const QString& _version, const QDate& _date, const QTime& _time, const QString& projet, const QString&, const QString&)
			{ 
				nomProjet = projet; version = _version; date = _date; time = _time; 
			}
			);

			// Lorsque je demande le passage d'un ticket de l'etat nouveau à en analyse
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("definir date de livraison");

			// Alors la console attend la prochainne commande
			Assert::AreEqual(true, attendreCommandeSuivante);
			Assert::IsTrue(QString("Version") == version);
			Assert::IsTrue(QString("Projet") == nomProjet);
			Assert::IsTrue(QDate(2015,12,15) == date);
			Assert::IsTrue(QTime(17,30,15) == time);

		}

	};
}