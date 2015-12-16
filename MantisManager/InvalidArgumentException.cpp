#include "stdafx.h"
#include "InvalidArgumentException.h"


InvalidArgumentException::InvalidArgumentException(const QString& what_arg)
	: description(what_arg)
{
}

InvalidArgumentException::~InvalidArgumentException()
{
}
const QString InvalidArgumentException::What() const
{
	return description;
}
