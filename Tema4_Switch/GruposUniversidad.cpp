#include <iostream>
using namespace std;

int main()
{
    char surname, group;

    cout << "Asignacion de Grupos de la Universidad " << endl;
    cout << "Escribe la inicial de tu primer apellido en mayusculas para poder asignarte a un grupo " << endl;
    cin >> surname;

    if ('A' <= surname && surname <= 'M')
    {
        group = 1;
    }
    else if ('N' <= surname && surname <= 'Z')
    {
        group = 2;
    }
    else
    {
        cout << "Escribir la inicial en mayuscula" << endl;
        return 1;
    }

    switch (group)
    {
    case 1:
        cout << "Has sido asignado al grupo 1 " << endl;
        break;
    case 2:
        cout << "Has sido asignado al grupo 2" << endl;
        break;
    default:
        cout << "Entrada de datos invalida" << endl;
        break;
    }
    return 0;
}