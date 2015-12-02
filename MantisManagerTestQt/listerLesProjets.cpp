#include "CppUnitTest.h"
#include "MantisConnecteur.h"
#include <QVector>
#include <QString>
#include <QCoreApplication>

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
			//MantisConnecteur mantisManager;

			
	//		mantisManager.recupererProjets(listeProjets, "", "");

			Assert::AreEqual(3, listeProjets.size());
		}
	};
}