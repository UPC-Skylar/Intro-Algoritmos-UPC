//salario semanal
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std; 

int main(){
    setlocale(LC_ALL, "");
    int numHoras, tarifaHoraria, salarioSemanal;
    cout << "Ingrese el número de horas trabajadas: " << endl;
    cin >> numHoras;
    if(numHoras > 0 && numHoras <= 40){
        tarifaHoraria = 16;
        salarioSemanal = tarifaHoraria * numHoras;
    } else if (numHoras > 40){
        tarifaHoraria = 20 * (numHoras - 40);
        salarioSemanal = 640 + tarifaHoraria;
    } else {
        cout << "Ingrese un número de horas mayor a cero." << endl;
    }
    cout << "El sueldo semanal del trabajador es de: S/" << salarioSemanal << endl;
    return 0;
}