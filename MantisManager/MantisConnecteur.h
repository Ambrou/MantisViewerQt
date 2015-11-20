#pragma once
#include "BaseConnecteur.h"
class MantisConnecteur : public BaseConnecteur
{
public:
	MantisConnecteur();
	virtual ~MantisConnecteur();

	virtual void recupererProjets(QVector<QString>&listeProjets) const;
	virtual void recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet) const;
};
