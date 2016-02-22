#include "test_drag_drop.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Test_Drag_Drop w;
	w.show();
	return a.exec();
}
