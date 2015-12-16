#include "MantisViewerConsoleQt.h"
#include <QVector>
#include "..\MantisManager\BaseConnecteur.h"
#include "IOManager.h"
#include <QException>

MantisViewerConsoleQt::MantisViewerConsoleQt(QObject *parent, BaseConnecteur &baseConnecteur, IOManager& _IOManager)
	: QThread(parent), m_BaseConnecteur(baseConnecteur), m_IoManager(_IOManager)
{
	m_Login = "";
	m_MotDePasse = "";
}

void MantisViewerConsoleQt::run()
{
	QString commandeSaisie("");
	do
	{
		commandeSaisie = m_IoManager.lireCommande();

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
		m_IoManager.ecrire("Login :");
		m_Login = m_IoManager.lireCommande();
		m_IoManager.ecrire("Mot de passe :");
		m_MotDePasse = m_IoManager.lireCommande();
	}
	else if (nomCommande == "lister projets")
	{
		QVector<QString>listeProjets;
		QString nomProjet("");
		m_BaseConnecteur.recupererProjets(listeProjets, login(), motDePasse());
		foreach(nomProjet, listeProjets)
		{
			m_IoManager.ecrire(nomProjet);
		}
	}
	else if (nomCommande == "lister tickets")
	{
		QVector<QString>listeTickets;
		QString nomProjet(m_IoManager.lireCommande());
		m_BaseConnecteur.recupererTicketsDuProjet(listeTickets, nomProjet, login(), motDePasse());
		foreach(QString nomTicket, listeTickets)
		{
			m_IoManager.ecrire(nomTicket);
		}
	}
	else if (nomCommande == "lister versions")
	{
		QVector<QString>listeTickets;
		QString nomProjet(m_IoManager.lireCommande());
		m_BaseConnecteur.recupererVersionsDuProjet(listeTickets, nomProjet, login(), motDePasse());
		foreach(QString nomTicket, listeTickets)
		{
			m_IoManager.ecrire(nomTicket);
		}
	}
	else if (nomCommande == "aa")
	{
		m_BaseConnecteur.recupererTout();
		m_IoManager.ecrire("Fait");

	}
	else if (nomCommande == "lister tickets pour une version")
	{
		QVector<QString>listeTickets;
		m_IoManager.ecrire("Projet");
		QString nomProjet(m_IoManager.lireCommande());
		m_IoManager.ecrire("Version");
		QString nomVersion(m_IoManager.lireCommande());
		m_BaseConnecteur.recupererTicketDeLaVersionsDuProjet(listeTickets, nomProjet, nomVersion, login(), motDePasse());
		foreach(QString nomTicket, listeTickets)
		{
			m_IoManager.ecrire(nomTicket);
		}
	}
	else if (nomCommande == "changer etat ticket")
	{
		try
		{
		m_IoManager.ecrire("Numero du Ticket");
		QString idTicket(m_IoManager.lireCommande());
		m_IoManager.ecrire("Nouvel Etat");
		QString nouvelEtat(m_IoManager.lireCommande());
		m_BaseConnecteur.changerEtatTicket(idTicket, nouvelEtat, login(), motDePasse());
		}
		catch (const QException& e)
		{
			QString err(e.what());
			m_IoManager.ecrire(err);
		}
		
	}
	else if (nomCommande == "creer version")
	{
		try
		{
		m_IoManager.ecrire("Nom du projet");
		QString nomProjet(m_IoManager.lireCommande());
		m_IoManager.ecrire("Nom nouvelle version");
		QString nouvelleVersion(m_IoManager.lireCommande());
		m_BaseConnecteur.creerUneVersion(nomProjet, nouvelleVersion, login(), motDePasse());
		}
		catch (const QException& e)
		{
			QString err(e.what());
			m_IoManager.ecrire(err);
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