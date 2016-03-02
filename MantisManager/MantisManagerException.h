#pragma once

#include <QException>

namespace MantisManager
{
	class MantisManagerException :
		public QException
	{
	public:
		MantisManagerException() {};
		virtual ~MantisManagerException() {};
		virtual const QString What() const = 0;
	};
}