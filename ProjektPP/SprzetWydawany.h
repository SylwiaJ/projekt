#pragma once
#include "Sprzet.h"

class SprzetWydawany: public Sprzet {
private:
    static int ilosc;
    int coIleDni = 1;
public:
    SprzetWydawany(string nazwa);    
    void wydaj();
};

