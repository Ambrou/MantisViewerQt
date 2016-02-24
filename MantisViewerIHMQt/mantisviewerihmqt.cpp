#include "mantisviewerihmqt.h"
#include "..\MantisManager\BaseConnecteur.h"
#include "mantisviewerihm_connexion.h"
#include "..\MantisManager\Status.h"
#include "MantisTableView.h"

MantisViewerIHMQt::MantisViewerIHMQt(BaseConnecteur &baseConnecteur, QWidget *parent)
	: QMainWindow(parent), m_BaseConnecteur(baseConnecteur), m_standardModel(this)
{
	initialiserIHM();
	identifierUtilisateur();
	mettreAJourLaListeDesProjets();
	
	
	//------------------------------------------

	//--------------------------------------------------------------
	// Table View
	m_standardModel.setHorizontalHeaderLabels(headerList);
	mantisTableView->setModel(&m_standardModel);

}

MantisViewerIHMQt::~MantisViewerIHMQt()
{
	ui.setupUi(this);
	mantisTableView = new MantisTableView(ui.centralWidget);
	mantisTableView->setObjectName(QStringLiteral("tableView"));
	ui.verticalLayout->addWidget(mantisTableView);
}

void MantisViewerIHMQt::initialiserIHM()
{
	mantisviewerihm_connexion connexionDlg;

	if (connexionDlg.exec() == QDialog::Accepted)
	{
		m_user = connexionDlg.getUser();
		m_password = connexionDlg.getPassword();
	}
}

void MantisViewerIHMQt::identifierUtilisateur()
{
	mantisviewerihm_connexion connexionDlg;

	if (connexionDlg.exec() == QDialog::Accepted)
	{
		m_user = connexionDlg.getUser();
		m_password = connexionDlg.getPassword();
	}
}

void MantisViewerIHMQt::mettreAJourNomDesColonnes()
{
	QVector<Status> listeStatuts;
	m_BaseConnecteur.recupererStatut(listeStatuts, m_user, m_password);
	QStringList headerList;

	foreach(const Status status, listeStatuts)
	{
		headerList << status.nom();
		maxFromColonne.append(0);
	}
}

void MantisViewerIHMQt::mettreAJourLaListeDesProjets()
{
	QStringList listeProjets;
	m_BaseConnecteur.recupererProjets(listeProjets, m_user, m_password);
	ui.comboBox_Projet->addItems(listeProjets);
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
	m_standardModel.removeRows(0, m_standardModel.rowCount());
	
	m_BaseConnecteur.recupererTicketDeLaVersionsDuProjet(listeTickets, ui.comboBox_Projet->currentText(), newVersion, m_user, m_password);

	foreach(const Ticket ticket, listeTickets)
	{
		m_standardModel.setItem(maxFromColonne[(ticket.status() / 10) - 1], ticket.status() / 10, new QStandardItem(QString::number(ticket.numero())));
		maxFromColonne[(ticket.status() / 10) - 1] += 1;
	}
}