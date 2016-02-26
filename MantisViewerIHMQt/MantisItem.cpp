#include "MantisItem.h"

MantisItem::MantisItem(const Ticket& ticket)
	: m_Ticket(ticket)
{
	setBackground(QBrush(Qt::darkYellow));
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