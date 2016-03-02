#pragma once
#include "MantisManagerException.h"

namespace MantisManager
{
	class OperationImpossibleException :
		public MantisManagerException
	{
	public:
		OperationImpossibleException(const QString& what_operation);
		~OperationImpossibleException();
		const QString What() const;

	private:
		const QString description;
	};
}