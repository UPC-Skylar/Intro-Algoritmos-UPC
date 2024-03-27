#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    float velocidad, distancia, tiempo;
    cout << "Ingrese la distancia entre las 2 ciudades en metros: " << endl;
    cin >> distancia;
    cout << "Ingrese la velocidad de la bicicleta (cte) en m/s: " << endl;
    cin >> velocidad;
    tiempo = distancia / velocidad;
    cout << "El tiempo que tarda en llegar de ciudad a ciudad es de: " << tiempo << " segundos";
    return 0;
}