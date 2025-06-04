#include <iostream>
using namespace std;

int main()
{
    int n, mayor, menor; // Declaración de variables: n para cantidad de números, mayor y menor para resultados

    // Solicita al usuario cuántos números va a ingresar
    cout << "Digite la cantidad de numeros que ingresara: ";
    cin >> n;

    int array[n]; // Declaración del arreglo con tamaño definido por el usuario

    // Ciclo para llenar el arreglo con los números ingresados por el usuario
    for (int i = 0; i < n; i++)
    {
        cout << "Digite un numero: ";
        cin >> array[i]; // Guarda el número en la posición i del arreglo
    }

    // Inicializamos las variables mayor y menor con el primer elemento del arreglo
    mayor = array[0];
    menor = array[0];

    // Recorremos el arreglo desde el segundo elemento (índice 1) hasta el último
    for (int i = 1; i < n; i++)
    {
        if (array[i] > mayor) // Si el elemento actual es mayor que el actual mayor
        {
            mayor = array[i]; // Actualiza el mayor
        }
        else if (array[i] < menor) // Si el elemento actual es menor que el actual menor
        {
            menor = array[i]; // Actualiza el menor
        }
    }

    // Muestra el número mayor y menor encontrados en el arreglo
    cout << "Numero mayor: " << mayor << endl;
    cout << "Numero menor: " << menor << endl;

    return 0;
}