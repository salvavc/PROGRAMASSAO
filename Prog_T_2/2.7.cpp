//Ejercicio 2.7
// Programa para saber que numero es mayor-
//Version 0.0.1

#include <iostream>
using namespace std;

int main () {
	
	double n1, n2, n3;
	
	cout<< " Introduzca 3 numeros: "<< endl;
	cin >> n1 >> n2 >> n3;
	
	if (n1>n2>n3)
		cout<<"\t\n("<<n1<<") El Primero es mayor";
	else if (n2>n1>n3)
		cout<<"\t\n ("<<n2<<") El segundo es el mayor";
	else if (n3>n2>n1)
		cout<<"\t\n ("<<n3<<") El tercero es el mayor";

	else
	cout<<"Los tres son iguales"<< endl;
	}

