#pragma once

#include <QTableView>

class MantisTableView : public QTableView
{
public:
	MantisTableView(QWidget *parent);
	~MantisTableView();

	//void dragEnterEvent(QDragEnterEvent *event) Q_DECL_OVERRIDE;
	void dropEvent(QDropEvent * event) Q_DECL_OVERRIDE;
};

