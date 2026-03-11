// Materia: Programacion I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Carrera del estudiante: Ing. Industrial
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    double altura;
    cout << "Ingrese la edad: ";
    cin >> edad;
    cout << "Ingrese el sexo (M para masculino, F para femenino): ";
    cin >> sexo;
    cout << "Ingrese la altura en metros: ";
    cin >> altura;

    // Mostrar los datos ingresados
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;

    return 0;
}