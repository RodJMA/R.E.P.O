#include <iostream>
using namespace std;

int main()
{
    cout << "Cuenta regresiva" << endl;

    // Inicar en 10 y parar hasta que la disminucion de uno en uno sea igual a 0
    for (int i = 10; i >= 0; i--)
    {
        cout << i << endl;
    }

    return 0;
}