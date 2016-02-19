#include "mantisviewerihmqt.h"
#include "..\MantisManager\BaseConnecteur.h"
#include "mantisviewerihm_connexion.h"


MantisViewerIHMQt::MantisViewerIHMQt(BaseConnecteur &baseConnecteur, QWidget *parent)
	: QMainWindow(parent), m_BaseConnecteur(baseConnecteur)
{
	// Initialisation IHM
	ui.setupUi(this);

	mantisviewerihm_connexion connexionDlg;
	int iRetour = connexionDlg.exec();
	if (iRetour == QDialog::Accepted)
	{
		m_user = connexionDlg.getUser();
		m_password = connexionDlg.getPassword();
	}

	// récupération de la liste des projets
	QVector<QString> listeProjets;
	QString nomProjet;
	m_BaseConnecteur.recupererProjets(listeProjets, m_user, m_password);

	foreach(nomProjet, listeProjets)
	{
		ui.comboBox_Projet->addItem(nomProjet);
	}

	ui.tableView->setModel(&m_tableModel);

}

MantisViewerIHMQt::~MantisViewerIHMQt()
{

}

void MantisViewerIHMQt::onModificationProjet(QString newProjet)
{
	ui.comboBox_Version->clear();

	QVector<QString> listeVersions;
	QString nomVersion;

	m_BaseConnecteur.recupererVersionsDuProjet(listeVersions, newProjet, m_user, m_password);

	foreach(nomVersion, listeVersions)
	{
		ui.comboBox_Version->addItem(nomVersion);
	}
}

void MantisViewerIHMQt::onModificationVersion(QString newVersion)
{
	QVector<Ticket> listeTickets;

	m_BaseConnecteur.recupererTicketDeLaVersionsDuProjet(listeTickets, ui.comboBox_Projet->currentText(), newVersion, m_user, m_password);

	
}