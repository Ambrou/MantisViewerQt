#include "test_drag_drop.h"

Test_Drag_Drop::Test_Drag_Drop(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//
	modelStandard.setItem(0, 0, new QStandardItem("1"));
	modelStandard.setItem(0, 1, new QStandardItem("2"));
	modelStandard.setItem(1, 0, new QStandardItem("3"));
	modelStandard.setItem(1, 1, new QStandardItem("4"));

	ui.tableView->setModel(&modelStandard);


	//
	ui.tableWidget->setColumnCount(2);
	ui.tableWidget->setRowCount(2);
	ui.tableWidget->setItem(0, 0, new QTableWidgetItem("1"));
	ui.tableWidget->setItem(0, 1, new QTableWidgetItem("2"));
	ui.tableWidget->setItem(1, 0, new QTableWidgetItem("3"));
	ui.tableWidget->setItem(1, 1, new QTableWidgetItem("4"));
}

Test_Drag_Drop::~Test_Drag_Drop()
{

}
