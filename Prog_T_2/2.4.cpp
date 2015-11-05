//Ejercicio 2.4
//Programa para sacar el area del circulo y longitud de su perimetro a traves del radio.
//version 0.0.1

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double radio;
	double area;
	double longitud;
	
	
	cout<<"Escribe el radio de la circunferencia en cm: "<<endl;
	cin>> radio;
	if (radio <0) {     //situacion para radio negativo.
		cout<<"\n\t El radio es negativo, para calcular tiene que ser positivo."<<endl;
	}
	if (radio>0) {
		cout<< "\n\t El radio es:"<<radio<<endl;
		area=3.1415926535*(radio*radio);           //Calculo del area
		longitud= 2*3.1415926535*radio;            //Calculo del perimetro
		cout<<"\n\t El area de la circunferencia es: "<< area <<"  cm2."<<endl;
		cout<< "\n\t La longitude del perimetro de la circunferencia es: "<< longitud<<" cm."<< endl;
	}
}
//Fin del programa
