#include <iostream>
using namespace std;

int main()
{
    int n, suma = 0;
    cout << "Suma de Numeros Pares" << endl;
    cout << "Ingrese hasta que numero desea sumar: " << "";
    cin >> n;
    // Recorrer hasta el numero que ingreso el usuario
    for (int i = 1; i <= n; i++)
    {
        // Verificar si el numero por el que va el bucle es par
        if ((i % 2) == 0)
        {
            // Si el numero es par, almacenar el dato y sumarlo con el siguiente
            suma += i;
        }
    }
    cout << "La suma de los numeros pares hasta " << n << " es: " << suma << endl;

    return 0;
}