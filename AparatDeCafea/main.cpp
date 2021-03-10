#include <iostream>
#include <conio.h>

#include "Aparat.h"
#include "Cafea.h"
#include "Cappucino.h"
#include "Ceai.h"
#include "Ciocolata.h"
#include "Depozit.h"
#include "Zahar.h"

#include "MetodeAparat.cpp"
#include "MetodeCafea.cpp"
#include "MetodeCappucino.cpp"
#include "MetodeCeai.cpp"
#include "MetodeCiocolata.cpp"
#include "MetodeDepozit.cpp"
#include "MetodeZahar.cpp"

using namespace std;
void SetZahar(int c,int x[],int i)
{

    if(c==43)
        x[i]=1;
    if(c==45)
        x[i+1]=0;
}
void Afisare(int x[])
{
    cout<<"\n-----------\n";
    for(int i=0; i<5; i++)
    {
        cout<<"|";
        if(x[i]==1)
            cout<<"$";
        if(x[i]==0)
            cout<<" ";
    }
    cout<<"|";
    cout<<"\n-----------\n";
}
int ReglareZahar(int c,int x[],int i,Zahar z)
{
    int zah;
    cout<<"Utilizati tastele '+','-' pentru Zahar,orice tasta daca doriti sa iesiti:";
    do
    {
        c = getch();
        if(c==43 && i<5)
        {
            i++;
            zah = z.adaugLingZahar(c);
        }
        if(c==45 && i>0)
        {
            i--;
            zah = z.adaugLingZahar(c);
        }
        SetZahar(c,x,i);
        cout<<"\n Zahar:";
        Afisare(x);
    }
    while(c==43 || c==45);
    return zah;
}
void resetX(int x[],int n)
{
    for(int i=0; i<n; i++)
        x[i] = 0;
}
void Restuldindepozit(Depozit depozit)
{
    float val,suma;
    cout<<"Bautura costa 2.5lei,indroduceti suma pe care o detineti:";
    do
    {
        cin>>suma;
        val = depozit.CalcRest(suma);
        if(val==0)
        {
            cout<<"\nRestul este:"<<val<<"\n";
        }
        if(val==1)
            cout<<"\nSuma incorecta!";
        if(val==2)
            depozit.Rest();
    }
    while(val==1);
}
int main()
{
    int opt;
    int c,x[5],i=-1,zah,n=5;
    float val,suma,bacnote[2][2]= {{10,1},{10,0.5}};
    bool serv;
    bool stop = true;

    Aparat* aparat[] = {
        new Cafea,
        new Cappucino,
        new Ceai,
        new Ciocolata
    };
    Zahar zahar;
    Depozit depozit(bacnote);

    do
    {
        system("cls");
        cout<<"<<<<Aparat De Cafea>>>>";
        cout<<"\n[1]Cafea   [2]Ciocolata"<<"\n[3]Ceai    [4]Cappucino \n[0]Exit";
        cout<<"\nCe Bautura doriti:";
        cin>>opt;
        switch(opt)
        {
        case 1:
            Restuldindepozit(depozit);
            resetX(x,n);
            serv = aparat[0]->Preparare();
            zah  = ReglareZahar(c,x,i,zahar);
            aparat[0]->Servire(serv,zah);
            getch();
            break;
        case 2:
            Restuldindepozit(depozit);
            resetX(x,n);
            serv = aparat[1]->Preparare();
            zah  = ReglareZahar(c,x,i,zahar);
            aparat[1]->Servire(serv,zah);
            getch();
            break;
        case 3:
            Restuldindepozit(depozit);
            resetX(x,n);
            serv  = aparat[2]->Preparare();
            zah  = ReglareZahar(c,x,i,zahar);
            aparat[2]->Servire(serv,zah);
            getch();
            break;
        case 4:
            Restuldindepozit(depozit);
            resetX(x,n);
            serv = aparat[3]->Preparare();
            zah  = ReglareZahar(c,x,i,zahar);
            aparat[3]->Servire(serv,zah);
            getch();
            break;
        case 0:
            stop=false;
            break;
        }
    }
    while(stop);
    return 0;
}
