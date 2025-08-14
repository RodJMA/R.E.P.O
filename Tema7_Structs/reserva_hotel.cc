#include <iostream>
struct reserva_hotel
{
    int numero;
    std::string tipo;
    bool estado = true; // false = ocupado, true = vacio
};
void registrar_reservas();
void mostrar_habitaciones();
reserva_hotel habitacion[2];

int main()
{
    int opcion;
    habitacion[0].numero = 47, habitacion[0].tipo = "Premium", habitacion[0].estado, habitacion[1].numero = 100, habitacion[1].tipo = "Basic", habitacion[1].estado, habitacion[2].numero = 69, habitacion[2].tipo = "Medium", habitacion[2].estado = true;
    do
    {
        std::cout << "Hotel Cataluna \nSeleccione la opcion que desea: \n 1.Realizar reservas \n 2.Mostrar habitaciones disponibles \n 3.Salir \nOpcion: ";
        std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            registrar_reservas();
            break;
        case 2:
            mostrar_habitaciones();
            break;
        case 3:
            std::cout << "Saliendo...";
            break;

        default:
            std::cout << "Opcion incorrecta, intente nuevamente";
            break;
        }
    } while (opcion != 3);
    return 0;
}

void registrar_reservas()
{
    int habitacion_seleccionada;
    std::cout << "Seleccione de las la habitaciones disponibles la que desea reservar: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        if (habitacion[i].estado)
        {
            std::cout << i + 1 << ".Habitacion " << habitacion[i].numero << " : " << habitacion[i].tipo << std::endl;
        }
        else
        {
            std::cout << "No hay habitaciones disponibles" << std::endl;
        }
    }
    std::cout << "Opcion: ";
    std::cin >> habitacion_seleccionada;
    switch (habitacion_seleccionada)
    {
    case 1:
        habitacion[0].estado = false;
        break;
    case 2:
        habitacion[1].estado = false;
        break;
    case 3:
        habitacion[3].estado = false;
        break;

    default:
        break;
    }
}
void mostrar_habitaciones()
{
    std::cout << "Todas las habitaciones" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        if (habitacion[i].estado)
        {
            std::cout << "Habitacion " << habitacion[i].numero << " : " << habitacion[i].tipo << " Estado: Disponible " << std::endl;
        }
        else
        {
            std::cout << "Habitacion " << habitacion[i].numero << " : " << habitacion[i].tipo << " Estado: Ocupada " << std::endl;
        }
    }
}