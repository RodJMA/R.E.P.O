#include <iostream>
using namespace std;

// Equilatero 3 lados iguales, isoceles dos lados iguales, escaleno todos los lados distintos
int main()
{
    float l1, l2, l3;

    cout << "Ingrese los lados del triangulo" << endl;
    cout << "_______________________________" << endl;
    cout << "Lado 1" << endl;
    cin >> l1;
    cout << "Lado 2" << endl;
    cin >> l2;
    cout << "Lado 3" << endl;
    cin >> l3;

    // Si un lado del triangulo es negativo o 0 no existe ya que no hay disntancias negativas y si es 0 no existe ese lado
    if (l1 <= 0 || l2 <= 0 || l3 <= 0)
    {
        cout << "El triangulo no existe" << endl;
    }

    // Si los lados son mayores que 0
    else
    {
        // Por ley transitiva de a=b y b=c, entonces a=c
        if (l1 == l2 && l2 == l3)
        {
            cout << "Tu trianglo es equilatero" << endl;
        }
        // Por ley simetrica de a=b, entonces b=a se toman en cuenta todas las combinaciones de pares del lado del triangulo
        else if ((l1 == l2) || (l1 == l3) || (l2 == l3))
        {
            cout << "Tu triangulo es isoceles" << endl;
        }

        // Si no se cumple ninguna es que todos sus lados son distintos
        else
        {
            cout << "Tu triangulo es escaleno" << endl;
        }
    }
    return 0;
}