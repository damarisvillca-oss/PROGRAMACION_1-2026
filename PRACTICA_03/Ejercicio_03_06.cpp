// Materia: Programación I, Paralelo 4
// Autor: Damaris Danitza Villca Mamani
// Carnet: 9239761
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N;
    int n1;
    int n2;
    int n3;
    int totalPanales = 0;

    cout << "Ingrese el numero total de ninos en la guarderia: ";
    cin >> N;

    srand(time(0));
    n1 = rand() % (N + 1); 
    n2 = rand() % (N + 1 - n1); 
    n3 = N - n1 - n2; 

    totalPanales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "El numero de ninos de 1 año es: " << n1 << endl;
    cout << "El numero de ninos de 2 años es: " << n2 << endl;
    cout << "El numero de ninos de 3 años es: " << n3 << endl;
    cout << "EL total de panales consumidos por dia es: " << totalPanales << endl;

    return 0;
}