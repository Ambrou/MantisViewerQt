#include "stdafx.h"
#include "mantismanager.h"
#include "MantisConnecteur.h"

namespace MantisManager
{
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
}