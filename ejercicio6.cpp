#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std; 

int main(){
    setlocale(LC_ALL, "");
    float lado1, lado2, lado3;
    cout << "Ingrese el primer lado del triángulo: " << endl;
    cin >> lado1;
    cout << "Ingrese el segundo lado del triángulo: " << endl;
    cin >> lado2;
    cout << "Ingrese el tercer lado del triángulo: " << endl;
    cin >> lado3;
    if(lado1 > 0 && lado2 > 0 && lado3 > 0){
        if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
            cout << "El triángulo es escaleno." << endl;
        }       else if (lado1 == lado2 && lado2 == lado3 && lado1 == lado3) {
                cout << "El triángulo es equilátero." << endl;
                }    else {
                        cout << "El triángulo es isósceles." << endl;
                        }
    } else {
        cout << "Ingrese valores mayores que cero.";
    }

    return 0;
}