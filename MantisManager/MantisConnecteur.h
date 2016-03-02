#pragma once
#include "BaseConnecteur.h"

namespace MantisManager
{
	class MantisConnecteur :public BaseConnecteur
	{

	public:
		MantisConnecteur();
		virtual ~MantisConnecteur();

		virtual void recupererStatut(QVector<MantisData::Status>& listeStatuts, const QString& user, const QString& password) const;
		virtual void recupererProjets(QStringList& listeProjets, const QString& user, const QString& password) const;
		virtual void recupererTicketsDuProjet(QVector<MantisData::Ticket>& listeTicket, const QString nomDuProjet, const QString& user, const QString& password) const;
		virtual void recupererVersionsDuProjet(QStringList& listeVersion, const QString nomDuProjet, const QString& user, const QString& password) const;
		virtual void recupererTicketDeLaVersionsDuProjet(QVector<MantisData::Ticket>& listeVersion, const QString nomDuProjet, const QString nomVersion, const QString& user, const QString& password) const;
		virtual void changerEtatTicket(const QString& idTicket, const QString& nouvelEtat, const QString& user, const QString& password) const;
		virtual void ajouterUneNoteAuTicket(const QString& idTicket, const QString& note, const QString& user, const QString& password) const;
		virtual void creerUnTicket(const QString& nomDuProjet, const QString& description, const QString& resume, const QString& categorie, const QString& user, const QString& password) const;
		virtual void creerUneVersion(const QString& nomVersion, const QString& projet, const QString& user, const QString& password) const;
		virtual void definirDateLivraisonDUneVersion(const QString& version, const QDate& date, const QTime& time, const QString& projet, const QString& user, const QString& password) const;
		virtual void livrerVersion(const QString& version, const QString& projet, const QString& user, const QString& password) const;
		virtual void recupererTout() const;

	};
}