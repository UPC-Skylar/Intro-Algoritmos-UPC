#include <iostream>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    int numCuadrante;
    float coordX, coordY;
    cout << "Ingrese la coordenada X: " << endl;
    cin >> coordX;
    cout << "Ingrese la coordenada Y: " << endl;
    cin >> coordY;
    if(coordX > 0 && coordY > 0) {
        numCuadrante = 1;
    } else if (coordX < 0 && coordY > 0){
        numCuadrante = 2;
    } else if (coordX < 0 && coordY < 0 ){
        numCuadrante = 3;
    } else if (coordX > 0 && coordY < 0){
        numCuadrante = 4;
    } else {
        cout << "Ingrese un valor de coordenada diferente de 0 para X e Y" << endl;
    }

    cout << "El punto se encuentra en el cuadrante " << numCuadrante << endl;
    return 0;
}