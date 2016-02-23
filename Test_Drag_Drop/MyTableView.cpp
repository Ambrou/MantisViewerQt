#include "MyTableView.h"
#include <QDragEnterEvent>
#include <QMimeData>

MyTableView::MyTableView(QWidget *parent)
	: QTableView(parent)
{
	setDragEnabled(true);
	setAcceptDrops(true);
	setDropIndicatorShown(true);
	
	setDragDropOverwriteMode(false);
	setDragDropMode(InternalMove);
	setSelectionMode(SingleSelection);
}


MyTableView::~MyTableView()
{
}

//
void MyTableView::dragEnterEvent(QDragEnterEvent *event)
{
	QTableView::dragEnterEvent(event);
	/*const QMimeData *mime = event->mimeData();
	QStringList list = mime->formats();
	if (event->mimeData()->hasFormat("text/plain"))
		event->acceptProposedAction();*/
}
//
//void MyTableView::dragLeaveEvent(QDragLeaveEvent * event)
//{
//	QTableView::dragLeaveEvent(event);
//}

void MyTableView::dropEvent(QDropEvent * event)
{
	if (dragDropMode() == InternalMove) {
		if (event->source() != this || !(event->possibleActions() & Qt::MoveAction))
			return;
	}

	QModelIndex index;
	int col = -1;
	int row = -1;
	index = indexAt(event->pos());
	if (index.isValid() == true)
	{
		col = index.column();
		row = index.row();
	}

	const Qt::DropAction action = dragDropMode() == InternalMove ? Qt::MoveAction : event->dropAction();
	if (model()->dropMimeData(event->mimeData(), action, row, col, index) == true )
	{
		if (action != event->dropAction()) 
		{
			event->setDropAction(action);
			event->accept();
		}
		else 
		{
			event->acceptProposedAction();
		}
	}

	QTableView::dropEvent(event);
}