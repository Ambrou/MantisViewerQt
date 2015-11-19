#ifndef MANTISMANAGER_H
#define MANTISMANAGER_H

#include "mantismanager_global.h"

class BaseConnecteur;

class MANTISMANAGER_EXPORT MantisManager
{
public:
	MantisManager();
	~MantisManager();

	BaseConnecteur& connecteur() const;
	//void recupererProjets(QVector<QString>&listeProjets) const;
	//void recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet) const;

private:
	//BaseConnecteur* m_pBaseConnecteur;
	BaseConnecteur* mp_Connecteur;
};

#endif // MANTISMANAGER_H
