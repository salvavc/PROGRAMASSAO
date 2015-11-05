//Ejercicio 1.14

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x1, x2, x3;
	double m;
	double d;
	
	cout<<"Escriba los tres valores para las tres incognitas: ";
	cin>> x1 >> x2 >> x3;
	m=(x1+x2+x3)/3;
	
	cout<< "La media es: \n"<<m<<endl;
	d= sqrt(pow(x1-m,2)+pow(x2-m,2)+pow(x3-m,2))/3;
	
	cout<< "La desviacion es: "<<d<<endl;
	
}
