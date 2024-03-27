//MSIR
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    float H, volumen;
    const float PI = 3.1415;
    const int radio = 5; //constante por dato (en km)
    cout << "Ingrese la altura de la nube entre 2 y 8: " << endl;
    cin >> H;
    if(H >= 2 && H <= 8){
        volumen = PI * pow(radio, 2) * H;
    } else {
        cout << "Ingrese un valor entre 2 y 8." << endl;
    }

    cout << "El volumen aproximado de la nube es: " << volumen << "m3.";
    return 0;
}