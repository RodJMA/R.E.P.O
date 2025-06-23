#include <iostream>
using namespace std;

int main()
{
    int a, i = 0;
    int bit[100]; // Array para almacenar los bits (suficiente para binario de un int)
    
    cout << "Ingrese su numero base 10: ";
    cin >> a;

    if (a == 0) {
        cout << 0 << endl;
        return 0;
    }

    // Almacenar los residuos (bits) en orden inverso
    while (a > 0)
    {
        bit[i] = a % 2; // Tomamos el residuo (bit actual)
        a = a / 2;      // Dividimos entre 2
        i++;            // Siguiente posición del array
    }

    // Imprimir los bits en orden inverso (de más significativo a menos)
    cout << "Numero en binario: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << bit[j];
    }
    cout << endl;

    return 0;
}
