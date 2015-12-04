#include "stdafx.h"
#include "InvalidArgumentException.h"


InvalidArgumentException::InvalidArgumentException(const QString& what_arg)
	: description(what_arg)
{
}

InvalidArgumentException::InvalidArgumentException(const InvalidArgumentException& exception)
	: description(exception.description)
{
}


InvalidArgumentException::~InvalidArgumentException()
{
}

InvalidArgumentException *InvalidArgumentException::clone() const 
{ 
	return new InvalidArgumentException(*this); 
}

void InvalidArgumentException::raise() const 
{ 
	throw *this; 
}

const char* InvalidArgumentException::what() const
{
	printf("aaa-%s-bbb\n", description.toStdString().c_str());
	return description.toStdString().c_str();
}
