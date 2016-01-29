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
		QVector<Ticket>listeTickets;
		QString nomProjet(m_IoManager.lireCommande());
		m_BaseConnecteur.recupererTicketsDuProjet(listeTickets, nomProjet, login(), motDePasse());
		foreach(Ticket ticket, listeTickets)
		{
			m_IoManager.ecrire(QString::number(ticket.numero()) + "\t" + ticket.status() + "\t" + ticket.titre());
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
			m_BaseConnecteur.creerUneVersion(nouvelleVersion, nomProjet, login(), motDePasse());
		}
		catch (const QException& e)
		{
			QString err(e.what());
			m_IoManager.ecrire(err);
		}
		
	}
	else if (nomCommande == "creer ticket")
	{
		try
		{
			m_IoManager.ecrire("Nom du projet");
			QString nomProjet(m_IoManager.lireCommande());
			m_IoManager.ecrire("Description du ticket");
			QString description(m_IoManager.lireCommande());
			m_IoManager.ecrire("Résumé du ticket");
			QString resume(m_IoManager.lireCommande());
			m_IoManager.ecrire("Categorie");
			QString categorie(m_IoManager.lireCommande());
			m_BaseConnecteur.creerUnTicket(nomProjet, description, resume, categorie, login(), motDePasse());
		}
		catch (const QException& e)
		{
			QString err(e.what());
			m_IoManager.ecrire(err);
		}
	}
	else if (nomCommande == "definir date de livraison")
	{
		m_IoManager.ecrire("Nom du projet");
		QString nomProjet(m_IoManager.lireCommande());
		m_IoManager.ecrire("Nom version à livrer");
		QString version(m_IoManager.lireCommande());
		m_IoManager.ecrire("Date de livraison");
		QString strDate(m_IoManager.lireCommande());
		QDate date = QDate::fromString(strDate, "d/M/yyyy");
		m_IoManager.ecrire("Heure de livraison");
		QString strTime(m_IoManager.lireCommande());
		QTime time = QTime::fromString(strTime, "h:m:s");


		m_BaseConnecteur.definirDateLivraisonDUneVersion(version, date, time, nomProjet, login(), motDePasse());
	}
	else if (nomCommande == "lister statut")
	{
		QVector<QString>listeStatuts;
		m_BaseConnecteur.recupererStatut(listeStatuts, login(), motDePasse());
		foreach(QString nomStatut, listeStatuts)
		{
			m_IoManager.ecrire(nomStatut);
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