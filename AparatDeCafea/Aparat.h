#ifndef APARAT_H_INCLUDED
#define APARAT_H_INCLUDED

class Aparat{
    //date
    int cantApa;
    int cantCafea;
    int cantLapte;
    int cantZahar;
    int cantGranMenta;
    int cantCacao;
    //metode
    //Constructor utilizat pentru citirea ingredientelor din fisier
public :
    Aparat();
    ~Aparat();
    //Metode utilizate pentru a seta cantitatea dupa ce s-a modificat
    void SetCantApa(int);
    void SetCantCafea(int);
    void SetCantLapte(int);
    void SetCantZahar(int);
    void SetCantGranMenta(int);
    void SetCantCacao(int);
    //Metode utilizate pentru a prelua cantitea din ingredientul respectiv
    int GetCantApa();
    int GetCantCafea();
    int GetCantLapte();
    int GetCantZahar();
    int GetCantGranMenta();
    int GetCantCacao();

    //Pentru polimorfism
    virtual void Servire(bool , int);
    virtual bool Preparare();
};


#endif // APARAT_H_INCLUDED
