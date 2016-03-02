#include "Criticite.h"

using namespace MantisData;

Criticite::Criticite()
	: m_Id(-1), m_Nom("")
{
}

Criticite::Criticite(const qint64 id, const QString& nom)
	: m_Id(id), m_Nom(nom)
{
}

Criticite::Criticite(const Criticite& criticite)
	: m_Id(criticite.m_Id),
	m_Nom(criticite.m_Nom)
{

}

Criticite& Criticite::operator= (const Criticite& criticite)
{
	m_Id = criticite.m_Id;
	m_Nom = criticite.m_Nom;
	return *this;
}


Criticite::~Criticite()
{
}

qint64 Criticite::id() const
{
	return m_Id;
}
QString Criticite::nom() const
{
	return m_Nom;
}