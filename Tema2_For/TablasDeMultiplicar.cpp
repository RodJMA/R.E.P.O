#include <iostream>
using namespace std;

int main()
{
    int n, stop, result;
    cout << "Tablas de Multiplicar" << endl;
    // Realizar al menos una vez
    do
    {
        // Solicitar al usuario los datos
        cout << "Digite el numero de la tabla de multiplicar que desea: " << "";
        cin >> n;
        cout << "Hasta que numero desea la tabla de multiplicar: " << "";
        cin >> stop;
        // Si ingresa 0 o un numero menor a 0 en hasta donde desea la tabla
        if (stop <= 0)
        {
            cout << "______________________________________________________________" << endl;
            cout << "Entrada de datos incorrecta" << endl;
        }

    } while (stop <= 0); // Repetir hasta que ingrese un dato valido

    cout << "______________________________________________________________" << endl;
    cout << "Tabla de multiplicar del " << n << endl;
    // Bucle
    for (int i = 1; i <= stop; i++)
    {
        // Multiplicar el numero que ingreso el usuario por el valor que lleva el bucle en ese momento
        result = n * i;
        cout << n << " x " << i << ": " << result << endl;
    }

    return 0;
}