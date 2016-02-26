#include "MantisItemModel.h"


MantisItemModel::MantisItemModel(QObject *parent)
	: QStandardItemModel(parent)
{
}


MantisItemModel::~MantisItemModel()
{
}

void MantisItemModel::mettreAjourLeTitreDesColonnes(const QVector<Status>& listeStatuts)
{
	QStringList nomDesColonnes;
	foreach(const Status status, listeStatuts)
	{
		colonneWrapper[status.id()] = nomDesColonnes.size();
		nbTicketDansLaColonne[status.id()] = 0;
		nomDesColonnes << status.nom();
	}
	setHorizontalHeaderLabels(nomDesColonnes);
}

void MantisItemModel::ajouterLesTickets(const QVector<Ticket>& listeTickets)
{
	QList<qint64> clefs = nbTicketDansLaColonne.keys();
	foreach(const qint64 clef, clefs)
	{
		nbTicketDansLaColonne[clef] = 0;
	}
	removeRows(0, rowCount());
	
	foreach(const Ticket ticket, listeTickets)
	{
		QStandardItem *item = new QStandardItem(QString::number(ticket.numero()));
		item->setBackground(QBrush(Qt::darkYellow));
		setItem(nbTicketDansLaColonne[ticket.status()]++, colonneWrapper[ticket.status()], item);
	}
}
//
//int MantisItemModel::rowCount(const QModelIndex & parent) const
//{
//	//return 50;
//	int nbRow = 0;
//	foreach(QVector< qint64 > listTicket, tickets)
//	{
//		nbRow = qMax(nbRow, listTicket.size());
//	}
//	return nbRow;
//}
//
//int MantisItemModel::columnCount(const QModelIndex & parent) const
//{
//	return nomDesColonnes.size();
//}
//
//QVariant MantisItemModel::data(const QModelIndex & index, int role) const
//{
//	return QVariant();
//	/*if (!index.isValid() || role != Qt::DisplayRole)
//		return QVariant();
//
//	if (columnCount() < index.column())
//		return QVariant();
//
//	if (tickets[index.column()].size() < index.row())
//		return QVariant();
//
//	return QVariant(tickets[index.column()][index.row()]);*/
//}
//
//QVariant MantisItemModel::headerData(int section, Qt::Orientation orientation, int role) const
//{
//	if (role != Qt::DisplayRole)
//		return QVariant();
//
//	if (orientation == Qt::Horizontal) {
//		return nomDesColonnes[section];
//	}
//	return QVariant();
//	
//}

//Qt::DropActions MyModel::supportedDropActions() const
//{
//	return Qt::CopyAction | Qt::MoveAction;
//}
//
//Qt::ItemFlags MyModel::flags(const QModelIndex &index) const
//{
//	Qt::ItemFlags defaultFlags = QStandardItemModel::flags(index);
//
//	if (index.isValid())
//		return Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | defaultFlags;
//	else
//		return Qt::ItemIsDropEnabled | defaultFlags;
//}