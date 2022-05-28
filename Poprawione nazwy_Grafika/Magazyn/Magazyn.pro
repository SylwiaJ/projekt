QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dodajpracownika_n.cpp \
    dodajprzedmiot_n.cpp \
    main_n.cpp \
    magazyn_n.cpp \
    pracownik_n.cpp \
    sprzet_n.cpp \
    sprzetwydawany_n.cpp \
    sprzetwypozyczany_n.cpp \
    usunpracownika_n.cpp \
    usunprzedmiot_n.cpp \
    wypozyczalnia_n.cpp

HEADERS += \
    dodajpracownika_n.h \
    dodajprzedmiot_n.h \
    magazyn_n.h \
    pracownik_n.h \
    sprzet_n.h \
    sprzetwydawany_n.h \
    sprzetwypozyczany_n.h \
    usunpracownika_n.h \
    usunprzedmiot_n.h \
    wypozyczalnia_n.h

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
