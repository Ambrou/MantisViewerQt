#include "stdafx.h"
#include "CppUnitTest.h"
#include "fakeit.hpp"
#include "../MantisManager/BaseConnecteur.h"
#include "../MantisViewerConsoleQt/LecteurCommande.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MantisViewerConsoleQtTest
{		
	TEST_CLASS(MantisViewerConsoleQtTest)
	{
	public:
		
		TEST_METHOD(demandeDeSortieDeLApplication)
		{
			int argc = 0;
			QCoreApplication app(argc, 0);
			// Soit une console en écoute de commande

			// Quand le lecteur de commande retourne Quitter

			// Alors le signal de sortie est émit

			// Et la console n'
			QString str = "Hello";
			Assert::AreEqual(true, str.toUpper() == "HeLLO");
		}
	};
}