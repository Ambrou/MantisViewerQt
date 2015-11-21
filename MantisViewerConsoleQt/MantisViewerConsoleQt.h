#pragma once
#include <QThread>

class BaseConnecteur;
class LecteurCommande;

class MantisViewerConsoleQt : public QThread
{
	Q_OBJECT;

public:
	MantisViewerConsoleQt(QObject *parent, BaseConnecteur &baseConnecteur, LecteurCommande& lecteurCommande);

protected:
	virtual void run();
	bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande);
	QString login() const;
	QString motDePasse() const;

signals:
	void quitter();

private:
	BaseConnecteur& m_BaseConnecteur;
	LecteurCommande& m_LecteurCommande;

	QString m_Login;
	QString m_MotDePasse;

};

 