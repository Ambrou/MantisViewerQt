#include "stdafx.h"
#include "MantisConnecteur.h"
#include "mantisconnect.h"
#include "MantisConnecteur.h"

MantisConnecteur::MantisConnecteur()
{
	
}


MantisConnecteur::~MantisConnecteur()
{
	
}

void MantisConnecteur::recupererProjets(QVector<QString>&listeProjets) const
{
	MantisConnect mantisConnect;
	TNS__ProjectDataArray projetDataArray = mantisConnect.mc_projects_get_user_accessible("apetitgenet", "MAg28vkwde");
	QList<TNS__ProjectData> list = projetDataArray.items();

	TNS__ProjectData project;
	foreach(project, list)
	{
		listeProjets.append(project.name());
	}
}

void MantisConnecteur::recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet) const
{
	MantisConnect mantisConnect;
	qint64 idProjet = mantisConnect.mc_project_get_id_from_name("apetitgenet", "MAg28vkwde", nomDuProjet);

	TNS__IssueDataArray ticketDataArray = mantisConnect.mc_project_get_issues("apetitgenet", "MAg28vkwde", idProjet, 0, 50);

	QList<TNS__IssueData> list = ticketDataArray.items();

	TNS__IssueData ticket;
	foreach(ticket, list)
	{
		listeTicket.append(ticket.summary());
	}
}