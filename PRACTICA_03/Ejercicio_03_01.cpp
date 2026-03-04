// Materia: Programacion I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n, dado, conteodePares = 0;
    cout << "Ingrese el numero de lanzamientos: ";
    cin >> n;

    srand(time(0));
    for (int i = 1; i <= n; i++) {
        dado = rand() % 6 + 1; 
        if (dado % 2 == 0) {
            conteodePares++; 
        }
    }

    cout << "La cantidad de caras pares que salieron es: " << conteodePares << endl;

    return 0;
}