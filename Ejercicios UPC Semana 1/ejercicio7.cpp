#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main (){
    int horaEnSegundos, horas, minutos, segundos;
    cout << "Ingrese una hora expresada en segundos: " <<endl;
    cin >> horaEnSegundos;
    horas = trunc(horaEnSegundos / 3600);
    minutos = trunc((horaEnSegundos % 3600) / 60);
    segundos = trunc((horaEnSegundos % 3600) % 60);
    cout << "El número de horas son: " << horas << ", el número de minutos es: " << minutos << ", el número de segundos es: " << segundos;
    return 0;
}