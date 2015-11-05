//
//  irpf.cpp
//  Programa demostrativo del cálculo del IRPF al 21% sobre una cantidad salarial bruta
//
//  Created by Jaime Matas Bustos on 21/10/15.
//
//

#include <iostream>
using namespace std;

int main(){
    const float IRPF = 0.21; //constante que almacena el porcentaje del IRPF a retener por Hacienda
    const float SS = 0.04; // constante que almacena el porcentaje de SS a retener por el Ministerio de Trabajo
    double salario_bruto = 0.0; //variable que almacena el salario bruto que introduce el usuario
    double irpf_total = 0.0; //variable que contendrá la cantidad de dinero a retener por parte de Hacienda
    double ss_total = 0.0;  //variable que contendrá la cantidad de dinero a retener por parte de la SS
    double salario_neto = 0.0; // variable que contendrá el salario neto correspondiente a la retención
    
    //1) Tomo del usuario el salario bruto y lo almaceno en memoria
    cout << "Por favor, introduzca la cantidad salarial bruta: ";
    cin >> salario_bruto; //Ya tengo el salario bruto en mi cajita de memoria de tipo número real
    
    //2) Cálculo de RETENCIONES
    //2.1) Calcular el IRPF derivado del salario bruto: multiplicar el salario bruto por 0.21
    irpf_total = salario_bruto * IRPF;
    
    //2.2) Calcular la retención de SS
    ss_total = salario_bruto * SS;
    
    //3) Mostrar al usuario por pantalla el resultado de la cantidad a retener
    cout << "La cantidad a retener por el Ministro Montoro es: " << irpf_total << "€" << " ja ja ja" << endl;
    cout << "La cantidad a retener por el Ministra Ibánez es: " << ss_total << "€" << " jo jo jo" << endl;
    
    //4) Ahora voya a calcular la nómina neta, es decir el salario bruto menos la cantidad de irpf retenido
    salario_neto = salario_bruto - irpf_total - ss_total;
    
    //5) Y ahora vamos a mostrar cuanto se queda mi pobre nómina
    cout << "Tu pobre nómina asciende a: " << salario_neto << "€" << " pobrecitooooo" << endl;
    
}
