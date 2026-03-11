// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761 LP
// Carrera del estudiante: Ingenieria Industrial
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int calcularFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n, sumaFactoriales = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sumaFactoriales += calcularFactorial(i); 
    }

    cout << "La suma de los numeros factoriales del 1 hasta " << n << " es: " << sumaFactoriales << endl;

    return 0;
}