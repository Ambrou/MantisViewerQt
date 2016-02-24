#pragma once

#include <QStandardItemModel>

class MantisItemModel : public QStandardItemModel
{
public:
	MantisItemModel(QObject *parent);
	~MantisItemModel();
	/*Qt::DropActions supportedDropActions() const;
	Qt::ItemFlags flags(const QModelIndex &index) const;*/
};

