#include "stdafx.h"
#include "MantisConnecteur.h"
#include "mantisconnect.h"
#include "InvalidArgumentException.h"
#include "OperationImpossibleException.h"
#include <QDebug>

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

	TNS__IssueDataArray ticketDataArray = mantisConnect.mc_project_get_issues(user, password, idProjet, 1, -1);

	QList<TNS__IssueData> list = ticketDataArray.items();

	TNS__IssueData ticket;
	foreach(ticket, list)
	{
		listeTicket.append(ticket.summary());
	}
}

//mc_issue_update
//void MantisConnecteur::recupererTicketsDuProjetExtended(QVector<QString>&listeTicket, const QString nomDuProjet, const QString& user, const QString& password, const ) const
//{
//	MantisConnect mantisConnect;
//	qint64 idProjet = mantisConnect.mc_project_get_id_from_name(user, password, nomDuProjet);
//
//	TNS__IssueDataArray ticketDataArray = mantisConnect.mc_filter_search_issues(user, password, idProjet, 1, -1);
//
//	QList<TNS__IssueData> list = ticketDataArray.items();
//
//	TNS__IssueData ticket;
//	foreach(ticket, list)
//	{
//		listeTicket.append(ticket.summary());
//	}
//}
void MantisConnecteur::recupererVersionsDuProjet(QVector<QString>&listeVersion, const QString nomDuProjet, const QString& user, const QString& password) const
{
	MantisConnect mantisConnect;
	qint64 idProjet = mantisConnect.mc_project_get_id_from_name(user, password, nomDuProjet);

	TNS__ProjectVersionDataArray projectVersionDataArray = mantisConnect.mc_project_get_versions(user, password, idProjet);

	QList<TNS__ProjectVersionData> list = projectVersionDataArray.items();

	TNS__ProjectVersionData version;
	foreach(version, list)
	{
		listeVersion.append(version.name());
	}
}

void MantisConnecteur::recupererTicketDeLaVersionsDuProjet(QVector<QString>&listeTickets, const QString nomDuProjet, const QString nomVersion, const QString& user, const QString& password) const
{
	MantisConnect mantisConnect;
	qint64 idProjet = mantisConnect.mc_project_get_id_from_name(user, password, nomDuProjet);
	TNS__FilterDataArray projectFilters = mantisConnect.mc_filter_get(user, password, idProjet);
	QList<TNS__FilterData> list = projectFilters.items();
	TNS__FilterData filter;
	TNS__FilterData myFilterToUse;
	
	foreach(filter, list)
	{
		if (filter.name() == nomVersion)
		{
			TNS__IssueHeaderDataArray listeTicket = mantisConnect.mc_filter_get_issue_headers(user, password, idProjet, filter.id(), 0, -1);
			QList<TNS__IssueHeaderData> listTicket = listeTicket.items();
			TNS__IssueHeaderData ticket;
			foreach(ticket, listTicket)
			{
				listeTickets.append(ticket.summary());
			}
			break;
		}
	}
}

#include "QFile"
#include <qtextstream>

void MantisConnecteur::recupererTout() const
{
	QFile file("Mantis2.txt");
	MantisConnect mantisConnect;
	mantisConnect.setEndPoint("http://mantiskanban.com/mantisbt/api/soap/mantisconnect.php");
	/*
	QString user("apetitgenet");
	QString password("MAg28vkwde");
	QString projectName("TRIXELL-TETRIS");*/
	QString user("demo");
	QString password("demo");
	QString projectName("Demo Project");
	qint64 idProjet = mantisConnect.mc_project_get_id_from_name(user, password, projectName);
	qint64 idVersion = 1576;

	if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
		return;
	// Création d'un objet QTextStream à partir de notre objet QFile
	QTextStream flux(&file);
	// On choisit le codec correspondant au jeu de caractère que l'on souhaite ; ici, UTF-8
	flux.setCodec("UTF-8");

	flux << "=============================" << endl <<"version" << endl;
	flux << mantisConnect.mc_version() << endl;
	flux << "=============================" << endl << "Enum Status" << endl;
	TNS__ObjectRefArray objectStatus = mantisConnect.mc_enum_status(user, password);
	QList< TNS__ObjectRef > listStatus = objectStatus.items();
	TNS__ObjectRef status;
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Priorities" << endl;
	objectStatus = mantisConnect.mc_enum_priorities(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Severities" << endl;
	objectStatus = mantisConnect.mc_enum_severities(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Reproducibilities" << endl;
	objectStatus = mantisConnect.mc_enum_reproducibilities(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Projections" << endl;
	objectStatus = mantisConnect.mc_enum_projections(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum ETAS" << endl;
	objectStatus = mantisConnect.mc_enum_etas(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Resolutions" << endl;
	objectStatus = mantisConnect.mc_enum_resolutions(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Access Level" << endl;
	objectStatus = mantisConnect.mc_enum_access_levels(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Project Status" << endl;
	objectStatus = mantisConnect.mc_enum_project_status(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Project View State" << endl;
	objectStatus = mantisConnect.mc_enum_project_view_states(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum View State" << endl;
	objectStatus = mantisConnect.mc_enum_view_states(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Enum Custom Field Types" << endl;
	objectStatus = mantisConnect.mc_enum_custom_field_types(user, password);
	listStatus = objectStatus.items();
	foreach(status, listStatus)
	{
		flux << "id " << status.id() << "\tname " << status.name() << endl;
	}

	flux << "=============================" << endl << "Issue Existe" << endl;
	flux << mantisConnect.mc_issue_exists(user, password, 15113) << endl;
	
	flux << "=============================" << endl << "Issue Get" << endl;
	TNS__IssueData issueData = mantisConnect.mc_issue_get(user, password, 15113);
	flux << issueData.summary() << endl;

	flux << "=============================" << endl << "Issue Get Biggest Id" << endl;
	flux << mantisConnect.mc_issue_get_biggest_id(user, password, idProjet) << endl;

	flux << "=============================" << endl << "Issue Get Id From Summury" << endl;
	flux << mantisConnect.mc_issue_get_id_from_summary(user, password, "3040 : plantage avec script EX_200") << endl;

	flux << "=============================" << endl << "Project Get Issues" << endl;
	TNS__IssueDataArray issueDataArray = mantisConnect.mc_project_get_issues(user, password, idProjet, 0, -1);
	QList< TNS__IssueData > listIssueData = issueDataArray.items();
	//TNS__IssueData issueData;
	foreach(issueData, listIssueData)
	{
		flux << "id " << issueData.id() << "\tname " << issueData.summary() << endl;
	}

	flux << "=============================" << endl << "Project Get Issues Headers" << endl;
	TNS__IssueHeaderDataArray issueHeaderDataArray = mantisConnect.mc_project_get_issue_headers(user, password, idProjet, 0, -1);
	QList< TNS__IssueHeaderData > listIssueHeaderData = issueHeaderDataArray.items();
	TNS__IssueHeaderData issueHeaderData;
	foreach(issueHeaderData, listIssueHeaderData)
	{
		flux << "id " << issueHeaderData.id() << "\tname " << issueHeaderData.summary() << endl;
	}

	flux << "=============================" << endl << "Project Get Categories" << endl;
	TNS__StringArray stringArray = mantisConnect.mc_project_get_categories(user, password, idProjet);
	QStringList listString = stringArray.items();
	QString string;
	foreach(string, listString)
	{
		flux << "id " << string << endl;
	}
	
	flux << "=============================" << endl << "Project Get Versions" << endl;
	TNS__ProjectVersionDataArray projectVersionDataArray = mantisConnect.mc_project_get_versions(user, password, idProjet);
	QList< TNS__ProjectVersionData > listProjectVersionData = projectVersionDataArray.items();
	TNS__ProjectVersionData projectVersionData;
	foreach(projectVersionData, listProjectVersionData)
	{
		flux << "id " << projectVersionData.id() << "\tname " << projectVersionData.name() << endl;
	}

	flux << "=============================" << endl << "Project Get Released Versions" << endl;
	projectVersionDataArray = mantisConnect.mc_project_get_released_versions(user, password, idProjet);
	listProjectVersionData = projectVersionDataArray.items();
	
	foreach(projectVersionData, listProjectVersionData)
	{
		flux << "id " << projectVersionData.id() << "\tname " << projectVersionData.name() << endl;
	}

	flux << "=============================" << endl << "Project Get UnReleased Versions" << endl;
	projectVersionDataArray = mantisConnect.mc_project_get_unreleased_versions(user, password, idProjet);
	listProjectVersionData = projectVersionDataArray.items();
	
	foreach(projectVersionData, listProjectVersionData)
	{
		flux << "id " << projectVersionData.id() << "\tname " << projectVersionData.name() << endl;
	}

	flux << "=============================" << endl << "Filter Get" << endl;
	TNS__FilterDataArray filterDataArray = mantisConnect.mc_filter_get(user, password, idProjet);
	QList< TNS__FilterData > listFilterData = filterDataArray.items();
	TNS__FilterData filterData;
	foreach(filterData, listFilterData)
	{
		flux << "id " << filterData.id() << "\tname " << filterData.name() << endl;
	}

	flux << "=============================" << endl << "Filter Get Issues" << endl;
	issueDataArray = mantisConnect.mc_filter_get_issues(user, password, idProjet, idVersion, 0, -1);
	listIssueData = issueDataArray.items();
	//TNS__IssueData issueData;
	foreach(issueData, listIssueData)
	{
		flux << "id " << issueData.id() << "\tname " << issueData.summary() << endl;
	}

	flux << "=============================" << endl << "Filter Get Issues Header" << endl;
	issueHeaderDataArray = mantisConnect.mc_filter_get_issue_headers(user, password, idProjet, idVersion, 0, -1);
	listIssueHeaderData = issueHeaderDataArray.items();
	
	foreach(issueHeaderData, listIssueHeaderData)
	{
		flux << "id " << issueHeaderData.id() << "\tname " << issueHeaderData.summary() << endl;
	}

	flux << "=============================" << endl << "Projet Users" << endl;
	TNS__AccountDataArray accountDataArray = mantisConnect.mc_project_get_users(user, password, idProjet, 10);

	QList< TNS__AccountData > lisAccountData = accountDataArray.items();
	TNS__AccountData accountData;
	foreach(accountData, lisAccountData)
	{
		flux << "id " << accountData.id() << "\tname " << accountData.name() << endl;
	}

	flux << "=============================" << endl << "Project custom field" << endl;
	TNS__CustomFieldDefinitionDataArray customFieldDefinitionDataArray = mantisConnect.mc_project_get_custom_fields(user, password, idProjet);

	QList< TNS__CustomFieldDefinitionData > listCustumFieldDefinitiontData = customFieldDefinitionDataArray.items();
	TNS__CustomFieldDefinitionData customFieldDefinitionData;
	foreach(customFieldDefinitionData, listCustumFieldDefinitiontData)
	{
		TNS__ObjectRef field = customFieldDefinitionData.field();
		flux << "id " << field.id() << "\tname " << field.name() << "\tvalues " << customFieldDefinitionData.possible_values() << endl;
		

	}

		
	
}

void MantisConnecteur::changerEtatTicket(const QString& idTicket, const QString& nouvelEtat, const QString& user, const QString& password) const
{
	MantisConnect mantisConnect;
	TNS__ObjectRef newStatus;
	bool statusTrouve = false;

	TNS__ObjectRefArray objectStatus = mantisConnect.mc_enum_status(user, password);
	QList< TNS__ObjectRef > listStatus = objectStatus.items();
	TNS__ObjectRef status;
	foreach(status, listStatus)
	{
		if (status.name() == nouvelEtat)
		{
			newStatus.setId(status.id());
			newStatus.setName(status.name());
			statusTrouve = true;
		}
	}
	if (statusTrouve == true)
	{
		TNS__IssueData ticket = mantisConnect.mc_issue_get(user, password, idTicket.toInt());
		ticket.setProject(ticket.project());
		ticket.setReporter(ticket.reporter());
		ticket.setHandler(ticket.handler());
		ticket.setCategory(ticket.category());
		ticket.setSummary(ticket.summary());
		ticket.setDescription(ticket.description());
		ticket.setStatus(newStatus);


		if (mantisConnect.mc_issue_update(user, password, idTicket.toInt(), ticket) == false)
		{
			// N'arrive jamais car on peut toujours changer l'état quelque soit l'état valide
			QString message("impossible de passer dans l'état ");
			message += nouvelEtat;
			throw OperationImpossibleException(message);
		}
	}
	else
	{
		// Ne devrait jamais arrivé depuis l'IHM
		QString message(nouvelEtat);
		message += " n'est pas un état connu";
		throw InvalidArgumentException(message);
	}
	
}

void MantisConnecteur::ajouterUneNoteAuTicket(const QString& idTicket, const QString& note, const QString& user, const QString& password) const
{
	MantisConnect mantisConnect;
	TNS__IssueNoteData nouvelNote;
	nouvelNote.setText(note);

	if (mantisConnect.mc_issue_note_add(user, password, idTicket.toInt(), nouvelNote) == 0)
	{
		// Ne devrait jamais arrivé depuis l'IHM
		QString message("Impossible de rajouter la note");
		throw InvalidArgumentException(message);
	}

}

void MantisConnecteur::creerUnTicket(const QString& nomDuProjet, const QString& description, const QString& resume, const QString& categorie, const QString& user, const QString& password) const
{
	TNS__IssueData issue;
	TNS__ObjectRef project;
	MantisConnect mantisConnect;

	qint64 idProjet = mantisConnect.mc_project_get_id_from_name(user, password, nomDuProjet);

	project.setId(idProjet);

	issue.setDescription(description);
	issue.setProject(project);
	issue.setSummary(resume);
	issue.setCategory(categorie);

	if (mantisConnect.mc_issue_add(user, password, issue) == 0)
	{
		// Ne devrait jamais arrivé depuis l'IHM
		QString message("Impossible de créer le ticket");
		throw InvalidArgumentException(message);
	}
}

void MantisConnecteur::creerUneVersion(const QString& nomVersion, const QString& projet, const QString& user, const QString& password) const
{
	MantisConnect mantisConnect;
	TNS__ProjectVersionData version;
	KDDateTime dateTime;
	QDate date(QDate::currentDate());
	QTime time(QTime::currentTime());

	
	qint64 idProjet = mantisConnect.mc_project_get_id_from_name(user, password, projet);

	dateTime.setDate(date);
	dateTime.setTime(time);

	version.setName(nomVersion);
	version.setProject_id(idProjet);
	version.setDate_order(dateTime);
	version.setReleased(false);
	

	if (mantisConnect.mc_project_version_add(user, password, version) == 0)
	{
		// Ne devrait jamais arrivé depuis l'IHM
		QString message("Impossible de créer la version");
		throw InvalidArgumentException(message);
	}

}