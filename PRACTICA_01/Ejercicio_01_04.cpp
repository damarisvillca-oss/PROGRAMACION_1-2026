// Materia: Programacion I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Carrera del estudiante: Ing. Industrial
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

int main() {
    double nota_practicas, nota_teorica, nota_participacion;
    double nota_final;
    cout << "Ingrese la nota de practicas (30%): ";
    cin >> nota_practicas;
    cout << "Ingrese la nota teorica (60%): ";
    cin >> nota_teorica;
    cout << "Ingrese la nota de participacin (10%): ";
    cin >> nota_participacion;

    nota_final = (nota_practicas * 0.30) + (nota_teorica * 0.60) + (nota_participacion * 0.10);
    cout << "La nota final del estudiante es: " << nota_final << endl;

    return 0;
}