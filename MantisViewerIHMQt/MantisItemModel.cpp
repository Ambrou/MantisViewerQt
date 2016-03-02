#include "MantisItemModel.h"
#include "MantisItem.h"

MantisItemModel::MantisItemModel(QObject *parent)
	: QStandardItemModel(parent)
{
}


MantisItemModel::~MantisItemModel()
{
}

void MantisItemModel::mettreAJourLesCriticites(const QVector<MantisData::Criticite>& listeCriticite)
{

	foreach(const MantisData::Criticite criticite, listeCriticite)
	{
		Qt::GlobalColor couleur = Qt::white;
		if (criticite.nom() == "bloquant") couleur = Qt::red;
		if (criticite.nom() == "majeur") couleur = Qt::green;
		if (criticite.nom() == "mineur") couleur = Qt::blue;

		couleurWrapper[criticite.id()] = couleur;
	}
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
		setItem(nbTicketDansLaColonne[ticket.status()]++, colonneWrapper[ticket.status()], new MantisItem(ticket, couleurWrapper));
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
	QStandardItem *pItemMantis = item(index.row(), index.column());

	if (pItemMantis != 0)
	{
		return pItemMantis->flags();
	}

	return Qt::ItemIsSelectable
		| Qt::ItemIsEnabled
		| Qt::ItemIsDragEnabled
		| Qt::ItemIsDropEnabled;
}