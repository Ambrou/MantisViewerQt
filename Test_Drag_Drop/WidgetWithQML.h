#pragma once
#include <qwidget>
#include <QQuickView>

class WidgetWithQML :
	public QWidget
{
public:
	WidgetWithQML(QQuickView* view, QWidget *parent);
	~WidgetWithQML();
};

