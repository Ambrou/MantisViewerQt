#pragma once

#include "mantismanager_global.h"
#include <QString>
#include <QDate>
#include <QTime>

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
	virtual void creerUnTicket(const QString& nomDuProjet, const QString& description, const QString& resume, const QString& categorie, const QString& user, const QString& password) const = 0;
	virtual void creerUneVersion(const QString& nomVersion, const QString& projet, const QString& user, const QString& password) const = 0;
	virtual void definirDateLivraisonDUneVersion(const QString& version, const QDate& date, const QTime& time, const QString& projet, const QString& user, const QString& password) const = 0;
	virtual void livrerVersion(const QString& version, const QString& projet, const QString& user, const QString& password) const = 0;
	virtual void recupererTout() const = 0;
};

