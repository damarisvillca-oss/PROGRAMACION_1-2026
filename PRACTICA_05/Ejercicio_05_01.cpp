// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

void calcularVentas(int n) {
    double precio, totalVentas = 0, ivaTotal = 0;
    double descuento = 0.05; 

    for (int i = 0; i < n; i++) {
        precio = 20 + rand() % 31; 
        double iva = precio * 0.13;
        ivaTotal += iva;
        totalVentas += precio + iva; 
    }
    if (totalVentas > 2500) {
        totalVentas -= totalVentas * descuento; 
    }
    cout << "Total de ventas realizadas: " << totalVentas << " Bs" << endl;
    cout << "IVA total a pagar: " << ivaTotal << " Bs" << endl;
}

int main() {
    srand(time(0)); 
    int n;
    cout << "Ingrese el numero de productos vendidos: ";
    cin >> n;
    calcularVentas(n);

    return 0;
}