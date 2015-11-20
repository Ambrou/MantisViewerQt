#include "stdafx.h"
#include "mantismanager.h"
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

