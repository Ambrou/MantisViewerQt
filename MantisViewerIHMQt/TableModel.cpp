#include "TableModel.h"


TableModel::TableModel()
{
}


TableModel::~TableModel()
{
}

int TableModel::rowCount(const QModelIndex & parent) const
{
	return 2;
}
int TableModel::columnCount(const QModelIndex & parent) const
{
	return 2;
}
QVariant TableModel::data(const QModelIndex & index, int role) const
{
	return index.column() * index.row();
}

void TableModel::setTickets(const QVector<Ticket> &listTickets)
{

}