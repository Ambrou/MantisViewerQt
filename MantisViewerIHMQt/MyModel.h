#pragma once

#include <QStandardItemModel>

class MyModel : public QStandardItemModel
{
public:
	MyModel();
	~MyModel();
	Qt::DropActions supportedDropActions() const;
	Qt::ItemFlags flags(const QModelIndex &index) const;
};

