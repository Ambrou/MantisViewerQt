#include "CppUnitTest.h"
#include "MantisConnecteur.h"
#include <QVector>
#include <QString>
#include <QCoreApplication>
#include "InvalidArgumentException.h"

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

			mantisManager.changerEtatTicket("2234", "à valider", "apetitgenet", "MAg28vkwde");
			Assert::AreEqual(15, 14);
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
			catch (InvalidArgumentException &e)
			{
				Assert::AreEqual("coucou", e.what());
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

		TEST_METHOD(changerLEtatDUnTicketDansUnEtatImpossible)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			MantisConnecteur mantisManager;

			try
			{
				mantisManager.changerEtatTicket("2234", "nouveau", "apetitgenet", "MAg28vkwde");
				Assert::Fail();
			}
			/*catch ()
			{

			}*/
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
	};
}