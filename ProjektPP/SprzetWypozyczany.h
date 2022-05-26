#pragma once
#include "Sprzet.h"

class SprzetWypozyczany : public Sprzet {
private:
    int naIleDni = 1;
public:
    SprzetWypozyczany(string nazwa);
    void wydaj();
};

