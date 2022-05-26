QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dodajpracownika.cpp \
    main.cpp \
    magazyn.cpp \
    pracownik.cpp \
    sprzet.cpp \
    usunpracownika.cpp \
    wypozyczalnia.cpp

HEADERS += \
    dodajpracownika.h \
    magazyn.h \
    pracownik.h \
    sprzet.h \
    usunpracownika.h \
    wypozyczalnia.h

FORMS += \
    dodajpracownika.ui \
    magazyn.ui \
    pracownik.ui \
    sprzet.ui \
    usunpracownika.ui \
    wypozyczalnia.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
