#pragma once

#include "mantismanager_global.h"
#include <QString>

class MANTISMANAGER_EXPORT BaseConnecteur
{
public:
	BaseConnecteur();
	virtual ~BaseConnecteur();

	virtual void recupererProjets(QVector<QString>&listeProjets, const QString& user, const QString& password) const = 0;
	virtual void recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet, const QString& user, const QString& password) const = 0;
	virtual void recupererVersionsDuProjet(QVector<QString>&listeVersion, const QString nomDuProjet, const QString& user, const QString& password) const = 0;
	virtual void recupererTicketDeLaVersionsDuProjet(QVector<QString>&listeVersion, const QString nomDuProjet, const QString nomVersion, const QString& user, const QString& password) const = 0;
	virtual void changerEtatTicket(const QString& idTicket, const QString& nouvelEtat, const QString& user, const QString& password) const = 0;
	//virtual void créerUn
	virtual void recupererTout() const = 0;
};

