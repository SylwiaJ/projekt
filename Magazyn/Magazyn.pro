QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dodajpracownika.cpp \
    dodajprzedmiot.cpp \
    main.cpp \
    magazyn.cpp \
    pracownik.cpp \
    sprzet.cpp \
    sprzetwydawany.cpp \
    sprzetwypozyczany.cpp \
    usunpracownika.cpp \
    usunprzedmiot.cpp \
    wypozyczalnia.cpp

HEADERS += \
    dodajpracownika.h \
    dodajprzedmiot.h \
    magazyn.h \
    pracownik.h \
    sprzet.h \
    sprzetwydawany.h \
    sprzetwypozyczany.h \
    usunpracownika.h \
    usunprzedmiot.h \
    wypozyczalnia.h

FORMS += \
    dodajpracownika.ui \
    dodajprzedmiot.ui \
    magazyn.ui \
    pracownik.ui \
    sprzet.ui \
    sprzetwydawany.ui \
    sprzetwypozyczany.ui \
    usunpracownika.ui \
    usunprzedmiot.ui \
    wypozyczalnia.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
