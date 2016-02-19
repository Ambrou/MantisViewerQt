#pragma once
#include "qabstractitemmodel.h"
#include "../MantisManager/Ticket.h"

class TableModel :
	public QAbstractTableModel
{
public:
	TableModel();
	~TableModel();

	int rowCount(const QModelIndex & parent = QModelIndex()) const;
	int columnCount(const QModelIndex & parent = QModelIndex()) const;
	QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

	void setTickets(const QVector<Ticket> &listTickets);
};

