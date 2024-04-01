#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main () {
    setlocale(LC_ALL, "");
    int edad, bonoEx, bonoEdad, sueldo;
    string nacionalidad;
    const int sueldoFijo = 2500;
    cout << "Ingrese la edad del jugador: " << endl;
    cin >> edad;
    cout << "Indique la siguiente letra según nacionalidad del jugador (E: Extranjero; N: Nacional): ";
    cin >> nacionalidad;
    bonoEx = (nacionalidad == "E") * 500;
    bonoEdad = (edad >= 15 && edad <= 20) * 1400 + (edad >= 21 && edad <= 25) * 1500 +
                (edad >= 26 && edad <= 30) * 1200 + (edad > 30) * 800;
    sueldo = bonoEx + bonoEdad + sueldoFijo;
    cout << "El sueldo del jugador es de S/" << sueldo << endl;
    return 0;
}