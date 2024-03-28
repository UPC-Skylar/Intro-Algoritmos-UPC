#include <iostream>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

int main(){ //Gasto de agua 
    setlocale(LC_ALL, "");
    const float cuotaFija = 20;
    float costo;
    int numLitros;
    cout << "Ingrese el numero de litros consumidos: " << endl;
    cin >> numLitros;
    if(numLitros <= 50){
        costo = 0;
    } else if (numLitros > 51 && numLitros <= 200){
        costo = 2 * (numLitros - 50);
    } else if (numLitros > 200){
        costo = 300 + (numLitros - 200) * 3.5;
    }

    cout << "El pago del número de litros consumidos sería: S/" << costo + cuotaFija << endl;

    return 0;
}