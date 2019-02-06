#include "Fecha.h"
#include <iostream>
using namespace std;
Fecha::Fecha(int dd,int mm,int aaaa){
  mes=mm;
  dia=dd;
  anio=aaaa;
}

void Fecha::inicializaFecha(int dd,int mm,int aaaa){
  anio=aaaa;
  mes=mm;
  dia=dd;
  return;
}

void Fecha::muestraFecha(){
  std::cout << "La fecha es (dia-mes-anio)" <<dia<<"-"<<mes<<"-"<<anio<<'\n';
}

long Fecha::convierte(){
  return anio*10000+mes*100+dia;
}

bool Fecha::leapyr(int a){
  if(a%4==0 && a%100!=0)
    return true;
  if(a%400==0)
    return true;

  return false;
}

int Fecha::anios(){
  int cont=1;
  int aux2=0;
  for(cont;cont<=anio;cont++){
    if(leapyr(cont)){
      //std::cout << "Bisiesto: "<<cont << '\n';
      aux2=aux2+1;
    }
  }
  return aux2;
}
