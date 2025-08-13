#include <iostream>
struct Estudiante
{
    std::string nombre;
    double nota[5];
};

void registro_estudiante();
void calcular_promedio();
Estudiante datos[100];
int numero_estudiantes = 0;

int main()
{
    int opcion;
    std::cout << "Bienvenido al registro de estudiantes" << std::endl;
    do
    {
        std::cout << "Ingrese opcion a realizar\n1. Registrar estudiante \n2. Calcular promedio \n3. Salir" << std::endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            std::cout << "Ingrese la cantidad de estudiantes a registrar: ";
            std::cin >> numero_estudiantes;
            registro_estudiante();
            break;
        case 2:
            calcular_promedio();
            break;
        case 3:
            std::cout << "Saliendo... ";
            break;

        default:
            std::cout << "Opcion incorrecta";
            break;
        }
    } while (opcion != 3);

    return 0;
}

void registro_estudiante()
{
    std::cout << "------------------------------\n";
    std::cout << "Registro de estudiante\n";
    for (int i = 0; i < numero_estudiantes; i++)
    {
        std::cout << "---- Estudiante " << i + 1 << " ----" << std::endl;
        std::cout << "Nombre: ";
        std::cin >> datos[i].nombre;
        for (int j = 0; j < 5; j++)
        {
            std::cout << "Nota " << j + 1 << " :";
            std::cin >> datos[i].nota[j];
        }
    }
}

void calcular_promedio()
{
    int estudiante_promedio;
    double promedio = 0;
    std::cout << "Selecciona el estudiante que desea calcular el promedio" << std::endl;
    for (int i = 0; i < numero_estudiantes; i++)
    {
        std::cout << "Estudiante " << i + 1 << " :" << datos[i].nombre << std::endl;
    }
    std::cout << "Opcion: ";
    std::cin >> estudiante_promedio;

    for (int i = 0; i < 5; i++)
    {
        promedio += datos[estudiante_promedio - 1].nota[i];
    }

    std::cout << "El promedio del estudiante " << datos[estudiante_promedio - 1].nombre << " es: " << promedio / 5 << " \n";
}