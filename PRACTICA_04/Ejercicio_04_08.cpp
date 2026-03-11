// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int contarDigitos(int numero) {
    int contador = 0;
    while (numero > 0) {
        numero /= 10; 
        contador++;    
    }
    
    return contador;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    cout << "El numero " << numero << " tiene " << contarDigitos(numero) << " digitos." << endl;

    return 0;
}