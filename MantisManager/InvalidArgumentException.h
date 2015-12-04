#pragma once

#include <QException>
#include <QString>
class InvalidArgumentException :
	public QException
{
public:
	explicit InvalidArgumentException(const QString& what_arg);
	InvalidArgumentException(const InvalidArgumentException& exception);
	virtual ~InvalidArgumentException();
	void raise() const;
    InvalidArgumentException *clone() const;

	const char* what() const;

private:
	const QString description;
};

