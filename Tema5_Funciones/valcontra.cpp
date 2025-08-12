/* Validación de Contraseña
Escribe una función que reciba una contraseña y verifique si cumple con ciertos criterios
(mínimo 8 caracteres, al menos una mayúscula y un número).*/
#include <iostream>
using namespace std;

bool validarContrasena(char contra);

int main()
{
    char contrasena[100];
    cout << "Contrasena: " << endl;
    cin >> contrasena[100];
    if (validarContrasena(contrasena[100]))
    {
        cout << "Acceso permitido " << endl;
    }
    else
    {
        cout << "Acceso denegado " << endl;
    }

    return 0;
}

bool validarContrasena(char contra[100])
{
    int longitud = 0;
    bool numeros = false, mayuscula = false, longi = false;
    for (int i = 0; contra[i] != '\n0'; i++)
    {
        longitud++;

        if (contra[i] >= '0' && contra[i] <= '9')
        {
            numeros = true;
        }
        if (contra[i] >= 'A' && contra[i] <= 'Z')
        {
            mayuscula = true;
        }
    }

    if (longitud >= 8)
    {
        longi = true;
    }

    if (longi && mayuscula && numeros)
    {
        return true;
    }
    else
    {
        return false;
    }
}
