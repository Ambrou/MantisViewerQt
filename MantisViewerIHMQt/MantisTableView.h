#pragma once

#include <QTableView>

class MantisTableView : public QTableView
{
public:
	MantisTableView(QWidget *parent);
	~MantisTableView();

	void dropEvent(QDropEvent * event);
};

