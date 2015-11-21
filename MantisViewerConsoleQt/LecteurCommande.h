#pragma once

class QString;

class LecteurCommande
{
public:
	LecteurCommande();
	virtual ~LecteurCommande();
	virtual QString lireCommande() const = 0;
	virtual void ecrire(const QString& texte) const = 0;
};

