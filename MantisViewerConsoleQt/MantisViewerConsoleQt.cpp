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
		//std::cout << "read " << input << std::endl;
		
		//else if (input == "liste_projet")
		//{
		//	QVector<QString>listeProjets;
		//	m_BaseConnecteur.recupererProjets(listeProjets);
		//	QString nomProjet;
		//	foreach(nomProjet, listeProjets)
		//	{
		//		std::cout << nomProjet.toStdString() << std::endl;
		//	}
		//}
		//else if (input == "liste_ticket")
		//{

		//	QVector<QString>listeTicket;
		//	m_BaseConnecteur.recupererTicketsDuProjet(listeTicket, "TRIXELL-TETRIS");
		//	QString nomTicket;
		//	foreach(nomTicket, listeTicket)
		//	{
		//		std::cout << nomTicket.toStdString() << std::endl;
		//	}
		//}
		///*else if (input == "connecter")
		//{

		//	QVector<QString>listeTicket;
		//	m_BaseConnecteur.recupererTicketsDuProjet(listeTicket, "TRIXELL-TETRIS");
		//	QString nomTicket;
		//	foreach(nomTicket, listeTicket)
		//	{
		//		std::cout << nomTicket.toStdString() << std::endl;
		//	}
		//}*/
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
		m_Login = m_LecteurCommande.lireCommande();
		m_MotDePasse = m_LecteurCommande.lireCommande();
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