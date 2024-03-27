#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    //menor numero de monedas de 5, 2 y 1 sol
    int cantidadSoles, cant5Soles, cant2Soles, cant1Sol; 
    cout << "Ingrese una cantidad entera de soles: " << endl;
    cin >> cantidadSoles; //37
    cant5Soles = trunc(cantidadSoles / 5);
    cant2Soles = trunc((cantidadSoles % 5) / 2);
    cant1Sol = trunc((cantidadSoles % 5) % 2);
    cout << "La cantidad de monedas de 5 soles son: " << cant5Soles <<endl;
    cout << "La cantidad de monedas de 2 soles son: " << cant2Soles << endl;
    cout << "La cantidad de monedas de 1 sol son: " << cant1Sol << endl;
    return 0;
}