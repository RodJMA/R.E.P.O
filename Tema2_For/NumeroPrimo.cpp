#include <iostream>  // Incluye la biblioteca para entrada/salida estándar (cout, cin)
#include <cmath>     // Incluye la biblioteca para funciones matemáticas, como sqrt()
using namespace std; // Permite usar los objetos de la biblioteca estándar sin el prefijo std::

int main()
{
    int primo;          // Variable para guardar el número ingresado
    bool boole = false; // Variable booleana que indica si el número NO es primo (inicialmente falsa)

    cout << "Digite un numero" << endl; // Solicita al usuario que ingrese un número
    cin >> primo;                       // Almacena el número ingresado en la variable "primo"

    // Bucle que recorre desde 2 hasta la raíz cuadrada del número ingresado
    for (int i = 2; i <= sqrt(primo); i++)
    {
        // Si el número es divisible por i, entonces no es primo
        if ((primo % i) == 0)
        {
            boole = true; // Marca que el número tiene un divisor y por lo tanto no es primo
        }
    }

    // Si se encontró algún divisor (boole == true), entonces no es primo
    if (boole)
    {
        cout << "El numero " << primo << " no es primo" << endl;
    }
    else
    {
        cout << "El numero " << primo << " es primo" << endl;
    }

    return 0; // Fin del programa
}
