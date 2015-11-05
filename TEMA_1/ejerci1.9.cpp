//ejercicio 1.9

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double a, b, c;
	double x;
	cout<<"Queremos despejar una ecuacion de segundo grado\n";
	cout<<"La forma de la ecuacion es..\n"
	<<"\t ax2+bx+c=0 \n"<<endl;
	cout<<"\n elija la variable A= ";
	cin>> a;
	cout<<"\n Elija la variable B= ";
	cin>>b;
	cout<<"\n Elija la variable C= ";
	cin>> c;
	cout<<"La solucion para la ecuacion es...\n";
	x=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"\t Solucion 1= "<<x<<endl;
	x=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"\t Solucion 2= "<<x<<endl;
	
	
}

