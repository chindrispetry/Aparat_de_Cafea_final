#ifndef ZAHAR_H_INCLUDED
#define ZAHAR_H_INCLUDED

class Zahar: public Aparat{
    //reprezinta o lingura de zahar
    const int lingZahar = 10;
    //date private
    int cantitateZahar;
    int CantZahar;
    //Constructorul care initializazea constanta
public:
    Zahar();
    ~Zahar();
    //Metoda folosita pentru a adauga o anumita cantitate de zahar in bautura
    int adaugLingZahar(int c);

};

#endif // ZAHAR_H_INCLUDED
