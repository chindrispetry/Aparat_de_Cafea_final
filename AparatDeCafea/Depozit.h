#ifndef DEPOZIT_H_INCLUDED
#define DEPOZIT_H_INCLUDED

class Depozit{
    //voi avea doua tipuri de bacnote:50bani,1leu
    float bacnote[2][2];
    int rest[2];
    const float pret = 2.5f;
    //Constructorul
public:
    Depozit(float nrBacnote[2][2]);
    ~Depozit();
    //Metode
    float CalcRest(float a);
    void Rest();
};

#endif // DEPOZIT_H_INCLUDED
