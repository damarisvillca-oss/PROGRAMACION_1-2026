// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

double calcularArea(double base, double altura) {
    return (base * altura) / 2;
}

int main() {
    double base, altura;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    cout << "El area del triangulo es: " << calcularArea(base, altura) << endl;

    return 0;
}