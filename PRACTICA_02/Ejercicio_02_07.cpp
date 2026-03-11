// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761 LP
// Carrera del estudiante: Ingenieria Industrial
// Fecha creacion: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int num, sumaDivisores = 0;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) { 
            sumaDivisores += i;
        }
    }

    if (sumaDivisores == num) {
        cout << num << " es un numero perfecto." << endl;
    } else {
        cout << num << " no es un numero perfecto." << endl;
    }

    return 0;
}