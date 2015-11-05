//Ejerc.2numeros distintos de 0.
//Programa para porder capturar y filtrar numero reales distintos de cero.
//V0.0.2

#include <iostream>
using namespace std;

int main () {
	double n1=0.0, n2=0.0;
	
	
	cout<< "Programa para porder capturar y filtrar numero reales distintos de cero."<<endl;
	//Tratamiento del primer numero.
	cout<<"Introduce el primer numero= ";
	cin>>n1;
	if(n1==0){
		do{cout<<"ERROR!!! Introduzca de nuevo el primer numero.."<<endl;
			cout<< "Primer numero= ";
			cin>>n1;
		}while(n1==0);
	}
    //FIN DEL PRIMER NUMERO.
    
    /*tratamiento segundo numero*/
    cout<<"Introduce el segundo numero="<<endl;
    cin>>n2;
    if(n2==0){
    	do{cout<<"ERROR!!! Introduzca de nuevo el segundo numero.."<<endl;
    		cout<< "Segundo numero= ";
    		cin>>n2;
		}while(n2==0);
	}
    //FIN DEL SEGUNDO NUMERO.
cout<<"CONGRATS!!! Ha introducido dos numeros validos."<<endl;
cout<<"\t NUMERO 1º= "<<n1<<endl;
cout<<"\t NUMERO 2º= "<<n2<<endl;
}
