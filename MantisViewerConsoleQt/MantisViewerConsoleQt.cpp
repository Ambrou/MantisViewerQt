#include "MantisViewerConsoleQt.h"
#include <QVector>
#include "..\MantisManager\BaseConnecteur.h"
#include "LecteurCommande.h"

MantisViewerConsoleQt::MantisViewerConsoleQt(QObject *parent, BaseConnecteur &baseConnecteur, LecteurCommande& lecteurCommande)
	: QThread(parent), m_BaseConnecteur(baseConnecteur), m_LecteurCommande(lecteurCommande)
{

}

void MantisViewerConsoleQt::run()
{
	QString commandeSaisie("");
	do
	{
		commandeSaisie = m_LecteurCommande.lireCommande();
		//traiterCommande(line);
		//std::cout << "read " << input << std::endl;
		//if (input == "quit")
		//{
		//	std::cout << "stop reader thread" << std::endl;
		//	emit quitter();
		//	break;
		//}
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
	} while (true);
}