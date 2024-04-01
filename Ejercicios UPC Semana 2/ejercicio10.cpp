//Calificacion de personal
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    int añosLaburo, puntos;
    char tipoEstudios;
    cout << "Ingrese los años que está trabajando en la entidad: " << endl;
    cin >> añosLaburo;
    cout << "Ingrese una letra según su máximo nivel de estudios: " << endl;
    cout << "P: Primarios" << endl;
    cout << "S: Secundarios" << endl;
    cout << "U: Universitarios" << endl;
    cout << "G: Posgrado" << endl;
    cin >> tipoEstudios;
    puntos = 0; //Puntos iniciales
    if(añosLaburo > 0 && añosLaburo < 5){
        puntos += 5;
    } else {
        puntos += 10;
    }

    switch (tipoEstudios)
    {
    case 'P':
        puntos += 5;
        break;
    
    case 'S':
        puntos += 10;
        break;

    case 'U':
        puntos += 20;
        break;

    case 'G':
        puntos += 30;
        break; 
        
    default:
        cout << "Ingrese una letra válida" << endl;
        return 1; // Para detener el programa
        break;
    }

    cout << "El puntaje obtenido es: " << puntos << endl;
    return 0;
}