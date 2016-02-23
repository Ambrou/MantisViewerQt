#pragma once

#include <QtWidgets/QTableView>

class MyTableView : public QTableView
{
public:
	MyTableView(QWidget *parent);
	~MyTableView();
	void dragEnterEvent(QDragEnterEvent *event);
//	void dragLeaveEvent(QDragLeaveEvent * event);
	void dropEvent(QDropEvent *event);
};

