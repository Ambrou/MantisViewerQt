#include "stdafx.h"
#include "InvalidArgumentException.h"


InvalidArgumentException::InvalidArgumentException(const QString& what_arg)
	: description(what_arg)
{
}


InvalidArgumentException::~InvalidArgumentException()
{
}

const char* InvalidArgumentException::what() const
{
	return description.toStdString().c_str();
}
