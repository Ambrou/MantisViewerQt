#ifndef MANTISVIEWERIHMQT_H
#define MANTISVIEWERIHMQT_H

#include <QtWidgets/QMainWindow>
#include "ui_mantisviewerihmqt.h"

namespace MantisManager
{
	class BaseConnecteur;
}

class MantisTableView;
class MantisItemModel;

class MantisViewerIHMQt : public QMainWindow
{
	Q_OBJECT

public:
	MantisViewerIHMQt(MantisManager::BaseConnecteur &baseConnecteur, QWidget *parent = 0);
	~MantisViewerIHMQt();

private:
	void initialiserIHM();
	void initialiserLesCouleursDesTickets();
	void identifierUtilisateur();
	void mettreAJourNomDesColonnes();
	void mettreAJourLaListeDesProjets();

	Ui::MantisViewerIHMQtClass ui;

	MantisManager::BaseConnecteur& m_BaseConnecteur;

	QString m_user;
	QString m_password;

	MantisTableView *mantisTableView;
	MantisItemModel *standardModel;

private slots :
	void onModificationProjet(QString newProjet);
	void onModificationVersion(QString newVersion);
};

#endif // MANTISVIEWERIHMQT_H
