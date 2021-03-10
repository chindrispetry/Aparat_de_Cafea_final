#ifndef CAFEA_H_INCLUDED
#define CAFEA_H_INCLUDED

class Cafea : public Aparat{
    //constate utilizate pentru prepararea bauturii
    const int cantApa = 150;
    const int cantCafea  = 80;
    //date private
    int cantitateApa;
    int cantitateCafea;
    //Constructor utilizat pentru initializarea constantelor
public:
    Cafea();
    ~Cafea();
    //Metode
    bool Preparare();
    void Servire(bool, int);
};

#endif // CAFEA_H_INCLUDED
