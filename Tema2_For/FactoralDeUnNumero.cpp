#include <iostream>
using namespace std;

int main()
{
    int factorial = 1, n;
    cout << "Factorial de un numero" << endl;
    cout << "Digite el numero del cual desea saber su factorial: " << "";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // Multiplicar y luego almecenar ese valor para el siguiente bucle y repetir
        factorial *= i;
    }
    cout << "El factorial de " << n << " es: " << factorial << endl;

    return 0;
}