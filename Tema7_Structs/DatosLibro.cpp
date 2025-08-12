#include <iostream>
using namespace std;

struct Libro
{
    string titulo;
    string autor;
    int anioPublicacion;
};

void ingresarLibros();
void mostrarLibros();
int cantidad;
Libro datosLibro[100];

int main()
{
    int opcion = 0;
    do
    {

        cout << "------Biblioteca------" << endl;
        cout << "1. Ingresar datos de un libro" << endl;
        cout << "2. Mostrar libros ingresados" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            ingresarLibros();
            break;
        case 2:
            mostrarLibros();
            break;
        case 3:
            cout << "Has salido...Vuelva pronto." << endl;
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    } while (opcion != 3);
    return 0;
}

void ingresarLibros()
{
    cout << "Ingrese la cantidad de libros que desea agregar: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "---Libro " << i + 1 << " ---" << endl;
        cout << "Titulo: " << endl;
        cin >> datosLibro[i].titulo;
        cout << "Autor: " << endl;
        cin >> datosLibro[i].autor;
        cout << "Anio de publicacion: " << endl;
        cin >> datosLibro[i].anioPublicacion;
    }
};

void mostrarLibros()
{
    cout << "---Mostrar libros---" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "---Libro " << i + 1 << " ---" << endl;
        cout << "Titulo: " << datosLibro[i].titulo << endl;
        cout << "Autor: " << datosLibro[i].autor << endl;
        cout << "Anio de publicacion: " << datosLibro[i].anioPublicacion << endl;
    }
};