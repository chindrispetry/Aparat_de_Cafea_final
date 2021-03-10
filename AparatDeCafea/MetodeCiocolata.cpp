#include "Ciocolata.h"

Ciocolata::Ciocolata(){
    cantitateApa = 0;
    cantitateCacao = 0;
    cantitateLapte = 0;
    cantitateZahar = 0;
}
bool Ciocolata::Preparare(){
    int apa = GetCantApa();
    int cacao = GetCantCacao();
    int lapte = GetCantLapte();

    if(apa==0 || cacao==0 || lapte ==0)
        return false;
    else if (cacao-cantCacao>0 && apa-cantApa>0 && lapte-cantLapte>0){
        apa -= cantApa;
        cacao-=cantCacao;
        lapte -= cantLapte;
        cantitateApa = cantApa;
        cantitateCacao = cantCacao;
        cantitateLapte = cantLapte;
    }
    else{
        if(apa-cantApa>=0)
            cantitateApa = apa;
        else{
            cantitateApa = apa;
            apa=0;
        }
        if(cacao -cantCacao>=0)
            cantitateCacao= cacao;
        else{
            cantitateCacao= cacao;
            cacao=0;
        }
        if(lapte-cantLapte>=0)
            cantitateLapte = lapte;
        else{
            cantitateLapte=lapte;
            lapte=0;
        }
    }
    SetCantApa(apa);
    SetCantCacao(cacao);
    SetCantLapte(lapte);
    return true;
}
void Ciocolata::Servire( bool serv ,int zahar){
    if(serv){
    cout<<"Ciocolata contine:\n";
    cout<<"Cantitate Apa "<<cantitateApa<<" ml\n";
    cout<<"Cantitate Cacao "<<cantitateCacao<<" mg\n";
    cout<<"Cantitate Lapte "<<cantitateLapte<<" ml\n";
    cout<<"Cantitate Zahar "<<zahar<<" mg\n";
    }
    else
        cout<<"Nu mai exista ingrediente!";
}
Ciocolata::~Ciocolata(){}
