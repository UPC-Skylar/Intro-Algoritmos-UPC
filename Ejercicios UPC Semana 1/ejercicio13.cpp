#include <iostream>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;

int main (){
    setlocale(LC_ALL, "");
    float cantN;
    int cantNEntera, Bill100Sol, Bill10Sol, m1Sol, m50cent, m20cent, m10cent;
    cout << "Ingrese una cantidad N de soles" << endl;
    cin >> cantN;
    cantNEntera = trunc(cantN); //375.5 -> 375

    Bill100Sol = cantNEntera / 100; //3 (resto: 75)
    Bill10Sol = (cantNEntera % 100) / 10; //7 (resto: 5)
    m1Sol = (cantNEntera % 100) % 10;
    
    int parteDecimalN = round((cantN - cantNEntera) * 100);
    m50cent = parteDecimalN / 50;
    m20cent = (parteDecimalN % 50) / 20;
    m10cent = ((parteDecimalN % 50) % 20) / 10;

    cout << "Las denominaciones serían: " << endl;
    cout << "* Billetes de 100 soles: " << Bill100Sol <<endl;
    cout << "* Billetes de 10 soles: " << Bill10Sol << endl;
    cout << "* Monedas de 1 sol: " << m1Sol << endl;
    cout << "* Monedas de 0.5 cent: " << m50cent << endl;
    cout << "* Monedas de 0.2 cent: " << m20cent << endl;
    cout << "* Monedas de 0.1 cent: " << m10cent << endl;

    return 0;
}