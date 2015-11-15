#include "MantisViewerConsoleQt.h"
#include <QtCore/QCoreApplication>

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);
	MantisViewerConsoleQt console(&app);
	console.start();
	QObject::connect(&console, SIGNAL(quitter()), &app, SLOT(quit()));
	return app.exec();
}
