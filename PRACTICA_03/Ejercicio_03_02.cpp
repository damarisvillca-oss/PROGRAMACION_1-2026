// Materia: Programacion I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    int cara = 0;
    int cruz = 0;
    float porcentajedeCara, porcentajedeCruz;

    cout << "Ingrese el numero de lanzamientos de la moneda: ";
    cin >> n;

    srand(time(0));
    for (int i = 1; i <= n; i++) {
        int resultado = rand() % 2; 

        if (resultado == 0) {
            cruz++;
        } else {
            cara++;
        }
    }

    porcentajedeCara = (float)cara / n * 100;
    porcentajedeCruz = (float)cruz / n * 100;

    cout << "El porcentaje de caras es: " << porcentajedeCara << "%" << endl;
    cout << "El porcentaje de cruces es: " << porcentajedeCruz << "%" << endl;

    return 0;
}