#include "MyModel.h"


MyModel::MyModel()
{
}


MyModel::~MyModel()
{
}

Qt::DropActions MyModel::supportedDropActions() const
{
	return Qt::CopyAction | Qt::MoveAction;
}

Qt::ItemFlags MyModel::flags(const QModelIndex &index) const
{
	Qt::ItemFlags defaultFlags = QStandardItemModel::flags(index);

	if (index.isValid())
		return Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | defaultFlags;
	else
		return Qt::ItemIsDropEnabled | defaultFlags;
}