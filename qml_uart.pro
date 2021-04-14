TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    uart_vova.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

LIBS += -L"/home/qtdev/raspi4/sysroot/usr/lib"
LIBS += -lwiringPi
target.path = /home/pi/WiringTest/bin
INSTALLS += target
# Default rules for deployment.
#include(deployment.pri)

HEADERS += \
    uart_vova.h
