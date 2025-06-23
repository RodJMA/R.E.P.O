#include <iostream>
using namespace std;

struct Estudiantes
{
    string nombre;
    int edad;
    double promedio;
};

int main()
{
    cout << "Ingrese los datos del estudiente en el siguiente orden: \n1. Nombre \n2. Edad \n3. Promedio" << endl;
    Estudiantes estudiante[3];
    for (int i = 0; i < 3; i++)
    {
        cout << " Estudiante " << i + 1 << endl;

        cout << "Nombre: " << endl;
        cin >> estudiante[i].nombre;

        cout << "Edad: " << endl;
        cin >> estudiante[i].edad;

        cout << "Promedio: " << endl;
        cin >> estudiante[i].promedio;
    }

    cout << "\n--- Lista de Estudiantes ---" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEstudiante #" << (i + 1) << ":" << endl;
        cout << "Nombre: " << estudiante[i].nombre << endl;
        cout << "Edad: " << estudiante[i].edad << endl;
        cout << "Promedio: " << estudiante[i].promedio << endl;
    }
    return 0;
}
