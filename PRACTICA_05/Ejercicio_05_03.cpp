// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 11/03/2026

#include <iostream>
using namespace std;

void calcularSalario(double horasTrabajadas, double tarifaPorHora) {
    double salarioBase = horasTrabajadas * tarifaPorHora;
    double bonificacion = 0;

    if (horasTrabajadas > 8) {
        bonificacion = (horasTrabajadas - 8) * tarifaPorHora * 0.5; 
    }

    double salarioTotal = salarioBase + bonificacion;
    cout << "Salario base: " << salarioBase << " Bs" << endl;
    cout << "Bonificacion por horas extra: " << bonificacion << " Bs" << endl;
    cout << "Salario total: " << salarioTotal << " Bs" << endl;
}

int main() {
    double horasTrabajadas, tarifaPorHora;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese la tarifa por hora (en Bs): ";
    cin >> tarifaPorHora;
    
    calcularSalario(horasTrabajadas, tarifaPorHora);

    return 0;
}