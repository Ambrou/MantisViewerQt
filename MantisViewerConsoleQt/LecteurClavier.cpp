#include "LecteurClavier.h"
#include <QTextStream>

LecteurClavier::LecteurClavier()
{
}


LecteurClavier::~LecteurClavier()
{
}

QString LecteurClavier::lireCommande() const
{
	QTextStream qtin(stdin);
	return qtin.readLine();
}
