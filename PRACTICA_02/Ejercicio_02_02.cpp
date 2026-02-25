// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761 LP
// Carrera del estudiante: Ingenieria Industrial
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int numero;
    int sumaTotal = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaPrimos = 0;

    cout << "Ingrese un numero entre 0 y 100: " << endl;
    
    while (true) {
        cin >> numero;
        if (numero == 0) {
            break;
        }
        sumaTotal += numero;
        if (numero % 2 == 0) {
            sumaPares += numero;
        } else {
            sumaImpares += numero;
        }

        bool esPrimo = true;
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) { 
                esPrimo = false;
                break;
            }
        }
        if (esPrimo && numero > 1) {
            sumaPrimos += numero;
        }
    }
    cout << "La suma total de los números es: " << sumaTotal << endl;
    cout << "La suma de los numeros pares es: " << sumaPares << endl;
    cout << "La suma de los numeros impares es: " << sumaImpares << endl;
    cout << "La suma de los numeros primos es: " << sumaPrimos << endl;

    return 0;
}