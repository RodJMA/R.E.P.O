#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int terminos;
    double aprox, sumatoria = 0, resultado;
    cout << "Aproximacion del numero Pi" << endl;
    cout << "Cuantos terminos de la serie deseas usar para aproximar Pi?" << endl;
    cin >> terminos;
    for (int i = 0; i < terminos; i++)
    {
        aprox = pow((-1), i) / ((2 * i) + 1);
        sumatoria += aprox;
    }
    resultado = 4.0 * sumatoria;

    cout << "La aproximacion de Pi es: " << resultado << endl;

    return 0;
}