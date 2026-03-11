// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

double convertirADolares(double monto, double tipoCambio) {
    return monto / tipoCambio;
}

int main() {
    double monto, tipoCambioOficial, tipoCambioParalelo;
    cout << "Ingrese el monto en bolivianos: ";
    cin >> monto;
    cout << "Ingrese el tipo de cambio oficial: ";
    cin >> tipoCambioOficial;
    cout << "Ingrese el tipo de cambio paralelo: ";
    cin >> tipoCambioParalelo;
    
    cout << "El monto en dólares (oficial) es: " << convertirADolares(monto, tipoCambioOficial) << endl;
    cout << "El monto en dólares (paralelo) es: " << convertirADolares(monto, tipoCambioParalelo) << endl;

    return 0;
}