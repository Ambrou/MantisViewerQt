#pragma once
#include "QDialog"
#include "ui_mantisviewerihm_connexion.h"

class mantisviewerihm_connexion : public QDialog
{
public:
	mantisviewerihm_connexion();
	~mantisviewerihm_connexion();

	QString getUser() const;
	QString getPassword() const;

private:
	Ui::Connexiondialog ui;

};

