#include "MantisItem.h"

MantisItem::MantisItem(const MantisData::Ticket& ticket, const QMap<qint64, Qt::GlobalColor>& couleurWrapper)
	: m_Ticket(ticket)
{
	setBackground(couleurWrapper[m_Ticket.severite()]);
	setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled);
}


MantisItem::~MantisItem()
{
}

QVariant MantisItem::data(int role) const
{
	if (role == Qt::DisplayRole)
	{
		return QString::number(m_Ticket.numero());
	}
	return QStandardItem::data(role);
}