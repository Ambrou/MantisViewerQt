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
			QVector<QString>listeProjets;
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

			mantisManager.creerUnTicket("apetitgenet", "MAg28vkwde");
		}



		TEST_METHOD(creerUnTicketAvecErreur)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;
			try
			{
				mantisManager.creerUnTicket("apetitgenet", "MAg28vkwde");
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
	};
}