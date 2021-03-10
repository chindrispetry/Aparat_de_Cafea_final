#ifndef CIOCOLATA_H_INCLUDED
#define CIOCOLATA_H_INCLUDED

class Ciocolata : public Aparat{
    //constate utilizate pentru prepararea bauturii
    const int cantApa = 150;
    const int cantCacao = 75;
    const int cantLapte = 75;
    //date private
    int cantitateApa;
    int cantitateCacao;
    int cantitateLapte;
    int cantitateZahar;
    //Constructor utilizat pentru initializarea constantelor
public:
    Ciocolata();
    ~Ciocolata();
    //Metode
    bool Preparare();
    void Servire(bool,int);
};

#endif // CIOCOLATA_H_INCLUDED
