#include "MantisItemModel.h"


MantisItemModel::MantisItemModel(QObject *parent)
	: QAbstractTableModel(parent)
{
}


MantisItemModel::~MantisItemModel()
{
}

void MantisItemModel::mettreAjourLeTitreDesColonnes(const QVector<Status>& listeStatuts)
{
	
	//qint64 colonnePosition = 0;
	foreach(const Status status, listeStatuts)
	{
		nomDesColonnes << status.nom();
		//mapStatus[status.id()].position = colonnePosition++;
		//mapStatus[status.id()].status = status;
	}
	//setHorizontalHeaderLabels(nomDesColonnes);
}

void MantisItemModel::ajouterLesTickets(const QVector<Ticket>& listeTickets)
{
	removeRows(0, rowCount());

	QVector<QVector< qint64 > > idTicket;

	foreach(const Ticket ticket, listeTickets)
	{
		//setItem(statusPosition[ticket.status()], new QStandardItem(QString::number(ticket.numero())));
	}
}

int MantisItemModel::rowCount(const QModelIndex & parent) const
{
	return 0;
}

int MantisItemModel::columnCount(const QModelIndex & parent) const
{
	return nomDesColonnes.size();
}

QVariant MantisItemModel::data(const QModelIndex & index, int role) const
{
	return QVariant();
}
QVariant MantisItemModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (role != Qt::DisplayRole)
		return QVariant();

	if (orientation == Qt::Horizontal) {
		return nomDesColonnes[section];
	}
	return QVariant();
	
}

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