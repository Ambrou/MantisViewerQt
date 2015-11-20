#ifndef MANTISMANAGER_H
#define MANTISMANAGER_H

#include "mantismanager_global.h"

class BaseConnecteur;

class MANTISMANAGER_EXPORT MantisManager
{
public:
	MantisManager();
	~MantisManager();

	BaseConnecteur& connecteur() const;

private:
	BaseConnecteur* mp_Connecteur;
};

#endif // MANTISMANAGER_H
