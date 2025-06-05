#include <iostream>
using namespace std;

int main()
{
    int option;
    do
    {
        cout << "Bienvido a RockStars" << endl;
        cout << "=============================" << endl;
        cout << "        MENU PRINCIPAL       " << endl;
        cout << "=============================" << endl;
        cout << "1. Jugar" << endl;
        cout << "2. Ver puntuacion" << endl;
        cout << "3. Opciones" << endl;
        cout << "4. Salir" << endl;
        cout << "=============================" << endl;
        cout << "Seleccione una opcion: " << "";
        cin >> option;
    } while (option != 4);
    cout << "Has salido. Vuelva pronto" << endl;
    return 0;
}