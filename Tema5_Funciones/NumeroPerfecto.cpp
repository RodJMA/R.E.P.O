#include <iostream>
#include <cmath>
using namespace std;

// Prototipo
bool numeroPerfecto(int n);

int main()
{
    int n;
    cout << "Ingrese un numero para determinar si es perfecto" << endl;
    cin >> n;
    if (numeroPerfecto(n))
    {
        cout << n << " es un numero perfecto" << endl;
    }
    else
    {
        cout << n << " no es un numero perfecto" << endl;
    }

    return 0;
}

bool numeroPerfecto(int n)
{
    bool perfecto = false;

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n == pow(2, i - 1) * (pow(2, i) - 1))
            {
                perfecto = true;
            }
        }
    }

    return perfecto;
}
