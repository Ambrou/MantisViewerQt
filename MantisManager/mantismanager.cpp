#include "stdafx.h"
#include "mantismanager.h"
#include <QString>
#include "MantisConnecteur.h"

MantisManager::MantisManager()
{
	mp_Connecteur = new MantisConnecteur();
}

MantisManager::~MantisManager()
{
	delete mp_Connecteur;
}

BaseConnecteur& MantisManager::connecteur() const
{
	return *mp_Connecteur;
}
//
//void MantisManager::recupererProjets(QVector<QString>&listeProjets) const
//{
//	mp_Connecteur->recupererProjets(listeProjets);
//}
//
//void MantisManager::recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet) const
//{
//	mp_Connecteur->recupererTicketsDuProjet(listeTicket, nomDuProjet);
//}

