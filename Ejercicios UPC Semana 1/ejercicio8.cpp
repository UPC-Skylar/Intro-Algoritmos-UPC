#include <iostream>
#include <math.h>
#include <string>
#include <cmath>

using namespace std;
int main(){
    int h,m,s;
    cout << "Ingrese una cantidad de horas: " << endl;
    cin >> h;

    if(h > 0 && h < 13){
            cout << "Ingrese una cantidad de minutos: " <<endl;
            cin >> m;
        if(m > 0 && m < 60) {
                cout << "Ingrese una cantidad de segundos: " <<endl;
                cin >> s;
            if(s > 0 && s < 60){

                s = s + 1;
                if(s > 59){
                    m = m + 1;
                    s = 0;
                }

                if(m > 59){
                    h = h + 1;
                    m = 0;
                }

            cout << "La nueva hora es: " << h << ":" << m << ":" << s;
            } else {
                cout << "Ingrese una cantidad de segundos válida." << endl;
            }
        } else {
            cout << "Ingrese una cantidad de minutos válida." << endl;
        }
    } else {
        cout << "Ingrese una hora correcta. " << endl;
    }

    return 0;
}