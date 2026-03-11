// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

double calcularDistancia(double velocidad, double tiempo) {
    return velocidad * tiempo;
}

int main() {
    double velocidad, tiempo;
    
    cout << "Ingrese la velocidad (en m/s): ";
    cin >> velocidad;
    cout << "Ingrese el tiempo (en segundos): ";
    cin >> tiempo;

    cout << "La distancia recorrida es: " << calcularDistancia(velocidad, tiempo) << " metros." << endl;

    return 0;
}