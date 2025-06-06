/* 11. Validación de Entrada
Pide un número entre 1 y 10. Si el usuario ingresa un valor fuera de ese rango, debe volver a intentarlo hasta que lo haga correctamente.*/

#include <iostream>
using namespace std;

int main()
{
    int numero;
    do
    {
        cout << "Ingrese un numero entre 1 y 10 " << endl;
        cin >> numero;

    } while (numero <= 0 || numero >= 11);
    cout << "Has ingresado correctamente" << endl;

    return 0;
}