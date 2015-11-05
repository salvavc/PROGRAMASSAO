//Ejercicio cualquier tabla de multiplicar.
//Sacar en bucle cualquier tabla de multiplicar..
//V0.0.1

#include <iostream>
using namespace std;

int main () {
	int cuenta=0;
	double numero=0.0;
	
	
	cout<<"\t TABLA DE MULTIPLICAR"<< endl;
	cout<<"Escriba el numero del cual quiera sacar su tabla de multiplicar:"<<endl;
	cin>>numero;
	
	do{
		cout<<numero<<"x"<<cuenta<<"="<<numero*cuenta<<endl;
		cuenta=cuenta+1;
	} while(cuenta<=10);
}
