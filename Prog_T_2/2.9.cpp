//Ejercicio 2.9
//Programa para poner la nota.
//Version 0.0.1

#include <iostream>
using namespace std;

int main (){
	double nota;
	
cout << "Escriba la nota: ";
	cin>> nota;
	if ((nota>=0) && (nota<=4.9))
		cout<<"\t\n._.SUSPENSO._.";
	if ((nota>=5.0) && (nota<=7.9))
		cout<<"\t\n :) APROBADO :)";
	if ((nota>=7.0) && (nota<=9.9))
		cout<<"\t\n ;) NOTABLE ;)";
	if ((nota>=9.0) && (nota<=10.0))
		cout<<"\t\n :)))) SOBRESALIENTE :))))"<<endl;
	else if (nota>10)
		cout <<"\t\n La nota no puede ser superior a 10"<<endl;
		
		
}
//Fin del programa.
