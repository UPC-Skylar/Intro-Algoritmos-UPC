#include <iostream>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

int main (){
    setlocale(LC_ALL, "");
    int tipoPizza;
    float descuento, precioUnt, precioTotal;
    cout << "Ingrese el número según el tipo de pizza: (1: Grande; 2: Familiar; 3: Fiesta)" << endl;
    cin >> tipoPizza;
    if (tipoPizza < 1 || tipoPizza > 3) {
        cout << "Debe ingresar un número entre 1 y 3. " << endl;
        return 1;
    }
    descuento = (tipoPizza == 1) * 0.1 + (tipoPizza == 2) * 0.15 + (tipoPizza == 3) * 0.2;
    cout << "Ingrese el precio unitario de la pizza: " << endl;
    cin >> precioUnt;
    precioTotal = precioUnt - (precioUnt * descuento);
    cout << "El precio total es: S/" << precioTotal << endl;
    return 0;
}