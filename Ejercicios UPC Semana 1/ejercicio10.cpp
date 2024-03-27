#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    int horaEntrada, horaSalida, costoTotal;
    cout << "Ingresa una hora de entrada: (entera)" << endl;
    cin >> horaEntrada;
    cout << "Ingresa una hora de salida: (entera)" << endl;
    cin >> horaSalida;
    if(horaSalida - horaEntrada == 1) {
        costoTotal = 10;
    } else {
        costoTotal = 10 + 6 * (horaSalida - horaEntrada - 1);
    }

    cout << "El costo total para pagar el servicio de estacionamiento es de: S/" << costoTotal;
    return 0;
}