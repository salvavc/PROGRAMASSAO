//Ejercicio 2.12
//Programa Minicalculadora.
//Version 0.0.1

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	double n1, n2;
	char opcion;
	double resultado;
	
	
	cout<< "Escriba los dos numeros con los que quiere operar:"<< endl;
	cin >> n1>> n2;
	
	cout<< "A continuación elegiremos la opción para operar...";
	cout<< "\t\n{S} para Sumar.";
	cout<< "\t\n{R} para Restar.";
	cout<< "\t\n{M} para Multiplicar.";
	cout<< "\t\n{D} para dividir.\n";
	cin>> opcion;
	
	switch (opcion) {
		case 's':
		case 'S':
			resultado=n1+n2;
			cout<< "El resultado de la suma es: "<<resultado<<endl;
			break;
		case'r':
		case'R':
			resultado=n1-n2;
			cout<<"El resultado de la resta es: "<<resultado<<endl;
			break;
		case'M':
		case'm':
			resultado=n1*n2;
			cout<<"El resultado de la multiplicación es: "<<resultado<< endl;
			break;
		case 'd':
		case 'D':
			resultado=n1/n2;
			cout<<"El resultado de la división es: "<<resultado<<endl;
			break;
		default://En el caso de que no introduzca nada de lo anterior.
			cout<<"Opción incorrecta."<<endl;
			
	}
}
