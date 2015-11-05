#include <iostream>
using namespace std;

int main () {
	
	double nteoria, npracticas, nproblemas, nota_final;
	
	cout<< "Escriba las notas de teoria, practicas, problemas: ";
	cin>> nteoria >> npracticas >> nproblemas;
	nota_final= (nteoria*70)/100 + (npracticas*20)/100 + (nproblemas*10)/100;
	cout<< "La nota final es: "<<nota_final<<"sobre 10"<<endl;
}
