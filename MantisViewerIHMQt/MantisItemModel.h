#pragma once

#include <QStandardItemModel>
#include "..\MantisData\Status.h"
#include "..\MantisData\Ticket.h"
#include "..\MantisData\Criticite.h"

class MantisItemModel : public QStandardItemModel
{
public:
	MantisItemModel(QObject *parent);
	~MantisItemModel();

	void mettreAJourLesCriticites(const QVector<MantisData::Criticite>& listeCriticite);
	void mettreAjourLeTitreDesColonnes(const QVector<MantisData::Status>& listeStatuts);
	void ajouterLesTickets(const QVector<MantisData::Ticket>& listeTickets);
	Qt::ItemFlags flags(const QModelIndex &index) const;
	Qt::DropActions supportedDropActions() const;
	bool dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent);

protected:
private:
	void remiseAZeroDuModel();
	qint64 recupererPremiereLigneLibreDuStatus(const qint64 iStatus) const;
	qint64 recupererLaColonneDuStatus(const qint64 iStatus) const;
	void incrementerNombreDeTicketDansLeStatus(const qint64 iStatus);
	QMap<qint64, qint64> m_ColonneWrapper;
	QMap<qint64, Qt::GlobalColor> m_CouleurWrapper;
	QMap<qint64, qint64> m_NbTicketDansLaColonne;

};

