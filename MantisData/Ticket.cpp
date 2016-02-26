#include "Ticket.h"


Ticket::Ticket()
{
}

Ticket::Ticket(const qint64 iNumero, const QString& strResume, const qint64 iStatut, const qint64 iSeverite)
	: m_iNumero(iNumero),
	m_strResume(strResume),
	m_iStatut(iStatut),
	m_iSeverite(iSeverite)
{
}

Ticket::Ticket(const Ticket& ticket)
	: m_iNumero(ticket.m_iNumero),
	m_strResume(ticket.m_strResume),
	m_iStatut(ticket.m_iStatut),
	m_iSeverite(ticket.m_iSeverite)
{
}


Ticket::~Ticket()
{
}

Ticket& Ticket::operator= (const Ticket& ticket)
{
	m_iNumero = ticket.m_iNumero;
	m_strResume = ticket.m_strResume;
	m_iStatut = ticket.m_iStatut;
	m_iSeverite = ticket.m_iSeverite;
	return *this;
}

QString Ticket::titre() const
{
	return m_strResume;
}
qint64 Ticket::status() const
{
	return m_iStatut;
}
qint64 Ticket::numero() const
{
	return m_iNumero;
}
qint64 Ticket::severite() const
{
	return m_iSeverite;
}