#include "CppUnitTest.h"
#include "MantisManager.h"
#include <QVector>
#include <QString>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MantisManagerTest
{
	TEST_CLASS(listerLesProjets)
	{
	public:

		TEST_METHOD(listerLesProjetsDUnUtilisateurEnregistré)
		{
			MantisManager mantisManager;

			QVector<QString>listeProjets;
			//mantisManager.recupererProjets(listeProjets);

			Assert::AreEqual(3, listeProjets.size());


		}

	};
}