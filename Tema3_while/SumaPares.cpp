#include <iostream>
using namespace std;

int main()
{
    // Declarar el iterador y la varaiable suma igual a 0 para evitar datos basura
    int n, i = 1, suma = 0;
    // Mostrar mensaje al usuario
    cout << "Suma de numeros Pares" << endl;
    cout << "Digite hasta que numero quiere sumar: " << "";
    cin >> n; // Almacenar hasta donde sumar

    // Si i es menor que el numero ingresado entrar al bucle
    while (i <= n)
    {
        // Verificar que el valor de i sea par
        if ((i % 2) == 0)
        {
            // Si es par almacenar para el siguiente ciclo y sumarlo
            suma += i;
            // Avanzar en el ciclo
            i++;
        }
        else
        {
            // Avanzar en el ciclo
            i++;
        }
    }
    // Mostrar el resultado
    cout << "La suma de numeros pares hasta " << n << " es: " << suma << endl;

    return 0;
}