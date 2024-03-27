// #include "pch.h" -> Para trabajar en IDE con Consola .NET
#include <iostream>
#include <string>
#include <cmath>
// #include <conio.h>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	// N es el "numero de tubos"
	int N;
	float volumen, volumenN;
	const double PI = 3.141592;
	const float r = 6.5;
	const float h = 60;

	volumen = PI * pow(r, 2) * h;
	cout << "Ingrese la cantidad de tubos entre 10 y 38: " << endl;
	cin >> N;
	if (N >= 10 && N <= 38) {
		cout << "El volumen de la roca en el tubo de muestra es: " << volumen << endl;
		volumenN = volumen * N;
		cout << "el volumen total que el rover almacena en los " << N << " tubos es: " << volumenN << endl;
	}
	else {
		cout << "Ingrese un valor entre 10 y 38.";
	}
	return 0;
}