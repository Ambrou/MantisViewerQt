#pragma once
#include "BaseConnecteur.h"

class MantisConnecteur :public BaseConnecteur
{

public:
	MantisConnecteur();
	virtual ~MantisConnecteur();

	virtual void recupererProjets(QVector<QString>&listeProjets, const QString& user, const QString& password) const;
	virtual void recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet, const QString& user, const QString& password) const;
	virtual void recupererVersionsDuProjet(QVector<QString>&listeVersion, const QString nomDuProjet, const QString& user, const QString& password) const;
	virtual void recupererTicketDeLaVersionsDuProjet(QVector<QString>&listeVersion, const QString nomDuProjet, const QString nomVersion, const QString& user, const QString& password) const;
	virtual void changerEtatTicket(const QString& idTicket, const QString& nouvelEtat, const QString& user, const QString& password) const;
	virtual void ajouterUneNoteAuTicket(const QString& idTicket, const QString& note, const QString& user, const QString& password) const;
	virtual void creerUnTicket(const QString& nomDuProjet, const QString& user, const QString& password) const;
	virtual void recupererTout() const;
	
};

