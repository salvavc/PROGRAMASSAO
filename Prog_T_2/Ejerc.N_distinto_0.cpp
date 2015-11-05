//Ejerc.2numeros distintos de 0.
//Programa para porder capturar y filtrar numero reales distintos de cero.
//V0.0.1

#include <iostream>
using namespace std;

int main () {
	double n1=0.0, n2=0.0;
	
	
	cout<< "Programa para porder capturar y filtrar numero reales distintos de cero."<<endl;
do{
	cout<<"Introduce el primer numero= ";
	cin>>n1;
}	while (n1==0);
do{
	cout<<"Introduce el segundo numero= ";
	cin>>n2;
}	while(n2==0);

cout<<"CONGRATS!!! Ha introducido dos numero distintos de cero"<<endl;
cout<<"\t NUMERO 1º= "<<n1<<endl;
cout<<"\t NUMERO 2º= "<<n2<<endl;
}
