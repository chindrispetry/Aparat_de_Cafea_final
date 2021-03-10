#ifndef CEAI_H_INCLUDED
#define CEAI_H_INCLUDED

class Ceai : public Aparat{
    //constate utilizate pentru prepararea bauturii
    const int cantApa = 150;
    const int cantGranMenta = 75;
    //date private
    int cantitateApa;
    int cantitateGranMenta;
    int cantitateZahar;
    //Constructor utilizat pentru initializarea constantelor
public:
    Ceai();
    ~Ceai();
    //Metode
    bool Preparare();
    void Servire(bool,int);
};

#endif // CEAI_H_INCLUDED
