#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std; 

int main(){
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    if(numero >= 48 && numero <= 57){
        cout << "El número " << numero << " es un digito" << endl;
    } else {
        if(numero >= 65 && numero <= 90) {
        cout << "El número " << numero << " es una mayuscula" << endl;
    } else {
        if(numero >= 97 && numero <= 122){
        cout << "El número " << numero << " es una minúscula" << endl;
    } else {
        cout << "Ingrese un número entre 48-57, 65-90 o 97-122" << endl;
    }
    }
    }
    return 0;
}