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

signals:
	void quitter();

private:
	BaseConnecteur& m_BaseConnecteur;
	LecteurCommande& m_LecteurCommande;

};

 