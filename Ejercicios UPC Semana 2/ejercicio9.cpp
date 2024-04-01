#include <iostream>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    //Tiene 12 digitos
    long long codigoBarras;
    int diaVen, mesVen, anioVen, numPerecible;
    char identificador;
    cout << "Ingrese un código de barras de 12 dígitos del producto: " <<endl;
    cin >> codigoBarras;
    
    diaVen = codigoBarras / 10000000000; //agarro los 2 primeros
    codigoBarras = codigoBarras % 10000000000;

    mesVen = codigoBarras / 100000000;
    codigoBarras = codigoBarras % 100000000;

    anioVen = codigoBarras / 10000;
    codigoBarras = codigoBarras % 10000;

    identificador = codigoBarras / 100;
    codigoBarras = codigoBarras % 100;

    numPerecible = codigoBarras;

    int perecible = (numPerecible == 0);

    cout << "Dia de vencimiento: " << diaVen << endl;
    cout << "Mes de vencimineto: " << mesVen << endl;
    cout << "Año de vencimiento: " << anioVen << endl;
    cout << "El tipo de producto es: " << identificador << endl;
    cout << "Producto perecible (0: No, 1: Si): " << perecible << endl;

    return 0;
}

//PENDIENTE