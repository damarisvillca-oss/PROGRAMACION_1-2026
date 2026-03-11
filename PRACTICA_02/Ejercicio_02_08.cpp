// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761 LP
// Carrera del estudiante: Ingenieria Industrial
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int n;
    double precio, sumaTotal = 0, iva, montoFinal;

    cout << "Ingrese el numero de productos vendidos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el precio del producto " << i << ": ";
        cin >> precio;
        sumaTotal += precio; 
    }
    iva = sumaTotal * 0.13; 
    if (sumaTotal > 2500) {
        montoFinal = sumaTotal * 0.95; 
        cout << "Se aplica un descuento del 5% " << endl;
    } else {
        montoFinal = sumaTotal;
    }

    cout << "La suma total de las ventas: " << sumaTotal << " Bs" << endl;
    cout << "IVA del 13%: " << iva << " Bs" << endl;
    cout << "Monto final a pagar (con descuento si aplica las compras): " << montoFinal << " Bs" << endl;

    return 0;
}