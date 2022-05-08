#pragma once
#include "Sprzet.h"

class Komputer: public Sprzet {
private:
    bool czyWydany;
public:
    Komputer(string nazwa);
    void wydaj();
};

