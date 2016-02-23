#include "MyTableView.h"
#include <QDragEnterEvent>
#include <QMimeData>

MyTableView::MyTableView(QWidget *parent)
	: QTableView(parent)
{
	setDragEnabled(true);
	setDropIndicatorShown(true);
	setDragDropOverwriteMode(false);
	setDragDropMode(InternalMove);
	setDefaultDropAction(Qt::MoveAction);
}


MyTableView::~MyTableView()
{
}


void MyTableView::dragEnterEvent(QDragEnterEvent *event)
{
	const QMimeData *mime = event->mimeData();
	QStringList list = mime->formats();
	if (event->mimeData()->hasFormat("text/plain"))
		event->acceptProposedAction();
}

void MyTableView::dragLeaveEvent(QDragLeaveEvent * event)
{

}