#include "Zahar.h"

Zahar::Zahar(){
    cantitateZahar = GetCantZahar();
    CantZahar = 0;
}
int Zahar::adaugLingZahar(int c){
    if(cantitateZahar>0)
    {
    if(c==43 && CantZahar<50)
        CantZahar += lingZahar;
    if(c==45 && CantZahar>0)
        CantZahar -= lingZahar;
    }
    return CantZahar;
}
Zahar::~Zahar(){}
