#include "MantisViewerConsoleQt.h"
#include <QVector>
#include "..\MantisManager\BaseConnecteur.h"
#include "LecteurCommande.h"

MantisViewerConsoleQt::MantisViewerConsoleQt(QObject *parent, BaseConnecteur &baseConnecteur, LecteurCommande& lecteurCommande)
	: QThread(parent), m_BaseConnecteur(baseConnecteur), m_LecteurCommande(lecteurCommande)
{
	m_Login = "";
	m_MotDePasse = "";
}

void MantisViewerConsoleQt::run()
{
	QString commandeSaisie("");
	do
	{
		commandeSaisie = m_LecteurCommande.lireCommande();

	} while (traiterCommandeEtAttendreLaSuivante(commandeSaisie) == true);
}

bool MantisViewerConsoleQt::traiterCommandeEtAttendreLaSuivante(const QString& nomCommande)
{
	bool attendreCommandeSuivante = true;
	if (nomCommande == "quitter")
	{
		emit quitter();
		attendreCommandeSuivante = false;
	}
	else if (nomCommande == "connecter")
	{
		m_LecteurCommande.ecrire("Login :");
		m_Login = m_LecteurCommande.lireCommande();
		m_LecteurCommande.ecrire("Mot de passe :");
		m_MotDePasse = m_LecteurCommande.lireCommande();
	}
	else if (nomCommande == "lister projets")
	{
		QVector<QString>listeProjets;
		QString nomProjet("");
		m_BaseConnecteur.recupererProjets(listeProjets, login(), motDePasse());
		foreach(nomProjet, listeProjets)
		{
			m_LecteurCommande.ecrire(nomProjet);
		}
	}
	else if (nomCommande == "lister tickets")
	{
		QVector<QString>listeTickets;
		QString nomProjet(m_LecteurCommande.lireCommande());
		m_BaseConnecteur.recupererTicketsDuProjet(listeTickets, nomProjet, login(), motDePasse());
		foreach(QString nomTicket, listeTickets)
		{
			m_LecteurCommande.ecrire(nomTicket);
		}
	}
	return attendreCommandeSuivante;
}

QString MantisViewerConsoleQt::login() const
{
	return m_Login;
}
QString MantisViewerConsoleQt::motDePasse() const
{
	return m_MotDePasse;
}