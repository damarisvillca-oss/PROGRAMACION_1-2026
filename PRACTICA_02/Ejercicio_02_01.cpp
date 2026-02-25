// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761 LP
// Carrera del estudiante: Ingenieria Industrial
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entre el 1 y 10: ";
    cin >> numero;
    
    if (numero < 1 || numero > 10) {
        cout << "Error, el número debe estar entre 1 y 10." << endl;
        return 1;
    }

    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " * " << i << " = " << numero * i << endl;
    }

    return 0;
}