#include <iostream>
using namespace std;

int main()
{
    // Definir variables para tomar en cuenta decimales
    double purchase, discount, finalPrice;

    // Pedir al usuario que ingrese los datos
    cout << "Ingrese el monto de su compra" << endl;
    
    // Guardar el dato ingresado por el usuario
    cin >> purchase;

    // Asegurarse que el usuario no ingrese datos negativos o cero
    if (purchase <= 0)
    {
        // Si la condicion se cumple
        cout << "Entrada de datos invalida. Porfavor no digite numeros negativos o cero" << endl;
    }

    // Si el dato pertenece a los numeros naturales
    else
    {

        // Si el monto ingresado es mayor que 100
        if (purchase > 100)
        {
            // Aplicar descuento del 10 porciento al monto
            discount = purchase * 0.1;
            cout << "El descuento a realizar es de " << discount << " dolares" << endl;

            // El precio final a pagar
            finalPrice = purchase - discount;
            cout << "Tu mongo a pagar es de " << finalPrice << " dolares" << endl;
        }

        // Si el monto es menor que 100
        else
        {
            cout << "Tu monto a pagar es de " << purchase << " dolares " << endl;
        }
    }

    return 0;
}