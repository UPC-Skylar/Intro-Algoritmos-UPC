#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main(){
    float r, h, cateto, areaT,areaC, aTotal;
    const double PI = 3.1415926535;
    cout << "Ingrese el radio: ";
    cin >> r;
    cout << "Ingrese la hipotenusa: ";
    cin >> h;
    cateto = sqrt(pow(h,2) - pow(r,2));
    areaT = (r * cateto) / 2;
    areaC = (PI * pow(r, 2));
    aTotal = areaT * 2 + areaC * 0.5;
    cout << "El area total de la figura es: " << aTotal;
    return 0;
}