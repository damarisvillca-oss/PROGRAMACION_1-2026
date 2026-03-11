// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761 LP
// Carrera del estudiante: Ingenieria Industrial
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "La serie es descendente: ";
        for (int i = num1; i >= num2; i--) {
            cout << i << " ";
        }
    }
    else {
        cout << "La serie es ascendente: ";
        for (int i = num1; i <= num2; i++) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}