#include "modelMantis.h"


modelMantis::modelMantis(QObject *parent)
	: QAbstractTableModel(parent)
{
}


modelMantis::~modelMantis()
{
}

int modelMantis::rowCount(const QModelIndex & parent) const
{
	int nbLigne = 0;
	QVector<quint64> listeTicket;
	foreach(listeTicket, model)
	{
		if (nbLigne < listeTicket.size())
		{
			nbLigne = listeTicket.size();
		}
	}

	return nbLigne;
}

int modelMantis::columnCount(const QModelIndex & parent) const
{
	return nbColonne;
}


void modelMantis::afficheEnteteTableau(const QVector<Status>& listeStatus)
{
	nbColonne = listeStatus.size();
}


void modelMantis::enregistreAnomalie(const QVector<Ticket>&listeTicket)
{
	foreach(Ticket ticket, listeTicket)
	{
		model[ticket.status()/10].append(ticket.numero());
	}
}

QVariant modelMantis::data(const QModelIndex & index, int role) const
{
	if (!index.isValid() || role != Qt::DisplayRole)
	{

		return QVariant();
	}
	if (model[index.column()].size() <= index.row())
	{
		return QVariant();
	}
	return model[index.column()].at(index.row());
}
