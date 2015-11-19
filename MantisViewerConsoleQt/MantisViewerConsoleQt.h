#pragma once
#include <QThread>

class BaseConnecteur;

class MantisViewerConsoleQt : public QThread
{
	Q_OBJECT;

public:
	MantisViewerConsoleQt(QObject *parent, BaseConnecteur &baseConnecteur);

protected:
	virtual void run();

signals:
	void quitter();

private:
	BaseConnecteur& m_BaseConnecteur;

};

 