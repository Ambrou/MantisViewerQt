#pragma once

#include <QStandardItem>
#include "..\MantisData\Ticket.h"


class MantisItem :
	public QStandardItem
{
public:
	MantisItem(const MantisData::Ticket& ticket);
	~MantisItem();
	QVariant data(int role = Qt::UserRole + 1) const;

private:
	const MantisData::Ticket m_Ticket;
};

