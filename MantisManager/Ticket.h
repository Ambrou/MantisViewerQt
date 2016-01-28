#pragma once

#include "mantismanager_global.h"
#include <QString>

class MANTISMANAGER_EXPORT Ticket
{
public:
	Ticket();
	Ticket(const qint64 iNumero, const QString& strResume, const QString& strStatut);
	Ticket(const Ticket& ticketMantis);
	~Ticket();
	Ticket& operator= (const Ticket& ticketMantis);


	QString titre() const;
	QString status() const;
	qint64 numero() const;

private:
	qint64 m_iNumero;
	QString m_strResume;
	QString m_strStatut;
};

