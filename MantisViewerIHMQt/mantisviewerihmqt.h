#ifndef MANTISVIEWERIHMQT_H
#define MANTISVIEWERIHMQT_H

#include <QtWidgets/QMainWindow>
#include "ui_mantisviewerihmqt.h"

class BaseConnecteur;
class modelMantis;

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

	modelMantis* m_MantisModel;

private slots :
	void onModificationProjet(QString newProjet);
};

#endif // MANTISVIEWERIHMQT_H
