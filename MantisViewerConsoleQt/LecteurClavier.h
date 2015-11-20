#pragma once
#include "LecteurCommande.h"
class LecteurClavier :
	public LecteurCommande
{
public:
	LecteurClavier();
	~LecteurClavier();

	QString lireCommande() const;
};

