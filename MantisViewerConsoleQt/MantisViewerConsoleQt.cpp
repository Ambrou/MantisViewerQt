#include "MantisViewerConsoleQt.h"
#include <QVector>
#include <iostream>
#include <string>
#include "..\MantisManager\mantismanager.h"

MantisViewerConsoleQt::MantisViewerConsoleQt(QObject *parent)
	: QThread(parent)
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
			MantisManager mant;
			QVector<QString>listeProjets;
			mant.recupererProjets(listeProjets);
			QString nomProjet;
			foreach(nomProjet, listeProjets)
			{
				std::cout << nomProjet.toStdString() << std::endl;
			}
		}
		else if (input == "liste_ticket")
		{
			MantisManager mant;
			QVector<QString>listeTicket;
			mant.recupererTicketsDuProjet(listeTicket, "TRIXELL-TETRIS");
			QString nomTicket;
			foreach(nomTicket, listeTicket)
			{
				std::cout << nomTicket.toStdString() << std::endl;
			}
		}
	}
}