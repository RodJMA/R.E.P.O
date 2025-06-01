#include <iostream>
using namespace std;

int main()
{
    int n, suma=0;
    cout << "Suma de los primeros N numeros" << endl;
    cout << "Escribe un numero: " << " ";
    cin >> n;
    // Validar que el numero pertenezca a los naturales
    do
    {
        if (n <= 0)
        {
            cout << "Digite un numero natural:" << endl;
            cin >> n;
        }

    } while (n <= 0); // Realizar la validacion hasta que la condicion no se cumpla

    
    for (int i = 1; i <= n; i++)
    {
        // Almacenar la suma
        suma+= i;
    }

    cout << "La suma de los primeros " << n << " terminos es: " << suma << endl;

    return 0;
}