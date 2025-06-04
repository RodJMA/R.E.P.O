#include <iostream>
using namespace std;

int main()
{
    int n = 0, suma = 0; // n almacena la cantidad de números, suma acumula la suma total

    // Solicita al usuario cuántos números va a ingresar
    cout << "Ingrese la cantidad de numeros que ingresara: ";
    cin >> n; // Lee el valor ingresado por el usuario y lo guarda en n

    int arreglo[n]; // Se declara un arreglo de tamaño n

    // Ciclo para llenar el arreglo con los números que el usuario desea sumar
    for (int i = 0; i < n; i++)
    {
        cout << "Digite el numero que desea sumar: ";
        cin >> arreglo[i]; // Guarda el número ingresado en la posición i del arreglo
    }

    // Ciclo para sumar todos los elementos del arreglo
    for (int i = 0; i < n; i++)
    {
        suma += arreglo[i]; // Se acumula la suma total de los elementos
    }

    // Muestra el resultado final de la suma
    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}