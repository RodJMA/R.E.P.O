#include <iostream>
using namespace std;

int main()
{
    int n, ultimoDigito, suma = 0;
    cout << "Ingrese un numero" << endl;
    cin >> n;
    do
    {
        ultimoDigito = n % 10; // Extraer el ultimo digito
        suma += ultimoDigito;  // Almacenar y sumar el ultimo digito
        n /= 10;               // Eliminar el ultimo digito para que el siguiente ciclo no lo tenga y se use el que le sigue

    } while (n > 9); // Repetir si el numero que nos queda es de dos cifras, es decir mayor que 9, ya que en adelante son numeros de mas de una cifra

    // Cuando quede un numero de una cifra ( menor o igual que 9), despues de eliminar uno por uno los digitos salir del ciclo y mostrar el mensaje
    cout << "La suma de los digitos es: " << suma << endl;

    return 0;
}