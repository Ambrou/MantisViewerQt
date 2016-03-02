#include "MantisItemModel.h"
#include "MantisItem.h"

MantisItemModel::MantisItemModel(QObject *parent)
	: QStandardItemModel(parent)
{
}


MantisItemModel::~MantisItemModel()
{
}

void MantisItemModel::mettreAjourLeTitreDesColonnes(const QVector<MantisData::Status>& listeStatuts)
{
	QStringList nomDesColonnes;
	foreach(const MantisData::Status status, listeStatuts)
	{
		colonneWrapper[status.id()] = nomDesColonnes.size();
		nbTicketDansLaColonne[status.id()] = 0;
		nomDesColonnes << status.nom();
	}
	setHorizontalHeaderLabels(nomDesColonnes);
}

void MantisItemModel::ajouterLesTickets(const QVector<MantisData::Ticket>& listeTickets)
{
	remiseAZeroDuModel();
	
	foreach(const MantisData::Ticket ticket, listeTickets)
	{
		setItem(nbTicketDansLaColonne[ticket.status()]++, colonneWrapper[ticket.status()], new MantisItem(ticket));
	}
}

void MantisItemModel::remiseAZeroDuModel()
{
	QList<qint64> clefs = nbTicketDansLaColonne.keys();
	foreach(const qint64 clef, clefs)
	{
		nbTicketDansLaColonne[clef] = 0;
	}
	removeRows(0, rowCount());
}


Qt::ItemFlags MantisItemModel::flags(const QModelIndex &index) const
{
	QStandardItem *pitem = item(index.row(), index.column());

	if (pitem)
	{
		return pitem->flags();
	}
	return Qt::ItemIsSelectable
		| Qt::ItemIsEnabled
		| Qt::ItemIsDragEnabled
		| Qt::ItemIsDropEnabled;
}