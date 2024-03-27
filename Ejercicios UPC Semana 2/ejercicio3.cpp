#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    int numNeumaticos, pUnidad, pTotal;
    cout << "Ingrese el numero de neumaticos: " << endl;
    cin >> numNeumaticos;
    if(numNeumaticos < 3){
        pUnidad = 145;
    } else {
        if (numNeumaticos <= 5){
            pUnidad = 138;
        } else {
            pUnidad = 135;
        }
    }

    pTotal = pUnidad * numNeumaticos;
    cout << "El precio total de los neumáticos es: S/" << pTotal << endl;
    return 0;
}