#include <iostream>
using namespace std;

int main()
{
    int secreto = 50, numero;
    cout << "Adivina el numero secreto" << endl;
    cout << "Ingrese un numero entre 1 y 100: " << "";
    cin >> numero;

    if (1 <= numero && numero <= 100)
    {

        while (numero != secreto)
        {
            if (numero > secreto)
            {
                cout << "El numero es menor" << endl;
                cout << "Ingrese un numero entre 1 y 100: " << "";
                cin >> numero;
            }
            else
            {
                cout << "El numero es mayor" << endl;
                cout << "Ingrese un numero entre 1 y 100: " << "";
                cin >> numero;
            }
        }

        cout << "Has adivinado el numero" << endl;
    }
    else
    {
        cout << "Entrada de datos invalida" << endl;
    }

    return 0;
}