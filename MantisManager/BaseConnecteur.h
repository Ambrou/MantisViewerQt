#pragma once

#include "mantismanager_global.h"
#include <QString>
#include <QDate>
#include <QTime>
#include "../MantisData/Ticket.h"
#include "../MantisData/Status.h"
#include "../MantisData/Criticite.h"

namespace MantisManager
{
	class MANTISMANAGER_EXPORT BaseConnecteur
	{
	public:
		BaseConnecteur();
		virtual ~BaseConnecteur();

		virtual void recupererStatut(QVector<MantisData::Status> &listeStatuts, const QString& user, const QString& password) const = 0;
		virtual void recupererProjets(QStringList& listeProjets, const QString& user, const QString& password) const = 0;
		virtual void recupererTicketsDuProjet(QVector<MantisData::Ticket>& listeTicket, const QString nomDuProjet, const QString& user, const QString& password) const = 0;
		virtual void recupererVersionsDuProjet(QStringList& listeVersion, const QString nomDuProjet, const QString& user, const QString& password) const = 0;
		virtual void recupererTicketDeLaVersionsDuProjet(QVector<MantisData::Ticket>&listeTicket, const QString nomDuProjet, const QString nomVersion, const QString& user, const QString& password) const = 0;
		virtual void recupererCriticite(QVector<MantisData::Criticite>&listeCriticite, const QString& user, const QString& password) const = 0;
		virtual void changerEtatTicket(const QString& idTicket, const QString& nouvelEtat, const QString& user, const QString& password) const = 0;
		virtual void creerUnTicket(const QString& nomDuProjet, const QString& description, const QString& resume, const QString& categorie, const QString& user, const QString& password) const = 0;
		virtual void creerUneVersion(const QString& nomVersion, const QString& projet, const QString& user, const QString& password) const = 0;
		virtual void definirDateLivraisonDUneVersion(const QString& version, const QDate& date, const QTime& time, const QString& projet, const QString& user, const QString& password) const = 0;
		virtual void livrerVersion(const QString& version, const QString& projet, const QString& user, const QString& password) const = 0;
		virtual void recupererTout() const = 0;
	};

}