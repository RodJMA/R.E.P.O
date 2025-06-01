#include <iostream>
using namespace std;

int main()
{
    cout << "Numeros pares del 1 al 50" << endl;

    // Empezar el ciclo en 1 y parar cuando sea igual a 50
    for (int i = 1; i <= 50; i++)
    {
        // Si el numero en el que esta el bucle es divisible entre 2 imprimir el numero
        if ((i % 2) == 0)
        {
            cout << "Tu numero par es: " << i << endl;
        }
    }

    return 0;
}