#include "mantisviewerihmqt.h"
#include "..\MantisManager\BaseConnecteur.h"
#include "mantisviewerihm_connexion.h"
#include "modelMantis.h"

MantisViewerIHMQt::MantisViewerIHMQt(BaseConnecteur &baseConnecteur, QWidget *parent)
	: QMainWindow(parent), m_BaseConnecteur(baseConnecteur)
{
	// Initialisation IHM
	ui.setupUi(this);

	/*mantisviewerihm_connexion connexionDlg;
	int iRetour = connexionDlg.exec();
	if (iRetour == QDialog::Accepted)
	{
		m_user = connexionDlg.getUser();
		m_password = connexionDlg.getPassword();
	}*/
	m_user = "apetitgenet";
	m_password = "MAg28vkwde";
	m_MantisModel = new modelMantis(this);

	ui.tableView->setModel(m_MantisModel);
	QVector<Status> listeStatus;
	m_BaseConnecteur.recupererStatut(listeStatus, m_user, m_password);
	QVector<Ticket>listeTicket;
	m_BaseConnecteur.recupererTicketsDuProjet(listeTicket, "TRIXELL-TETRIS", m_user, m_password);

	m_MantisModel->afficheEnteteTableau(listeStatus);
	m_MantisModel->enregistreAnomalie(listeTicket);

	// récupération de la liste des projets
	//QVector<QString> listeProjets;
	//QString nomProjet;
	//m_BaseConnecteur.recupererProjets(listeProjets, m_user, m_password);

	/*foreach(nomProjet, listeProjets)
	{
		ui.comboBox_Projet->addItem(nomProjet);
	}*/

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