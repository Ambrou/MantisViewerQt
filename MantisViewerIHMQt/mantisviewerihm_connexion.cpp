#include "mantisviewerihm_connexion.h"


mantisviewerihm_connexion::mantisviewerihm_connexion()
{
	// Initialisation IHM
	ui.setupUi(this);
}


mantisviewerihm_connexion::~mantisviewerihm_connexion()
{
}

QString mantisviewerihm_connexion::getUser() const
{
	return ui.lineEdit_user->text();
}

QString mantisviewerihm_connexion::getPassword() const
{
	return ui.lineEdit_password->text();
}