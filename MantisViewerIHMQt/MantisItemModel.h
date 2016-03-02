#pragma once

#include <QStandardItemModel>
#include "..\MantisData\Status.h"
#include "..\MantisData\Ticket.h"

class MantisItemModel : public QStandardItemModel
{
public:
	MantisItemModel(QObject *parent);
	~MantisItemModel();
	void mettreAjourLeTitreDesColonnes(const QVector<MantisData::Status>& listeStatuts);
	void ajouterLesTickets(const QVector<MantisData::Ticket>& listeTickets);
	Qt::ItemFlags flags(const QModelIndex &index) const;

protected:
private:
	void remiseAZeroDuModel();
	QMap<qint64, qint64> colonneWrapper;
	QMap<qint64, qint64> nbTicketDansLaColonne;

};

