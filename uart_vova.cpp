#include "uart_vova.h"
#include <QDebug>

uart_vova::uart_vova(QObject *parent) : QObject(parent)
{
    serial_port = serialOpen("/dev/ttyUSB0", 9600);
    wiringPiSetup();

    if(serialDataAvail(serial_port)){
        dat = serialGetchar(serial_port);
        qDebug() << dat;
        printf("%c", dat);
        //serialPutchar(serial_port, dat);
    }
}
