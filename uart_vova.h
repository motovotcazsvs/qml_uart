#ifndef UART_VOVA_H
#define UART_VOVA_H

#include <QObject>
#include "wiringPi.h"
#include <wiringSerial.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>


class uart_vova : public QObject
{
    Q_OBJECT
public:
    explicit uart_vova(QObject *parent = 0);

signals:

public slots:
};

#endif // UART_VOVA_H
