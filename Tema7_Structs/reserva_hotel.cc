#include <iostream>
struct reserva_hotel
{
    int numero;
    std::string tipo;
    bool estado = false; // false = vacia, true = ocupado
};
void registrar_reservas();
void mostrar_habitaciones();
reserva_hotel habitacion[3];

int main()
{
    habitacion[0].numero = 47, habitacion[0].tipo = "premium", habitacion[0].estado;
    return 0;
}