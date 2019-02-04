#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926;

int main(){
  float radio,area;
  std::cout << "Introduce el radio: " << '\n';
  cin>>radio;
  //PI=PI+5;
  area=PI*pow(radio,2);

  std::cout << "El area del circulo es: " <<area << '\n';
  return 0;
}
