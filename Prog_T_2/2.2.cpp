//Ejercicio 2.2
// Programa Par o Impar.
// version 0.1

#include <iostream>
using namespace std;

int main () {
	int v1;
	
	cout<< "\t Programa para indicar si un valor es par o impar.\n";
	cout<<"Introduce el valor: ";
	cin >> v1;
	if ( v1%2==0) {                // si el resto de la divison entre v1 y 2 es cero el numero es par.
		cout<<v1<<"  es un numero par.";
}
	else                          // si no,  es impar.
	cout<<v1<< "  es un numero impar";
		
}
