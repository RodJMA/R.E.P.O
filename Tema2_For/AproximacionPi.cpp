#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int terminos;                           // Variable para almacenar cuántos términos usará el usuario en la serie
    double aprox, sumatoria = 0, resultado; // Variables para el término actual, la suma acumulada y el resultado final

    cout << "Aproximacion del numero Pi" << endl;
    cout << "Cuantos terminos de la serie deseas usar para aproximar Pi?" << endl;
    cin >> terminos; // El usuario ingresa la cantidad de términos a usar

    // Bucle que recorre desde i = 0 hasta i < terminos
    // Calcula cada término de la serie de Leibniz: (-1)^i / (2*i + 1)
    for (int i = 0; i < terminos; i++)
    {
        aprox = pow((-1), i) / ((2 * i) + 1); // Alterna el signo usando pow y calcula el valor del término
        sumatoria += aprox;                   // Suma el término al acumulador
    }

    resultado = 4.0 * sumatoria; // Multiplica la sumatoria por 4 para obtener la aproximación de π

    cout << "La aproximacion de Pi es: " << resultado << endl; // Muestra el resultado

    return 0;
}