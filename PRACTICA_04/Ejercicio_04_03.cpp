// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

const double PI = 3.1416;
double calcularVolumen(double radio, double altura) {
    return PI * radio * radio * altura;
}

int main() {
    double radio, altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    cout << "El volumen del cilindro es: " << calcularVolumen(radio, altura) << endl;

    return 0;
}