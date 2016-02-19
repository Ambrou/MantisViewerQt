#ifndef MANTISVIEWERIHMQT_H
#define MANTISVIEWERIHMQT_H

#include <QtWidgets/QMainWindow>
#include "ui_mantisviewerihmqt.h"
#include "TableModel.h"

class BaseConnecteur;

class MantisViewerIHMQt : public QMainWindow
{
	Q_OBJECT

public:
	MantisViewerIHMQt(BaseConnecteur &baseConnecteur, QWidget *parent = 0);
	~MantisViewerIHMQt();

private:
	Ui::MantisViewerIHMQtClass ui;

	BaseConnecteur& m_BaseConnecteur;

	QString m_user;
	QString m_password;

	TableModel m_tableModel;

private slots :
	void onModificationProjet(QString newProjet);
	void onModificationVersion(QString newVersion);
};

#endif // MANTISVIEWERIHMQT_H
