#include <iostream>

using namespace std;

int main(){
	int ent1, ent2, opc;
	float flot,res;
	
	cout << "¿Que tipos de datos deceas dividir?" << "\n";
	cout << "1.- Entero/Entero 2.- Entero/Flotante" << "\n";
	cin >> opc;
	if(opc==1){
		cout << "Numerador entero: ";
		cin >> ent1;
		cout << "\n" << "Denominador entero: ";
		cin >> ent2;
		res = ent1/ent2;
		cout << "Resultado: " << res << "\n";
	} else if(opc==2){
		cout << "Numerador entero: ";
		cin >> ent1;
		cout << "\n" << "Denominador flotante: ";
		cin >> flot;
		res = ent1/flot;
		cout << "Resultado: " << res << "\n";
	} else {
		cout << "Error opcion no valida vuelve a intentarlo";
	}
	
	return 0;
}
