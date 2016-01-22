#include "mantisviewerihmqt.h"
#include <QtWidgets/QApplication>

#include "../MantisManager/mantismanager.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	MantisManager mantisManager;

	MantisViewerIHMQt w(mantisManager.connecteur());
	w.show();
	return a.exec();
}
