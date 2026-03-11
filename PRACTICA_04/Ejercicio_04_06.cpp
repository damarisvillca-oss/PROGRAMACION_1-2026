// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int sumaNaturales(int N) {
    int suma = 0;
    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int N;
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;
    cout << "La suma de los primeros " << N << " numeros naturales es: " << sumaNaturales(N) << endl;

    return 0;
}