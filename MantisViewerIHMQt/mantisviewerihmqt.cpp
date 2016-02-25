#include "mantisviewerihmqt.h"
#include "..\MantisManager\BaseConnecteur.h"
#include "mantisviewerihm_connexion.h"
#include "..\MantisManager\Status.h"
#include "MantisTableView.h"
#include "MantisItemModel.h"

MantisViewerIHMQt::MantisViewerIHMQt(BaseConnecteur &baseConnecteur, QWidget *parent)
	: QMainWindow(parent), m_BaseConnecteur(baseConnecteur)
{
	initialiserIHM();
	identifierUtilisateur();
	mettreAJourNomDesColonnes();
	mettreAJourLaListeDesProjets();
	
	
	//------------------------------------------

	//--------------------------------------------------------------
	// Table View
	
	mantisTableView->setModel(standardModel);

}

MantisViewerIHMQt::~MantisViewerIHMQt()
{
	
}

void MantisViewerIHMQt::initialiserIHM()
{
	ui.setupUi(this);
	mantisTableView = new MantisTableView(ui.centralWidget);
	mantisTableView->setObjectName(QStringLiteral("tableView"));
	ui.verticalLayout->addWidget(mantisTableView);
	standardModel = new MantisItemModel(mantisTableView);
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
	standardModel->mettreAjourLeTitreDesColonnes(listeStatuts);
}

void MantisViewerIHMQt::mettreAJourLaListeDesProjets()
{
	QStringList listeProjets;
	m_BaseConnecteur.recupererProjets(listeProjets, m_user, m_password);
	ui.comboBox_Projet->addItems(listeProjets);
}

void MantisViewerIHMQt::onModificationProjet(QString newProjet)
{
	QStringList listeVersions;

	ui.comboBox_Version->clear();
	m_BaseConnecteur.recupererVersionsDuProjet(listeVersions, newProjet, m_user, m_password);
	ui.comboBox_Version->addItems(listeVersions);
}

void MantisViewerIHMQt::onModificationVersion(QString newVersion)
{
	QVector<Ticket> listeTickets;
	
	m_BaseConnecteur.recupererTicketDeLaVersionsDuProjet(listeTickets, ui.comboBox_Projet->currentText(), newVersion, m_user, m_password);
	standardModel->ajouterLesTickets(listeTickets);
	
}