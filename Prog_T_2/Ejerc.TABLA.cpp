//Ejercicio Tabla del 7.
//Sacar en bucle toda la tabla de multiplicar del 7.
//V0.0.1

#include <iostream>
using namespace std;

int main () {
	int cuenta=0;
	
	cout<<"\t TABLA DE MULTIPLICAR DEL 7"<< endl;
	
	do{
		cout<<"7x"<<cuenta<<"="<<7*cuenta<<endl;
		cuenta=cuenta+1;
	} while(cuenta<=10);
}
