/* Máximo Común Divisor (MCD)
Pide dos números y calcula su MCD usando el algoritmo de Euclides.*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, r, mcd;
    cout << "Ingrese dos numeros donde el primero sea mayor que el segundo " << endl;
    cin >> a >> b;
    // Validar que el primer numero ingresado sea el mayor
    if (a >= b)
    {
        // Realizar una vez y luego repetir bucle mientras el residuo sea distinto de 0
        do
        {
            // Operacion para calcular el residuo
            r = (a % b);

            // Si el residuo es 0 entonces ya tenemos el mcd
            if (r == 0)
            {
                // El mcd es igual al numero b en ese momento
                mcd = b;
            }

            // Si el residuo es distinto de 0
            else
            {
                // Sustituir a por b
                a = b;

                // b se convierte en el residuo
                b = r;
            }

        } while (r != 0); // Realizar el bucle mientras el residuo sea distinto de 0

        // Cuando el resiudo sea 0 mostrar el mensaje
        cout << "El MCD es: " << mcd << endl;
    }
    // Si ingresa primero el numero menor y luego el mayor
    else
    {
        cout << "Entrada de datos invalida" << endl;
    }

    return 0;
}