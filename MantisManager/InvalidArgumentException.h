#pragma once

#include <MantisManagerException.h>

class InvalidArgumentException :
	public MantisManagerException
{
public:
	explicit InvalidArgumentException(const QString& what_arg);
	virtual ~InvalidArgumentException();
	
	const QString What() const;

private:
	const QString description;
};

