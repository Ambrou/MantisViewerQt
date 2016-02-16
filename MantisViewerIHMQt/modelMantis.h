#pragma once
#include <QAbstractTableModel>
#include "../MantisManager/Status.h"
#include "../MantisManager/Ticket.h"

class modelMantis :
	public QAbstractTableModel
{
public:
	modelMantis(QObject *parent);
	~modelMantis();

	void afficheEnteteTableau(const QVector<Status>& listeStatus);
	void enregistreAnomalie(const QVector<Ticket>&listeTicket);

	int rowCount(const QModelIndex & parent = QModelIndex()) const Q_DECL_OVERRIDE;
	int columnCount(const QModelIndex & parent = QModelIndex()) const Q_DECL_OVERRIDE;
	QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

private:
	int nbColonne;

	QMap<quint64, QVector<quint64> > model;
};

