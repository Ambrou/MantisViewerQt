#include "mantisviewerihmqt.h"
#include "..\MantisManager\BaseConnecteur.h"
#include "mantisviewerihm_connexion.h"
#include "..\MantisManager\Status.h"

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
	//------------------------------------------------------------
	// recupération des status
	QVector<Status> listeStatuts;
	m_BaseConnecteur.recupererStatut(listeStatuts, m_user, m_password);
	QStringList headerList;

	foreach(const Status status, listeStatuts)
	{
		headerList << status.nom();
		maxFromColonne.append(0);
	}
	//------------------------------------------

	//--------------------------------------------------------------
	// Table View
	//ui.tableView->setModel(&m_tableModel);
	m_standardModel.setHorizontalHeaderLabels(headerList);
	ui.tableView->setModel(&m_standardModel);

	//--------------------------------------------------------------
	// Table Widget
	
	ui.tableWidget->setColumnCount(headerList.size());
	ui.tableWidget->setHorizontalHeaderLabels(headerList);


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
	//m_standardModel.clear();
	m_standardModel.removeRows(0, m_standardModel.rowCount());

	

	m_BaseConnecteur.recupererTicketDeLaVersionsDuProjet(listeTickets, ui.comboBox_Projet->currentText(), newVersion, m_user, m_password);

	foreach(const Ticket ticket, listeTickets)
	{
		m_standardModel.setItem(maxFromColonne[(ticket.status() / 10) - 1], ticket.status() / 10, new QStandardItem(QString::number(ticket.numero())));
		maxFromColonne[(ticket.status() / 10) - 1] += 1;
	}
}