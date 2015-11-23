#include "CppUnitTest.h"
#include <QCoreApplication>
#include <QSignalSpy>
#include "../MantisViewerConsoleQt/MantisViewerConsoleQt.h"
#include "../MantisViewerConsoleQt/LecteurCommande.h"
#include "../MantisManager/BaseConnecteur.h"
#include "fakeit.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace fakeit;

namespace MantisViewerConsoleQtTest
{
	TEST_CLASS(ConsoleTest)
	{
	public:

		TEST_METHOD(quitterLApplication)
		{
			// Contexte
			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<LecteurCommande> mockLecteur;
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
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, LecteurCommande& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
				QString login() const { return MantisViewerConsoleQt::login(); };
				QString motDePasse() const { return MantisViewerConsoleQt::motDePasse(); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<LecteurCommande> mockLecteur;
			Mock<BaseConnecteur> mockBase;

			When(Method(mockLecteur, lireCommande)).Return("login").Return("******");

			MaConsole console(&app, mockBase.get(), mockLecteur.get());

		
			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("connecter");

			Assert::AreEqual(true, attendreCommandeSuivante);
			Assert::AreEqual(QString("login").toStdString(), console.login().toStdString());
			Assert::AreEqual(QString("******").toStdString(), console.motDePasse().toStdString());
		}

		static void recupererProjets_delegate(QVector<QString>&listeProjets, const QString& user, const QString& password)
		{
			listeProjets.append(QString("TeTriS"));
		}

		static void ecrire_delegate(const QString& texte)
		{
			
		}

		TEST_METHOD(listerLesProjets)
		{
			
			///// CA ne marche pas
			class MaConsole : public MantisViewerConsoleQt
			{
			public:
				MaConsole(QObject *parent, BaseConnecteur &baseConnecteur, LecteurCommande& lecteurCommande) : MantisViewerConsoleQt(parent, baseConnecteur, lecteurCommande){};
				bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande){ return MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(nomCommande); };
			};

			int argc = 0;
			QCoreApplication app(argc, 0);
			Mock<LecteurCommande> mockLecteur;
			Mock<BaseConnecteur> mockBase;
		
			When(Method(mockBase, recupererProjets)).Do(recupererProjets_delegate);
			When(Method(mockLecteur, ecrire)).Return();

			MaConsole console(&app, mockBase.get(), mockLecteur.get());

			bool attendreCommandeSuivante = console.traiterCommandeEtAttendreLaSuivante("lister projets");

			Assert::AreEqual(true, attendreCommandeSuivante);
			Verify(Method(mockBase, recupererProjets).Using(_, _, _)).Once();
			Verify(Method(mockLecteur, ecrire).Using("TeTriS"));

			////
			///// CA MARCHE
			//Mock<LecteurCommande> mockLecteur; 
			LecteurCommande& lc = mockLecteur.get(); 
			
			When(Method(mockLecteur, ecrire)).Return();
			lc.ecrire("TeTriS");
			Verify(Method(mockLecteur, ecrire).Using("TeTriS"));
		}

		//struct SomeInterface {
		//	virtual int func(int) = 0;
		//	virtual int func2(int, std::string) = 0;
		//	virtual int func3(int&) = 0;
		//};

		//TEST_METHOD(apt)
		//{
		//	int a = 1;
		//	int b = 2;
		//	Mock<SomeInterface> mock;
		//	When(Method(mock, func3).Using(1)).Do([&a](int& val) {
		//		a = val + 1;
		//		val++;
		//		return 1;
		//	});
		//	//When(Method(mock, func3).Using(1)).AlwaysReturn(1);
		//	SomeInterface &i = mock.get();
		//	/*{
		//	    int a = 1;
		//	    i.func3(a);
		//	    a = 2;
		//	}*/
		//	
		//	int toto = i.func3(b);
		//	Verify(Method(mock, func3).Using(Eq(1)));
		//}
	};
}