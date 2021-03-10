#include "Ceai.h"

Ceai::Ceai(){
    cantitateApa = 0;
    cantitateGranMenta = 0;
    cantitateZahar = 0;
}
bool Ceai::Preparare(){
    int apa=GetCantApa();
    int granule=GetCantGranMenta();
    if(apa==0 || granule==0)
        return false;
    else if (granule - cantGranMenta>0 && apa-cantApa>0){
        apa -= cantApa;
        granule-=cantGranMenta;
        cantitateApa = cantApa;
        cantitateGranMenta = cantGranMenta;
    }
    else{
        if(apa-cantApa>=0)
            cantitateApa = apa;
        else{
            cantitateApa = apa;
            apa=0;
        }
        if(granule-cantGranMenta>=0)
            cantitateGranMenta = granule;
        else{
            cantitateGranMenta = granule;
            granule=0;
        }
    }
    SetCantApa(apa);
    SetCantGranMenta(granule);
    return true;
}
void Ceai::Servire(bool serv,int zahar){
    if(serv){
    cout<<"ceaiul contine:\n";
    cout<<"Cantitate Apa "<<cantitateApa<<" ml\n";
    cout<<"Cantitate Granule Menta "<<cantitateGranMenta<<" mg\n";
    cout<<"Cantitate Zahar "<<zahar<<" mg\n";
    }
    else
        cout<<"Nu mai exista ingrediente!";
}
Ceai::~Ceai(){}
