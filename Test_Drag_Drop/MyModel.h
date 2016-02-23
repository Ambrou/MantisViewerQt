#pragma once

#include <QStandardItemModel>

class MyModel :
	public QStandardItemModel
{
public:
	MyModel(QObject * parent);
	~MyModel();
};

