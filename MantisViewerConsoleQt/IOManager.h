#pragma once

class QString;

class IOManager
{
public:
	IOManager();
	virtual ~IOManager();
	virtual QString lireCommande() const = 0;
	virtual void ecrire(const QString& texte) const = 0;
};

