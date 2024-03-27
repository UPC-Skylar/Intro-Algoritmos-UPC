#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std; 

int main (){
    setlocale(LC_ALL, "");
    int x1, x2, y1, y2;
    float distancia, angulo;
    cout << "Ingrese una cantidad x1: " << endl;
    cin >> x1;
    cout << "Ingrese una cantidad x2: " << endl;
    cin >> x2;
    cout << "Ingrese una cantidad y1: " << endl;
    cin >> y1;
    cout << "Ingrese una cantidad y2: " << endl;
    cin >> y2;
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    angulo = atan((y2 - y1) / (x2 - x1));
    cout << "La distancia es: " << distancia <<endl;
    cout << "El ángulo es: " << angulo << endl;
    return 0;
}