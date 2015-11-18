#include "CppUnitTest.h"
#include "MantisManager.h"
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
			MantisManager mantisManager;

			QVector<QString>listeProjets;
			mantisManager.recupererProjets(listeProjets);

			Assert::AreEqual(3, listeProjets.size());
		}
	};
}