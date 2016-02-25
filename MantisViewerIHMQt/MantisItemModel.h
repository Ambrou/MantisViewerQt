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

	//int rowCount(const QModelIndex & parent = QModelIndex()) const Q_DECL_OVERRIDE;
	//int columnCount(const QModelIndex & parent = QModelIndex()) const Q_DECL_OVERRIDE;
	//QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
	//QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
	/*Qt::DropActions supportedDropActions() const;
	Qt::ItemFlags flags(const QModelIndex &index) const;*/
protected:
private:
	/*struct ColonneInfo
	{
		Status status;
		//qint64 ColonneNumber
	};
	
	QList<ColonneInfo> colonneInformations;*/

	QMap<qint64, qint64> colonneWrapper;
	QMap<qint64, qint64> nbTicketDansLaColonne;
	//QMap <qint64, QVector< qint64 > > tickets;
	//

};

