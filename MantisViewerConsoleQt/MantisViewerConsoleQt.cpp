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
		else
		{
			MantisManager mant;
			QVector<QString>listeProjets;
			mant.recupererProjets(listeProjets);
		}
	}
}