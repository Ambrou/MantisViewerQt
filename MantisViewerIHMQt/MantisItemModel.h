#pragma once

#include <QStandardItemModel>
#include "..\MantisManager\Status.h"
#include "..\MantisManager\Ticket.h"

class MantisItemModel : public QStandardItemModel
{
public:
	MantisItemModel(QObject *parent);
	~MantisItemModel();
	void mettreAjourLeTitreDesColonnes(const QVector<Status>& listeStatuts);
	void ajouterLesTickets(const QVector<Ticket>& listeTickets);
	/*Qt::DropActions supportedDropActions() const;
	Qt::ItemFlags flags(const QModelIndex &index) const;*/
protected:
private:
	QMap<qint64, qint64> statusPosition;
};

