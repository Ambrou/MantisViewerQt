#include <QException>

#pragma once
class InvalidArgumentException :
	public QException
{
public:
	explicit InvalidArgumentException(const QString& what_arg);
	virtual ~InvalidArgumentException();
};

