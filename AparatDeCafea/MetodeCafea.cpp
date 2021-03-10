#include "Cafea.h"

Cafea::Cafea(){
    cantitateApa = 0;
    cantitateCafea = 0;
}
bool Cafea::Preparare(){
    int apa = GetCantApa();
    int cafea= GetCantCafea();
    if(apa==0 || cafea==0)
        return false;
    else if (cafea-cantCafea>0 && apa-cantApa>0){
        apa -= cantApa;
        cafea -= cantCafea;
        cantitateApa = cantApa;
        cantitateCafea = cantCafea;
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
    }
    SetCantApa(apa);
    SetCantCafea(cafea);
    return true;
}
void Cafea::Servire(bool serv, int zahar){
    if(serv){
    cout<<"Cafeaua contine:\n";
    cout<<"Cantitate apa "<<cantitateApa<<" ml\n";
    cout<<"Cantitate cafea "<<cantitateCafea<<" mg\n";
    cout<<"Cantitate zahar "<<zahar<<" mg\n";
    }
    else
        cout<<"Nu mai exista ingrediente!";
}
Cafea::~Cafea(){}
