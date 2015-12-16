#pragma once
#include "MantisManagerException.h"
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

