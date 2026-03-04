// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    int numero;
    int contadorPrimos = 0;

    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> N;

    srand(time(0));

    for (int i = 1; i <= N; i++) {
        numero = rand() % 10000 + 1;
        cout << numero << " "; 

        if (esPrimo(numero)) {
            contadorPrimos++; 
        }
    }

    cout << "\nLa cantidad de numeros primos generados es: " << contadorPrimos << endl;

    return 0;
}