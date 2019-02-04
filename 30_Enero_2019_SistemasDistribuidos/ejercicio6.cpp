#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926;

int main(){
  double precio =78.7;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  std::cout << precio << '\n';
  return 0;
}
