#pragma once
#include "IOManager.h"
class LecteurClavier :
	public IOManager
{
public:
	LecteurClavier();
	~LecteurClavier();

	QString lireCommande() const;
	void ecrire(const QString& texte) const;
};

