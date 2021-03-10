#ifndef CAPPUCINO_H_INCLUDED
#define CAPPUCINO_H_INCLUDED

class Cappucino : public Aparat{
    //constate utilizate pentru prepararea bauturii
    const int cantApa=150;
    const int cantCafea = 80;
    const int cantLapte = 50;
    //date private
    int cantitateApa;
    int cantitateCafea;
    int cantitateLapte;
    int cantitateZahar;
    //Constructor utilizat pentru initializarea constantelor
public :
    Cappucino();
    ~Cappucino();
    //Metode
    bool Preparare();
    void Servire(bool,int);
};

#endif // CAPPUCINO_H_INCLUDED
