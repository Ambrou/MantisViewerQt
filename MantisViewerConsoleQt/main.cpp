#include "MantisViewerConsoleQt.h"
#include <QtCore/QCoreApplication>
#include "../MantisManager/mantismanager.h"

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);
	MantisManager mantisManager;
	MantisViewerConsoleQt console(&app, mantisManager.connecteur());
	console.start();
	QObject::connect(&console, SIGNAL(quitter()), &app, SLOT(quit()));
	return app.exec();
}
