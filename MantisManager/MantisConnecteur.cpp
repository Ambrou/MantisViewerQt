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

void MantisConnecteur::recupererProjets(QVector<QString>&listeProjets, const QString& user, const QString& password) const
{
	MantisConnect mantisConnect;
	TNS__ProjectDataArray projetDataArray = mantisConnect.mc_projects_get_user_accessible(user, password);
	QList<TNS__ProjectData> list = projetDataArray.items();

	TNS__ProjectData project;
	foreach(project, list)
	{
		listeProjets.append(project.name());
	}
}

void MantisConnecteur::recupererTicketsDuProjet(QVector<QString>&listeTicket, const QString nomDuProjet, const QString& user, const QString& password) const
{
	MantisConnect mantisConnect;
	qint64 idProjet = mantisConnect.mc_project_get_id_from_name(user, password, nomDuProjet);

	TNS__IssueDataArray ticketDataArray = mantisConnect.mc_project_get_issues(user, password, idProjet, 0, 50);

	QList<TNS__IssueData> list = ticketDataArray.items();

	TNS__IssueData ticket;
	foreach(ticket, list)
	{
		listeTicket.append(ticket.summary());
	}
}