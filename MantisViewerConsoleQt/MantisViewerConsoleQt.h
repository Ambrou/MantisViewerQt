#pragma once
#include <QThread>

class BaseConnecteur;
class IOManager;

class MantisViewerConsoleQt : public QThread
{
	Q_OBJECT;

public:
	MantisViewerConsoleQt(QObject *parent, BaseConnecteur &baseConnecteur, IOManager& lecteurCommande);

protected:
	virtual void run();
	bool traiterCommandeEtAttendreLaSuivante(const QString& nomCommande);
	QString login() const;
	QString motDePasse() const;

signals:
	void quitter();

private:
	BaseConnecteur& m_BaseConnecteur;
	IOManager& m_IoManager;

	QString m_Login;
	QString m_MotDePasse;

};

 