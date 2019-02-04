#include <iostream>

using namespace std;

int main(){
	int n;
	
	cout << "Inserte el valor de n: ";
	cin >> n;
	n = n + (++n);
	
	cout << "\n" << "Resultado: " << n << "\n";
}
