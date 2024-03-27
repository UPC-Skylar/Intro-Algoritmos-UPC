#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main(){
    int horasTrabajadas;
    float tarifaHoraria, sueldoBasico, sueldoBruto, sueldoNeto;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese la tarifa horaria: ";
    cin >> tarifaHoraria;
    sueldoBasico = horasTrabajadas * tarifaHoraria;
    sueldoBruto = 1.18 * sueldoBasico;
    sueldoNeto = 0.88 * sueldoBruto;
    cout << "El sueldo basico es: " << sueldoBasico << endl;
    cout << "El sueldo bruto es: " << sueldoBruto << endl;
    cout << "El sueldo neto es: " << sueldoNeto << endl;
    return 0;
}