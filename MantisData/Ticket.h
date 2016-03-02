#pragma once

#include "mantisdata_global.h"
#include <QString>
#include <QVariant>

namespace MantisData
{
	class MANTISDATA_EXPORT Ticket
	{
	public:
		Ticket();
		Ticket(const qint64 iNumero, const QString& strResume, const qint64 iStatut, const qint64 iSeverite);
		Ticket(const Ticket& ticketMantis);
		~Ticket();
		Ticket& operator= (const Ticket& ticketMantis);


		QString titre() const;
		qint64 status() const;
		qint64 numero() const;
		qint64 severite() const;

	private:
		qint64 m_iNumero;
		QString m_strResume;
		qint64 m_iStatut;
		qint64 m_iSeverite;
	};
}

Q_DECLARE_METATYPE(MantisData::Ticket)