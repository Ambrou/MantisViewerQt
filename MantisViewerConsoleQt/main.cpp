#include "MantisViewerConsoleQt.h"
#include <QtCore/QCoreApplication>
#include "../MantisManager/mantismanager.h"
#include "LecteurClavier.h"

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);
	MantisManager::MantisManager mantisManager;
	LecteurClavier lecteurClavier;
	MantisViewerConsoleQt console(&app, mantisManager.connecteur(), lecteurClavier);
	console.start();
	QObject::connect(&console, SIGNAL(quitter()), &app, SLOT(quit()));
	return app.exec();
}
