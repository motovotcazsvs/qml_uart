#include "uart_vova.h"

uart_vova::uart_vova(QObject *parent) : QObject(parent)
{
    int serial_port ;
    char dat;
    serial_port = serialOpen("/dev/ttyUSB0", 9600);
    wiringPiSetup();

    if(serialDataAvail(serial_port)){
        dat = serialGetchar(serial_port);
        printf("%c", dat);
        serialPutchar(serial_port, dat);
    }
}
