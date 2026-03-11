// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761 LP
// Carrera del estudiante: Ingenieria Industrial
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main() {
    int numeroUsuario, numeroAleatorio = 57; 
    int intentos = 0;
    cout << "Ingrese un numero entre 1 y 100: " << endl;

    do {
        cout << "Ingrese su suposicion: ";
        cin >> numeroUsuario;
        intentos++;
        if (numeroUsuario < numeroAleatorio) {
            cout << "El numero que ingresaste es menor. Intenta de nuevo por favor" << endl;
        } else if (numeroUsuario > numeroAleatorio) {
            cout << "El número que pingresaste es mayor. Intenta de nuevo por favor" << endl;
        } else {
            cout << " Adivinaste el número en " << intentos << " intentos." << endl;
        }

    } while (numeroUsuario != numeroAleatorio); 

    return 0;
}