#include <iostream>
using namespace std;

int main()
{
    // Quemar la contrasena
    string contra, pass = "Contra123";
    cout << "Iniciar Sesion" << endl;
    // Se realiza una vez y se repite si ingresa la contrasena incorrecta
    do
    {
        cout << "Digite su contrasena" << endl; // Solicita la contrasena al usuario
        cin >> contra;                          // Almacenar la contrasena
    } while (contra != pass);
    // Sale del bucle hasta que ingrese la correcta y mostrar los mensajes
    cout << "Bienvenido !" << endl;
    cout << "Has ingresado correctamente" << endl;

    return 0;
}