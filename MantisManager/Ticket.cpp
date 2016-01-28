#include "stdafx.h"
#include "Ticket.h"


Ticket::Ticket()
{
}

Ticket::Ticket(const qint64 iNumero, const QString& strResume, const QString& strStatut)
	: m_iNumero(iNumero),
	m_strResume(strResume),
	m_strStatut(strStatut)
{
}

Ticket::Ticket(const Ticket& ticket)
	: m_iNumero(ticket.m_iNumero),
	m_strResume(ticket.m_strResume),
	m_strStatut(ticket.m_strStatut)
{
}


Ticket::~Ticket()
{
}

Ticket& Ticket::operator= (const Ticket& ticket)
{
	m_iNumero = ticket.m_iNumero;
	m_strResume = ticket.m_strResume;
	m_strStatut = ticket.m_strStatut;
	return *this;
}

QString Ticket::titre() const
{
	return m_strResume;
}
QString Ticket::status() const
{
	return m_strStatut;
}
qint64 Ticket::numero() const
{
	return m_iNumero;
}