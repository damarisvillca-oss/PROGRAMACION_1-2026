// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761 LP
// Carrera del estudiante: Ingenieria Industrial
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        suma += i; 
    }
    cout << "La suma de los numeros del 1 hasta " << n << " es: " << suma << endl;

    return 0;
}