// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

double calcularPromedio(double nota1, double nota2) {
    return (nota1 + nota2) / 2;
}

int main() {
    double nota1, nota2;
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "El promedio de las dos notas es: " << calcularPromedio(nota1, nota2) << endl;

    return 0;
}