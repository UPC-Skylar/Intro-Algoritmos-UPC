#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    int numero, numReves;
    cout << "Ingrese un numero de 3 cifras: "<<endl;
    cin >> numero;
    if(numero > 99 && numero < 1000){ //569
        //Debe mostrar el numero al reves
        int centenas, decenas, unidades;
        centenas = trunc(numero / 100);
        decenas = trunc((numero % 100) / 10);
        unidades = trunc((numero % 100) % 10);
        numReves = unidades * 100 + decenas * 10 + centenas;
        cout << "El número al revés es: " << numReves;

    } else {
        cout << "Número incorrecto, ingrese un numero de tres cifras: ";
    }
    return 0;
}