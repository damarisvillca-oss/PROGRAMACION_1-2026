// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

void calcularSueldo(double totalVendido, int antiguedad) {
    double sueldoBase = 1000; 
    double comision = totalVendido * 0.10; 
    double sueldoTotal = sueldoBase + comision;

    cout << "Sueldo Base: " << sueldoBase << " Bs" << endl;
    cout << "Comision por ventas: " << comision << " Bs" << endl;
    cout << "Sueldo total: " << sueldoTotal << " Bs" << endl;
}

int main() {
    double totalVendido;
    int antiguedad;
    
    cout << "Ingrese el total vendido por la vendedora en el mes (en Bs): ";
    cin >> totalVendido;
    cout << "Ingrese la antiguedad de la vendedora en anos: ";
    cin >> antiguedad;
    
    calcularSueldo(totalVendido, antiguedad);

    return 0;
}