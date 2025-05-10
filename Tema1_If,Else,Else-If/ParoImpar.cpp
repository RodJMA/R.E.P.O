#include <iostream>
using namespace std;

int main()
{
    int number;

    // Pedir al usuario que ingrese un numero
    cout << "Porfavor ingrese un numero" << endl;

    // Guardar el numero ingresado por el usuario
    cin >> number;

    if ((number % 2) == 0)
    {
        // Si el residuo de la division es 0 el numero es par
        cout << "Tu numero es par" << endl;
    }
    else if ((number % 2) != 0)
    {
        // Si el resiudio de la division es distinto de 0, entonces el numero es impar
        cout << "Tu numero es impar" << endl;
    }
    else
    {
        // En caso que el usuario digite algo invalido
        cout << "Entrada invalida" << endl;
    }

    return 0;
}