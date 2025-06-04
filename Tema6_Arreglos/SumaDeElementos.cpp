#include <iostream>
using namespace std;

int main()
{
    int n = 0, suma = 0;
    cout << "Ingrese la cantidad de numeros que ingresara: " << "";
    cin >> n;

    int arreglo[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Digite el numero que desea sumar: " << "";
        cin >> arreglo[i];
    }

    for (int i = 0; i < n; i++)
    {
        suma += arreglo[i];
    }

    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}