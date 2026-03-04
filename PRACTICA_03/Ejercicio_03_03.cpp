// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numero = 1;
    int factorial = 1;
    srand(time(0));
    numero = rand() % 10 + 1;


    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    cout << "El numero generado es: " << numero << endl;
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}