#include "stdafx.h"
#include "OperationImpossibleException.h"


OperationImpossibleException::OperationImpossibleException(const QString& what_operation)
{
}


OperationImpossibleException::~OperationImpossibleException()
{
}

const QString OperationImpossibleException::What() const
{
	return description;
}

