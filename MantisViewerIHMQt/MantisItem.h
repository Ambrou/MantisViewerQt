#pragma once

#include <QStandardItem>
#include "..\MantisData\Ticket.h"


class MantisItem :
	public QStandardItem
{
public:
	MantisItem(const Ticket& ticket);
	~MantisItem();
	QVariant data(int role = Qt::UserRole + 1) const;

private:
	const Ticket m_Ticket;
};

