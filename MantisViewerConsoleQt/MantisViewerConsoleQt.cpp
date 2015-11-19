#include "MantisViewerConsoleQt.h"
#include <QVector>
#include <iostream>
#include <string>
#include "..\MantisManager\BaseConnecteur.h"

MantisViewerConsoleQt::MantisViewerConsoleQt(QObject *parent, BaseConnecteur &baseConnecteur)
	: QThread(parent), m_BaseConnecteur(baseConnecteur)
{

}

void MantisViewerConsoleQt::run()
{
	std::string input;
	while (std::cin >> input)
	{
		std::cout << "read " << input << std::endl;
		if (input == "quit")
		{
			std::cout << "stop reader thread" << std::endl;
			emit quitter();
			break;
		}
		else if (input == "liste_projet")
		{
			QVector<QString>listeProjets;
			m_BaseConnecteur.recupererProjets(listeProjets);
			QString nomProjet;
			foreach(nomProjet, listeProjets)
			{
				std::cout << nomProjet.toStdString() << std::endl;
			}
		}
		else if (input == "liste_ticket")
		{

			QVector<QString>listeTicket;
			m_BaseConnecteur.recupererTicketsDuProjet(listeTicket, "TRIXELL-TETRIS");
			QString nomTicket;
			foreach(nomTicket, listeTicket)
			{
				std::cout << nomTicket.toStdString() << std::endl;
			}
		}
	}
}