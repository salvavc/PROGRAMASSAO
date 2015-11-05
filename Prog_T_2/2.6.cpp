// Ejercicio 2.6
// El uso de "If / else" en una ecuación de segundo grado.
// Version 0.0.1


#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double a, b, c;
	double x1, x2;
	
	cout<< " Programa para resolver una ecuación de segundo grado.\n";
	cout<< "Introduzca el valor para a= \n";
	cin>> a;
	cout<< "introduzca el valor para b= \n";
	cin>> b;
	cout<< "Introduzca el valor para c= \n";
	cin>> c;

	if(a!=0) {
		x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<< "Los resultado son... "<< x1 << 
	"y"<<x2<< endl;	
}
else
cout<< "solo una raiz: "<< -c/b<< endl;

}
