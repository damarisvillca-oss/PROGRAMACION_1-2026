// Materia: Programacion I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Carrera del estudiante: Ing. Industrial
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "No se puede dividir por 0." << endl;
    }

    return 0;
}