// Materia: Programacion I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Carrera del estudiante: Ing. Industrial
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad >= 18 && edad <= 25) {
        cout << "La edad " << edad << " esta en el rango [18-25]." << endl;
    } else {
        cout << "La edad " << edad << " NO esta en el rango [18-25]." << endl;
    }

    return 0;
}