#include "Fecha.h"

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  Fecha a,b,c(21,9,1973);
  b.inicializaFecha(17,6,2019);;
  a.muestraFecha();
  b.muestraFecha();
  c.muestraFecha();
  std::cout << "a.convierte(): "<<a.convierte()<< '\n';
  std::cout << "b.convierte(): "<<b.convierte()<< '\n';
  std::cout << "c.convierte(): "<<c.convierte()<< '\n';
  std::cout << "b.anios(): "<<b.anios()<< '\n';
  return 0;
}
