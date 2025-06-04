#include <iostream>
using namespace std;

int main()
{
    int number, result; // 'number' almacenará hasta dónde se generará la serie, 'result' guarda el valor actual

    // Solicita al usuario ingresar hasta qué número desea la serie alternada
    cout << "Digite hasta que numero quiere la serie alternada" << endl;
    cin >> number; // Guarda el número ingresado en la variable 'number'

    // Bucle que recorre del 1 hasta el número ingresado
    for (int i = 1; i <= number; i++)
    {
        // Si el número es par (i % 2 == 0), se multiplica por -1 para hacerlo negativo
        if ((i % 2) == 0)
        {
            result = (-1) * i; // Convierte el número a negativo
        }
        else
        {
            result = i; // Si es impar, se deja positivo
        }

        // Imprime el número resultante
        cout << result << ", ";
    }

    return 0;
}
