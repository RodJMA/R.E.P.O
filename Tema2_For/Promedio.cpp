#include <iostream>
using namespace std;

int main()
{
    float n, d, promedio, suma = 0;
    cout << "Promedio de N numeros" << endl;
    cout << "Digite cuantos numeros va ingresar:  " << "";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Digite el numero: " << "";
        cin >> d;
        suma += d;
    }
    promedio = suma / n;
    cout << "Tu promedio es: " << promedio << endl;

    return 0;
}