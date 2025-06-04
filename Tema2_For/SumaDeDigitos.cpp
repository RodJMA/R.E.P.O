#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;

    // Asegurar que sea positivo
    if (numero < 0) {
        cout << "El numero debe ser positivo." << endl;
        return 1;
    }

    // Calcular la cantidad de dígitos
    int temp = numero;
    int cantidadDigitos = 0;

    // Contamos los dígitos
    for (; temp > 0; temp /= 10) {
        cantidadDigitos++;
    }

    // Volver a poner el número original
    temp = numero;

    // Usamos for para recorrer cada dígito
    for (int i = 0; i < cantidadDigitos; i++) {
        int digito = temp % 10;   // Último dígito
        suma += digito;           // Se lo sumamos
        temp /= 10;               // Quitamos ese dígito
    }

    cout << "La suma de los digitos de " << numero << " es: " << suma << endl;

    return 0;
}
