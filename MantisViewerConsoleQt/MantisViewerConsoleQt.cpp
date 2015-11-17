#include "MantisViewerConsoleQt.h"
#include <iostream>
#include <string>


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
	}
}