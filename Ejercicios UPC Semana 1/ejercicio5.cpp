#include <iostream>
#include <math.h>
#include <string>
#include <cmath>

using namespace std; 

int main(){
    //numero capicua
    int numero;
    cout << "Ingrese un numero: " <<endl;
    cin >> numero;

     if(numero > 99 && numero < 1000){ //569
        //Debe mostrar el numero al reves
        int centenas, decenas, unidades;
        centenas = trunc(numero / 100);
        unidades = trunc((numero % 100) % 10);
        if (centenas == unidades)
        {
            cout << "El número es capicúa" << endl;
        } else {
            cout << "El número no es capicúa" << endl;
        }

    } else {
        cout << "Número incorrecto.";
    }
    
    return 0;
}