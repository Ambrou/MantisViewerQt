#include "MantisTableView.h"
#include <qheaderview.h>
#include <QDragEnterEvent>

MantisTableView::MantisTableView(QWidget *parent)
	: QTableView(parent)
{
	setSelectionMode(QAbstractItemView::SingleSelection);
	verticalHeader()->setVisible(false);

	setDragEnabled(true);
	setDropIndicatorShown(true);

	setDragDropMode(QAbstractItemView::InternalMove);
}


MantisTableView::~MantisTableView()
{
}

void MantisTableView::dropEvent(QDropEvent * event)
{
	if (dragDropMode() == InternalMove) 
	{
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
	if (model()->dropMimeData(event->mimeData(), action, row, col, index) == true)
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

/*void MantisTableView::dragEnterEvent(QDragEnterEvent *event)
{
	QModelIndex index;

	int colDepart = -1;
	int rowDepart = -1;
	index = indexAt(event->pos());
	if (index.isValid() == true)
	{
		colDepart = index.column();
		rowDepart = index.row();
	}
}*/