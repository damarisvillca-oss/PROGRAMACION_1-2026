// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

bool esPar(int numero) {
    return (numero % 2 == 0);
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    if (esPar(numero)) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }

    return 0;
}