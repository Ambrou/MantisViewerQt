#ifndef MANTISMANAGER_H
#define MANTISMANAGER_H

#include "mantismanager_global.h"

class MANTISMANAGER_EXPORT MantisManager
{
public:
	MantisManager();
	~MantisManager();

	void recupererProjets(QVector<QString>&listeProjets) const;
	void recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet) const;

private:

};

#endif // MANTISMANAGER_H
