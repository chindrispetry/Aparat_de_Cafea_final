#include "Cappucino.h"

Cappucino::Cappucino(){
    cantitateApa = 0;
    cantitateCafea = 0;
    cantitateLapte = 0;
    cantitateZahar = 0;
}
bool Cappucino::Preparare(){
    int apa = GetCantApa();
    int cafea = GetCantCafea();
    int lapte = GetCantLapte();

    if(apa==0 || cafea==0 || lapte ==0)
        return false;
    else if (cafea-cantCafea>0 && apa-cantApa>0 && lapte-cantLapte>0){
        apa -= cantApa;
        cafea -= cantCafea;
        lapte -= cantLapte;
        cantitateApa = cantApa;
        cantitateCafea = cantCafea;
        cantitateLapte = cantLapte;
    }
    else{
        if(apa-cantApa>=0)
            cantitateApa = apa;
        else{
            cantitateApa = apa;
            apa=0;
        }
        if(cafea-cantCafea>=0)
            cantitateCafea = cafea;
        else{
            cantitateCafea = cafea;
            cafea=0;
        }
        if(lapte-cantLapte>=0)
            cantitateLapte = lapte;
        else{
            cantitateLapte=lapte;
            lapte=0;
        }
    }

    SetCantApa(apa);
    SetCantCafea(cafea);
    SetCantLapte(lapte);
    return true;
}
void Cappucino::Servire(bool serv,int zahar){
    if(serv){
    cout<<"Cappucino contine:\n";
    cout<<"Cantitate Apa "<<cantitateApa<<" ml\n";
    cout<<"Cantitate Cafea "<<cantitateCafea<<" mg\n";
    cout<<"Cantitate Lapte "<<cantitateLapte<<" ml\n";
    cout<<"Cantitate Zahar "<<zahar<<" mg\n";
    }
    else
        cout<<"Nu mai exista ingrediente!";
}
Cappucino::~Cappucino(){}
