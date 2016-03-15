#include "MantisItem.h"
#include "..\MantisData\Ticket.h"

MantisItem::MantisItem(const MantisData::Ticket& ticket, const QMap<qint64, Qt::GlobalColor>& couleurWrapper)
{
	setText(QString::number(ticket.numero()));
	setBackground(couleurWrapper[ticket.severite()]);
	setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
	setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled);
	setToolTip(ticket.titre());
}


MantisItem::~MantisItem()
{
}
/*
QVariant MantisItem::data(int role) const
{
	if (role == Qt::DisplayRole)
	{
		return QString::number(m_Ticket.numero());
	}
	else if (role == Qt::BackgroundRole)
	{
		return QVariant(QColor(m_BackGroundColor));
	}
	else if (role == Qt::TextAlignmentRole)
	{
		return QVariant(Qt::AlignVCenter | Qt::AlignHCenter);
	}
	return QStandardItem::data(role);
}*/