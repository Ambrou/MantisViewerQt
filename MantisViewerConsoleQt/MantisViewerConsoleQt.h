#pragma once
#include <QThread>

class MantisViewerConsoleQt : public QThread
{
	Q_OBJECT;

public:
	MantisViewerConsoleQt(QObject *parent);

protected:
	virtual void run();

signals:
	void quitter();

};

 