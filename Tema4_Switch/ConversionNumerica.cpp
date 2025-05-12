#include <iostream>
using namespace std;

int main()
{
    int option;
    float number, result;

    cout << "Conversor de unidades " << endl;
    cout << "Menu" << endl;
    cout << "1. cm a inch" << endl;
    cout << "2. m a ft" << endl;
    cout << "3. km a mi" << endl;
    cin >> option;

    switch (option)
    {
    case 1: // cm a inch
        cout << "Cantidad a convertir" << endl;
        cin >> number;
        // Validar que la distancia exista
        if (number > 0)
        {
            result = 0.39370079 * number;
            cout << "La conversion de " << number << " cm a inch es: " << result << " pulgadas" << endl;
        }
        else
        {
            cout << "No ingresas numeros negativos o cero " << endl;
            return 1;// Salida temprana
        }
        break;
    case 2: // m a ft
        cout << "Cantidad a convertir" << endl;
        cin >> number;
        // Validar que la distancia exista
        if (number > 0)
        {
            result = 3.2808399 * number;
            cout << "La conversion de " << number << " m a ft es: " << result << " pies" << endl;
        }
        else
        {
            cout << "No ingresas numeros negativos o cero " << endl;
            return 1;// Salida temprana
        }
        break;
    case 3: // km a mi
        cout << "Cantidad a convertir" << endl;
        cin >> number;
        // Validar que la distancia exista
        if (number > 0)
        {
            result = 0.62137119 * number;
            cout << "La conversion de " << number << " km a mi es: " << result << " millas " << endl;
        }
        else
        {
            cout << "No ingresas numeros negativos o cero " << endl;
            return 1;// Salida temprana
        }
        break;

    default:
        cout << "Entrada de datos invalida, ingrese un numero del menu" << endl;
        break;
    }

    return 0;
}