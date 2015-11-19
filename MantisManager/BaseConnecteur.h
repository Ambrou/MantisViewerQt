#pragma once

#include "mantismanager_global.h"
#include <QString>

class MANTISMANAGER_EXPORT BaseConnecteur
{
public:
	BaseConnecteur();
	virtual ~BaseConnecteur();

	virtual void recupererProjets(QVector<QString>&listeProjets) const = 0;
	virtual void recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet) const = 0;
};

