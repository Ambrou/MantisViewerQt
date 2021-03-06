#include "Status.h"

using namespace MantisData;

Status::Status()
	: m_id(-1),
	m_strNom("")
{

}
Status::Status(const qint64 id, const QString& strNom)
	: m_id(id), 
	m_strNom(strNom)
{

}

Status::Status(const Status& status)
	: m_id(status.m_id),
	m_strNom(status.m_strNom)
{

}

Status& Status::operator= (const Status& status)
{
	m_id = status.m_id;
	m_strNom = status.m_strNom;
	return *this;
}

Status::~Status()
{
}


QString Status::nom() const
{
	return m_strNom;
}

qint64 Status::id() const
{
	return m_id;
}