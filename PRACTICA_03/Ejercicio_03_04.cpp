// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N;
    int numero;
    int suma = 0;
    int mayor = 0;
    int menor = 1001;

    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> N;

    srand(time(0));

    for (int i = 1; i <= N; i++) {
        numero = rand() % 1000 + 1; 
        suma += numero; 

        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    float promedio = (float)suma / N;

    cout << "La sumatoria de los numeros es: " << suma << endl;
    cout << "El promedio de los numeros es: " << promedio << endl;
    cout << "El mayor valor generado es: " << mayor << endl;
    cout << "El menor valor generado es: " << menor << endl;

    return 0;
}