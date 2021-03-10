#include <iostream>
#include <fstream>
#include "Aparat.h"
using namespace std;

Aparat::Aparat(){
    ifstream f("Ingrediente.txt");
        f>>cantApa;
        f>>cantCacao;
        f>>cantCafea;
        f>>cantGranMenta;
        f>>cantLapte;
        f>>cantZahar;
        f.close();
}
void Aparat::Servire(bool m,int z){
    cout<<"Folosita pentru Polimorfism de Mostenire!";
}
bool Aparat::Preparare(){
    cout<<"Folosita pentru Polimorfism de Mostenire!";
    return true;
}
void Aparat::SetCantApa(int cant){
    cantApa = cant;
}
void Aparat::SetCantCafea(int cant){
    cantCafea = cant;
}
void Aparat::SetCantCacao(int cant){
    cantCacao = cant;
}
void Aparat::SetCantGranMenta(int cant){
    cantGranMenta = cant;
}
void Aparat::SetCantZahar(int cant){
    cantZahar = cant;
}
void Aparat::SetCantLapte(int cant){
    cantLapte = cant;
}
int Aparat::GetCantApa(){
   return cantApa;
}
int Aparat::GetCantZahar(){
   return cantZahar;
}
int Aparat::GetCantCafea(){
   return cantCafea;
}
int Aparat::GetCantCacao(){
   return cantCacao;
}
int Aparat::GetCantLapte(){
   return cantLapte;
}
int Aparat::GetCantGranMenta(){
   return cantGranMenta;
}
Aparat::~Aparat(){}
