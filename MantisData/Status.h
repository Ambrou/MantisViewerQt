#pragma once

#include "mantisdata_global.h"
#include <QString>

namespace MantisData
{
	class MANTISDATA_EXPORT Status
	{
	public:
		Status();
		Status(const qint64 id, const QString& strNom);
		Status(const Status& status);
		~Status();
		Status& operator= (const Status& status);

		QString nom() const;
		qint64 id() const;

	private:
		QString m_strNom;
		qint64 m_id;
	};

}
