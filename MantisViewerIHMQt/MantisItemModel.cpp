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
	qint64 colonnePosition = 0;
	foreach(const Status status, listeStatuts)
	{
		nomDesColonnes << status.nom();
		statusPosition[status.id()] = colonnePosition++;
	}
	setHorizontalHeaderLabels(nomDesColonnes);
}

void MantisItemModel::ajouterLesTickets(const QVector<Ticket>& listeTickets)
{
	removeRows(0, rowCount());

	foreach(const Ticket ticket, listeTickets)
	{

	}
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