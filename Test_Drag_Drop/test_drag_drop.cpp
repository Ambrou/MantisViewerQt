#include "test_drag_drop.h"
#include "MyTableView.h"
#include "MyModel.h"

Test_Drag_Drop::Test_Drag_Drop(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	//
	QStandardItem* itm = new QStandardItem("1");
	itm->setFlags(itm->flags() & ~(Qt::ItemIsDropEnabled));
	modelStandard.setItem(0, 0, itm);

	itm = new QStandardItem("2");
	itm->setFlags(itm->flags() & ~(Qt::ItemIsDropEnabled));
	modelStandard.setItem(0, 1, itm);
	
	itm = new QStandardItem("3");
	Qt::ItemFlags f = itm->flags() & ~(Qt::ItemIsDropEnabled);
	Qt::ItemFlags f2 = itm->flags();
	itm->setFlags(itm->flags() & ~(Qt::ItemIsDropEnabled));
	modelStandard.setItem(1, 0, itm);
	
	itm = new QStandardItem("4");
	itm->setFlags(itm->flags() & ~(Qt::ItemIsDropEnabled));
	modelStandard.setItem(1, 1, itm);

	ui.tableView->setModel(&modelStandard);
	ui.tableView->setDragDropOverwriteMode(false);
	ui.tableView->setDragEnabled(true);
	ui.tableView->setDragDropMode(QAbstractItemView::InternalMove);


	////
	//ui.tableWidget->setColumnCount(2);
	//ui.tableWidget->setRowCount(2);
	//ui.tableWidget->setItem(0, 0, new QTableWidgetItem("1"));
	//ui.tableWidget->setItem(0, 1, new QTableWidgetItem("2"));
	//ui.tableWidget->setItem(1, 0, new QTableWidgetItem("3"));
	//ui.tableWidget->setItem(1, 1, new QTableWidgetItem("4"));

	////
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
