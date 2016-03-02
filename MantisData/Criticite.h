#pragma once

#include "mantisdata_global.h"
#include <QString>

namespace  MantisData
{
	class MANTISDATA_EXPORT Criticite
	{
	public:
		Criticite();
		Criticite(const qint64 id, const QString& nom);
		Criticite(const Criticite& criticite);
		~Criticite();
		Criticite& operator= (const Criticite& criticite);

		qint64 id() const;
		QString nom() const;

	private:
		qint64 m_Id;
		QString m_Nom;
	};
}
