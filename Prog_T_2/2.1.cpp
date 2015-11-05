// Ejercicio 2.1
// Programa que indica, entre dos valores, cual es el mayor
// Version 0.0.1.

#include <iostream>
using namespace std;

int main () {
	double v1, v2;
	
	cout<< "\t Programa para indicar, entre dos valores, cual es el mayor.\n";
	cout<<"Introduce el primer valor: ";
	cin >> v1;
	cout<< "introduce el segundo valor: \n";
	cin >> v2;
	if (v1>v2) {
		cout<<v1;	
	}
		else
		cout<<"Resultado"<<v2;
}
