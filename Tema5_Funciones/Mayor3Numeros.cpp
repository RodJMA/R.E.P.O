#include <iostream>
using namespace std;

// Prototipos
double mayorNumero(double n1, double n2, double n3);

int main()
{

    double n1, n2, n3, respuesta;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;
    respuesta = mayorNumero(n1, n2, n3);
    cout << "El numero mayor es: " << respuesta << endl;

    return 0;
}

double mayorNumero(double a, double b, double c) {
    double mayor = a; // Suponemos que 'a' es el mayor inicialmente

    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }

    return mayor;
}
