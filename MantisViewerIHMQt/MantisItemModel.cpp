#include "MantisItemModel.h"
#include "MantisItem.h"
#include "QMimeData"

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

		m_CouleurWrapper[criticite.id()] = couleur;
	}
}
void MantisItemModel::mettreAjourLeTitreDesColonnes(const QVector<MantisData::Status>& listeStatuts)
{
	QStringList nomDesColonnes;
	foreach(const MantisData::Status status, listeStatuts)
	{
		m_ColonneWrapper[status.id()] = nomDesColonnes.size();
		m_NbTicketDansLaColonne[status.id()] = 0;
		nomDesColonnes << status.nom();
	}
	setHorizontalHeaderLabels(nomDesColonnes);
}

void MantisItemModel::ajouterLesTickets(const QVector<MantisData::Ticket>& listeTickets)
{
	remiseAZeroDuModel();
	
	foreach(const MantisData::Ticket ticket, listeTickets)
	{
		const qint64 iLigne = recupererPremiereLigneLibreDuStatus(ticket.status());
		const qint64 iColonne = recupererLaColonneDuStatus(ticket.status());
		MantisItem* pMantisItem = new MantisItem(ticket, m_CouleurWrapper);
		setItem(iLigne, iColonne, pMantisItem);
		incrementerNombreDeTicketDansLeStatus(ticket.status());
	}
}

qint64 MantisItemModel::recupererPremiereLigneLibreDuStatus(const qint64 iStatus) const
{
	return m_NbTicketDansLaColonne[iStatus];
}

qint64 MantisItemModel::recupererLaColonneDuStatus(const qint64 iStatus) const
{
	return m_ColonneWrapper[iStatus];
}

void MantisItemModel::incrementerNombreDeTicketDansLeStatus(const qint64 iStatus)
{
	m_NbTicketDansLaColonne[iStatus]++;
}

void MantisItemModel::remiseAZeroDuModel()
{
	const QList<qint64> clefs = m_NbTicketDansLaColonne.keys();
	foreach(const qint64 clef, clefs)
	{
		m_NbTicketDansLaColonne[clef] = 0;
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

Qt::DropActions MantisItemModel::supportedDropActions() const
{
	return Qt::CopyAction | Qt::MoveAction;
}

bool MantisItemModel::dropMimeData(const QMimeData *data,Qt::DropAction action, int row, int column, const QModelIndex &parent)
{
	bool bResult = true;

	if (action == Qt::IgnoreAction)
		return true;

	QByteArray encodedData = data->data("application/vnd.text.list");
	QDataStream stream(&encodedData, QIODevice::ReadOnly);

	QString text;
	QString tooltip;
	while (!stream.atEnd()) {
		
		stream >> text >> tooltip;
	}

	QStandardItem *pnewItem = new QStandardItem(text);
	if (pnewItem)
	{
		pnewItem->setToolTip(tooltip);
	}
	setItem(row, column, pnewItem);

	return bResult;
}

QStringList MantisItemModel::mimeTypes() const
{
	QStringList types;
	types << "application/vnd.text.list";
	return types;
}


QMimeData *MantisItemModel::mimeData(const QModelIndexList &indexes) const
{
	QMimeData *mimeData = new QMimeData();
	QByteArray encodedData;

	QDataStream stream(&encodedData, QIODevice::WriteOnly);

	foreach(const QModelIndex &index, indexes) {
		if (index.isValid()) {
			QString text = data(index, Qt::DisplayRole).toString();
			QString tooltip = data(index, Qt::ToolTipRole).toString();
			stream << text << tooltip;
		}
	}

	mimeData->setData("application/vnd.text.list", encodedData);
	return mimeData;
}