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

		TEST_METHOD(listerLesProjetsDUnUtilisateurEnregistr�)
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

			mantisManager.changerEtatTicket("2234", QString::fromLocal8Bit("� valider"), "apetitgenet", "MAg28vkwde");

			// Pas d'exception lanc�
		}

		TEST_METHOD(changerLEtatDUnTicketDansUnEtatInexistant)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			try
			{
				mantisManager.changerEtatTicket("2234", "� penser", "apetitgenet", "MAg28vkwde");
				Assert::Fail();
			}
			catch (const MantisManagerException &e)
			{
				Assert::IsTrue(QString("� penser n'est pas un �tat connu") == e.What());
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

				mantisManager.changerEtatTicket("2234", QString::fromLocal8Bit("valid�"), "apetitgenet", "MAg28vkwde");
				//Assert::Fail();
				// On peut toujours changer l'�tat
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
				Assert::IsTrue(QString("Impossible de cr�er le ticket") == e.What());
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	};
}