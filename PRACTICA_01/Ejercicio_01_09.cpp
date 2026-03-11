// Materia: Programacion I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Carrera del estudiante: Ing. Industrial
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero entre 1 y 10: ";
    cin >> numero;
    switch (numero) {
        case 1: cout << "El numero " << numero << " en romano es: I" << endl; 
        break;
        case 2: cout << "El numero " << numero << " en romano es: II" << endl; 
        break;
        case 3: cout << "El numero " << numero << " en romano es: III" << endl; 
        break;
        case 4: cout << "El numero " << numero << " en romano es: IV" << endl; 
        break;
        case 5: cout << "El numero " << numero << " en romano es: V" << endl; 
        break;
        case 6: cout << "El numero " << numero << " en romano es: VI" << endl; 
        break;
        case 7: cout << "El numero " << numero << " en romano es: VII" << endl; 
        break;
        case 8: cout << "El numero " << numero << " en romano es: VIII" << endl; 
        break;
        case 9: cout << "El numero " << numero << " en romano es: IX" << endl; 
        break;
        case 10: cout << "El numero " << numero << " en romano es: X" << endl; 
        break;
        default: cout << "Numero fuera del rango (1-10)." << endl; 
        break;
    }

    return 0;
}