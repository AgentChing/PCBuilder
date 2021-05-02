QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    C:/Users/HP/Desktop/SPAM.csv \
    C:/Users/HP/Desktop/graphics1.csv \
    C:/Users/HP/Desktop/motherboard1.csv \
    C:/Users/HP/Desktop/powersupply1.csv \
    C:/Users/HP/Desktop/processor1.csv \
    C:/Users/HP/Desktop/ram1.csv \
    C:/Users/HP/Desktop/storage1.csv \
    C:/Users/HP/Downloads/play-button-arrowhead.png

RESOURCES += \
    img.qrc
