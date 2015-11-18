#include "stdafx.h"
#include "mantismanager.h"
#include "mantisconnect.h"

MantisManager::MantisManager()
{

}

MantisManager::~MantisManager()
{

}

void MantisManager::recupererProjets(QVector<QString>&listeProjets) const
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
