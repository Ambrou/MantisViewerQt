#include "mantisviewerihmqt.h"
#include "..\MantisManager\BaseConnecteur.h"

MantisViewerIHMQt::MantisViewerIHMQt(BaseConnecteur &baseConnecteur, QWidget *parent)
	: QMainWindow(parent), m_BaseConnecteur(baseConnecteur)
{
	// Initialisation IHM
	ui.setupUi(this);

	m_user = "arivier";
	m_password = "bmanpj10";

	// récupération de la liste des projets
	QVector<QString> listeProjets;
	QString nomProjet;
	m_BaseConnecteur.recupererProjets(listeProjets, m_user, m_password);

	foreach(nomProjet, listeProjets)
	{
		ui.comboBox_Projet->addItem(nomProjet);
	}

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