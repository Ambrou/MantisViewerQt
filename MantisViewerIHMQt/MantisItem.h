#pragma once

#include <QStandardItem>

namespace MantisData
{
	class Ticket;
}


class MantisItem :
	public QStandardItem
{
public:
	MantisItem(const MantisData::Ticket& ticket, const QMap<qint64, Qt::GlobalColor>& couleurWrapper);
	~MantisItem();

private:
};

