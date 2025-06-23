#include <iostream>
using namespace std;

int main()
{
    int array[5], array2[3];
    bool siEsta = false;
    cout << "Ingrese los digitos del arreglo mas grande" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Numero " << i + 1 << " :" << "";
        cin >> array[i];
    }

    cout << "Ingrese los digitos del arreglo mas pequeno" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Numero " << i + 1 << " :" << "";
        cin >> array2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0 + 1; j < i; j++)
        {
            if (array[i] == array2[j])
            {
                /* code */
            }
        }
    }

    return 0;
}