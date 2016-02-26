#pragma once

#include "mantisdata_global.h"
#include <QString>

class MANTISDATA_EXPORT Ticket
{
public:
	Ticket();
	Ticket(const qint64 iNumero, const QString& strResume, const qint64 iStatut);
	Ticket(const Ticket& ticketMantis);
	~Ticket();
	Ticket& operator= (const Ticket& ticketMantis);


	QString titre() const;
	qint64 status() const;
	qint64 numero() const;

private:
	qint64 m_iNumero;
	QString m_strResume;
	qint64 m_iStatut;
};

