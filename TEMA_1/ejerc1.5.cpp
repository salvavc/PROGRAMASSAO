#include <iostream>
#include <cmath> // biblioteca para operaciones de matematicas.
using namespace std;

int main () {
	double valor, base;
	
	cout << "indique base: ";
	cin >> base;
	cout << " indique valor: ";
	cin >> valor;
	cout << "el log en base" << base << "de";
    cout    << valor << "es";
	cout<< log (valor) / log(base) << endl;    
}
