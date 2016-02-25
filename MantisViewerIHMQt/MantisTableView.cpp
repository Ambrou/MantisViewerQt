#include "MantisTableView.h"
#include <qheaderview.h>

MantisTableView::MantisTableView(QWidget *parent)
	: QTableView(parent)
{
	setSelectionMode(QAbstractItemView::SingleSelection);
	verticalHeader()->setVisible(false);
}


MantisTableView::~MantisTableView()
{
}
