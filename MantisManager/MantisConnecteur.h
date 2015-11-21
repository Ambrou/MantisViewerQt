#pragma once
#include "BaseConnecteur.h"
class MantisConnecteur : public BaseConnecteur
{
public:
	MantisConnecteur();
	virtual ~MantisConnecteur();

	virtual void recupererProjets(QVector<QString>&listeProjets, const QString& user, const QString& password) const;
	virtual void recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet) const;
};

