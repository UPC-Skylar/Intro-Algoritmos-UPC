#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "");
    float centDiametro, cantIngredientes, precioPizza;
    const float costoCentDiametro = 1.5;
    const float costoIngExtra = 2.5;
    cout << "Ingrese los centimetros de diámetro que desea para su pizza: " << endl;
    cin >> centDiametro;
    cout << "Ingrese la cantidad de ingredientes extra que llevará su pizza: " << endl;
    cin >> cantIngredientes;
    precioPizza = (costoCentDiametro * centDiametro) + (costoIngExtra * cantIngredientes);

    cout << "El costo total de la pizza será de: S/" << precioPizza << endl;
    return 0;
}