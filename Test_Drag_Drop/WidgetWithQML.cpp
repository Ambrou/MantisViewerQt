#include "WidgetWithQML.h"
#include <QQuickView>

WidgetWithQML::WidgetWithQML(QQuickView* view, QWidget *parent)
{
	view->setSource(QUrl("main.qml"));
}


WidgetWithQML::~WidgetWithQML()
{
}
