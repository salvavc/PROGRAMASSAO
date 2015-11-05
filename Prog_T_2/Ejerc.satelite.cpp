//Ejercicio "Bucle del satelite"
//Programa para acumular datos enteros hastA que aparezca un numero negativo.
//Version 0.0.1

#include <iostream>
using namespace std;

int main() {
	
	int dato;
	
	do{
		cin>> dato;
		cout<< "Dato recibido: "<<dato<<endl;
	}
		while (dato >=0);
	cout<<"\t FIN DE LA TRANSMISiON.";	
}
