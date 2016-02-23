#ifndef TEST_DRAG_DROP_H
#define TEST_DRAG_DROP_H

#include <QtWidgets/QMainWindow>
#include <QStandardItemModel>
#include "ui_test_drag_drop.h"

class Test_Drag_Drop : public QMainWindow
{
	Q_OBJECT

public:
	Test_Drag_Drop(QWidget *parent = 0);
	~Test_Drag_Drop();

	QStandardItemModel modelStandard;
private:
	Ui::Test_Drag_DropClass ui;
};

#endif // TEST_DRAG_DROP_H
