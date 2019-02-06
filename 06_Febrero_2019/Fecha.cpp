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
