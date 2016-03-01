#pragma once
#include <QObject>
class TicketExtendedUiQML :
	public QObject
{
	Q_OBJECT	
	Q_PROPERTY(qint64 idTicket READ idTicket WRITE setIdticket NOTIFY idTicketChanged)

public:
	TicketExtendedUiQML();
	~TicketExtendedUiQML();

	qint64 idTicket() const {
		return m_idTicket;
	}
	void setIdticket(const qint64 &idTicket) {
		m_idTicket = idTicket;
		emit idTicketChanged();
	}

signals:
	void idTicketChanged();

private:
	qint64 m_idTicket;
	QString m_Description;
};

