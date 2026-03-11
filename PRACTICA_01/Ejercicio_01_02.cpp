// Materia: Programacion I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Carrera del estudiante: Ing. Industrial
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int main() {
    double precio, precio_con_iva;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    precio_con_iva = precio * 1.13;
    cout << "El precio del producto con IVA es: " << precio_con_iva << endl;

    return 0;
}