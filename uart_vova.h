#ifndef UART_VOVA_H
#define UART_VOVA_H

#include <QObject>

class uart_vova : public QObject
{
    Q_OBJECT
public:
    explicit uart_vova(QObject *parent = 0);

signals:

public slots:
};

#endif // UART_VOVA_H