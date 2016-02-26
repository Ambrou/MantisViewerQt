#include "stdafx.h"
#include "Ticket.h"


Ticket::Ticket()
{
}

Ticket::Ticket(const qint64 iNumero, const QString& strResume, const qint64 iStatut)
	: m_iNumero(iNumero),
	m_strResume(strResume),
	m_iStatut(iStatut)
{
}

Ticket::Ticket(const Ticket& ticket)
	: m_iNumero(ticket.m_iNumero),
	m_strResume(ticket.m_strResume),
	m_iStatut(ticket.m_iStatut)
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