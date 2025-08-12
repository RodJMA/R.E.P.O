#include <iostream>
using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double estatura;
};

int main()
{
    int cantidad, masAlto;
    cout << "Informacion de una persona" << endl;
    cout << "Ingrese cuantas personas desea registrar: ";
    cin >> cantidad;
    Persona personas[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cout << "--------Persona " << i + 1 << " --------" << endl;
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, personas[i].nombre);
        cout << "Edad: ";
        cin >> personas[i].edad;
        cout << "Estatura: ";
        cin >> personas[i].estatura;
    }

    masAlto = 0;
    for (int i = 1; i < cantidad; i++)
    {
        if (personas[i].estatura > personas[masAlto].estatura)
        {
            masAlto = i;
        }
    }

    cout << personas[masAlto].nombre << " es la persona mas alta con " << personas[masAlto].estatura << " de altura" << endl;

    return 0;
}
