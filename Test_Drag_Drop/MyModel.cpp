#include "MyModel.h"
#include <QMimeData>


MyModel::MyModel(QObject * parent)
	: QStandardItemModel(parent)
{
}


MyModel::~MyModel()
{
}

Qt::DropActions MyModel::supportedDropActions() const
{
	Qt::DropActions drop = QStandardItemModel::supportedDropActions();
	return Qt::CopyAction | Qt::MoveAction;
	return drop;
}

Qt::ItemFlags MyModel::flags(const QModelIndex &index) const
{
	Qt::ItemFlags defaultFlags = QStandardItemModel::flags(index);

	if (index.isValid())
		return Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | defaultFlags;
	else
		return Qt::ItemIsDropEnabled | defaultFlags;
}

bool MyModel::canDropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent)
{
	Q_UNUSED(action);
	Q_UNUSED(row);
	Q_UNUSED(parent);

	if (column < 0 && columnCount() < column)
		return false;

	return true;
}

bool MyModel::dropMimeData(const QMimeData *data,Qt::DropAction action, int row, int column, const QModelIndex &parent)
{
	if (!canDropMimeData(data, action, row, column, parent))
		return false;
	
	if (action == Qt::IgnoreAction)
		return true;

	insertRow(rowCount(), QModelIndex());
	
	for (int iRow = rowCount() - 1; row  <= iRow; --iRow)
	{
		QStandardItem* ot = takeItem(iRow - 1, column);
		setItem(iRow, column, ot);
	}
	setItem(row, column, new QStandardItem("rajout"));
}

//
//QStringList MyModel::mimeTypes() const
//{
//	QStringList types;
//	types << "application/vnd.text.list";
//	return types;
//}
