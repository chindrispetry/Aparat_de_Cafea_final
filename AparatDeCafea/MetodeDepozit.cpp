#include "Depozit.h"

Depozit::Depozit(float nrBacnote[2][2]){

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            bacnote[i][j]=nrBacnote[i][j];
    rest[0] = rest[1] = 0;
}
float Depozit::CalcRest(float suma){
    float res;
    int contor = 0;
    int i=0,j=1;
    if(suma==pret)
        return 0;
    if(suma<pret)
        return 1;
    else{
        res = suma-pret;
        while(res!=0)
        {
            while(res-bacnote[i][j]>=0){
                res-=bacnote[i][j];
                contor++;
            }
            if(i==0){
                rest[1]=contor;
                contor=0;
            }
            if(i==1){
                rest[0]=contor;
                contor=0;
            }
            if(i<1){
                i+=1;
            }
        }
    return 2;
    }
}
void Depozit::Rest(){
    cout<<"\n Restul este: "<<rest[1]<<"x1 leu "<<rest[0]<<"x50 bani \n";
}
Depozit::~Depozit(){}

