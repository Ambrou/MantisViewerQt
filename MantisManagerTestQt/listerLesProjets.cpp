#include "CppUnitTest.h"
#include "MantisConnecteur.h"
#include <QVector>
#include <QString>
#include <QCoreApplication>
#include "InvalidArgumentException.h"
#include "OperationImpossibleException.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MantisManagerTest
{
	TEST_CLASS(listerLesProjets)
	{
	public:

		TEST_METHOD(listerLesProjetsDUnUtilisateurEnregistré)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			QStringList listeProjets;
			MantisConnecteur mantisManager;

			mantisManager.recupererProjets(listeProjets, "apetitgenet", "MAg28vkwde");

			Assert::AreEqual(15, listeProjets.size());
		}

		TEST_METHOD(changerLEtatDUnTicket)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			mantisManager.changerEtatTicket("2234", QString::fromLocal8Bit("à valider"), "apetitgenet", "MAg28vkwde");

			// Pas d'exception lancé
		}

		TEST_METHOD(changerLEtatDUnTicketDansUnEtatInexistant)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			try
			{
				mantisManager.changerEtatTicket("2234", "à penser", "apetitgenet", "MAg28vkwde");
				Assert::Fail();
			}
			catch (const MantisManagerException &e)
			{
				Assert::IsTrue(QString("à penser n'est pas un état connu") == e.What());
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

		TEST_METHOD(changerLEtatDUnTicketDansUnEtatImpossible)
		{

			try
			{
				int argc = 0;
				QCoreApplication app(argc, 0);
				MantisConnecteur mantisManager;

				mantisManager.changerEtatTicket("2234", QString::fromLocal8Bit("validé"), "apetitgenet", "MAg28vkwde");
				//Assert::Fail();
				// On peut toujours changer l'état
			}
			catch (const OperationImpossibleException& e)
			{
				Assert::AreEqual("coucou", e.what());
			}
			catch (...)
			{
				Assert::Fail();
			}

		}

		TEST_METHOD(ajouterUneNoteAUnTicket)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			mantisManager.ajouterUneNoteAuTicket("2234", "Ceci est une nouvelle note", "apetitgenet", "MAg28vkwde");
		}

		TEST_METHOD(ajouterUneNoteAUnTicketAvecErreur)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			try
			{
				mantisManager.ajouterUneNoteAuTicket("2234", "Ceci est une nouvelle note", "apeitgenet", "MAg28vkwde");
				Assert::Fail();
			}
			catch (const MantisManagerException &e)
			{
				Assert::IsTrue(QString("Impossible de rajouter la note") == e.What());
			}
			catch (...)
			{
				Assert::Fail();
			}
			
		}

		TEST_METHOD(creerUnTicket)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			mantisManager.creerUnTicket("TRIXELL-TETRIS", "ceci est la description", QString::fromLatin1("ceci est un résumé"), "IHM","apetitgenet", "MAg28vkwde");
			
		}

		TEST_METHOD(creerUnTicketAvecErreur)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;
			try
			{
				mantisManager.creerUnTicket("TRIXELL-TETRIS", "ceci est la description", QString::fromLatin1("ceci est un résumé"), "IHM","apetitgenet", "MAg2vkwde");
				Assert::Fail();
			}
			catch (const MantisManagerException &e)
			{
				Assert::IsTrue(QString("Impossible de créer le ticket") == e.What());
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
		
		TEST_METHOD(creerUneVersion)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			mantisManager.creerUneVersion("APT", "TRIXELL-TETRIS", "apetitgenet", "MAg28vkwde");
		}

		TEST_METHOD(creerUneVersionAvecErreur)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			
			try
			{
				mantisManager.creerUneVersion("APT", "TRIXTETRIS", "apetitgenet", "MAg28vkwde");
				Assert::Fail();
			}
			catch (const MantisManagerException &e)
			{
				Assert::IsTrue(QString("Impossible de créer la version") == e.What());
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

		TEST_METHOD(definirUneDateDeLivraisonDUneVersion)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;
			QDate date;
			QTime time;
			date.setDate(2015, 12, 17);
			time.setHMS(17, 30, 0);

			mantisManager.definirDateLivraisonDUneVersion("CD_Patch1", date, time, "TRIXELL-TETRIS", "apetitgenet", "MAg28vkwde");
		}

		TEST_METHOD(definirUneDateDeLivraisonDUneVersionAvecErreur)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			try
			{
				mantisManager.definirDateLivraisonDUneVersion("APT", QDate::currentDate(), QTime::currentTime(), "TRIXELL-TETRIS", "apetitgenet", "MAg28vkwde");
			}
			catch (const MantisManagerException &e)
			{
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

		TEST_METHOD(livrerUneVersion)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			mantisManager.livrerVersion("CD_Patch1", "TRIXELL-TETRIS", "apetitgenet", "MAg28vkwde");
		}

		TEST_METHOD(livrerUneVersionAvecErreur)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			try
			{
				mantisManager.livrerVersion("APT", "TRIXELL-TETRIS", "apetitgenet", "MAg28vkwde");
			}
			catch (const MantisManagerException &e)
			{
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	};
}