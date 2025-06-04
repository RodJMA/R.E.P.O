#include <iostream> // Librería para entrada/salida estándar
using namespace std;

int main()
{
    // Declaramos las variables de tipo double para permitir números decimales
    double base = 1.0, exponente = 1.0, resultado = 1.0;

    // Mensaje de bienvenida
    cout << "Calculadora de exponentes" << endl;
    cout << "Digite la base y el exponente" << endl;

    // Entrada del usuario
    cin >> base >> exponente;

    // Validación especial: 0^0 es una indeterminación matemática
    if (base == 0 && exponente == 0)
    {
        cout << "Resultado indefinido" << endl;
    }
    else
    {
        // Si el exponente es positivo o cero
        if (exponente >= 0)
        {
            // Usamos un bucle for para multiplicar la base 'exponente' veces
            for (int i = 1; i <= exponente; i++)
            {
                resultado *= base; // resultado = resultado * base ( 1 * base ), segunda vuelta se almacena y es base * base ...
            }
        }
        else
        {
            // Si el exponente es negativo, multiplicamos la base tantas veces como el valor absoluto del exponente
            for (int i = 1; i <= (-1) * exponente; i++)
            {
                resultado *= base;
            }
            // Invertimos el resultado para representar la potencia negativa (ej: 2^-3 = 1 / 8 \ 2^-3 = 1/ (2)^3)
            resultado = 1.0 / resultado;
        }

        // Mostramos el resultado final
        cout << "Tu numero: " << base << "^" << exponente << " = " << resultado;
    }

    return 0;
}
