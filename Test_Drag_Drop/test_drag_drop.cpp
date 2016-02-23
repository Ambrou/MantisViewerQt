#include "test_drag_drop.h"
#include "MyTableView.h"
#include "MyModel.h"

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

	//
	myTableView = new MyTableView(ui.centralWidget);
	ui.verticalLayout->addWidget(myTableView);
	myTableView->setModel(&modelStandard);

	//
	myTableView = new MyTableView(ui.centralWidget);
	ui.verticalLayout->addWidget(myTableView);

	myModel = new MyModel(myTableView);
	myModel->setItem(0, 0, new QStandardItem("1"));
	myModel->setItem(0, 1, new QStandardItem("2"));
	myModel->setItem(1, 0, new QStandardItem("3"));
	myModel->setItem(1, 1, new QStandardItem("4"));
	myTableView->setModel(myModel);
}

Test_Drag_Drop::~Test_Drag_Drop()
{

}
