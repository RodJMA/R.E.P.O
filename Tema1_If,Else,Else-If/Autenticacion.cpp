#include <iostream>
using namespace std;

int main()
{
    //Variables tipo texto
    string user2, password2;
    // Pre establecer usuario y contrasena
    string user = "UsuarioM", password = "Contra123";

    // Interfaz
    cout << "Sistema de autentificacion" << endl;
    cout << "Usuario" << endl;
    cin >> user2;
    cout << "Contrasena" << endl;
    cin >> password2;

    // Comparacion de de usuario y contrasena ya creada con la ingresada
    if (user2 == user && password2 == password)
    {   
        cout << "_____________________________________" << endl;
        cout << "Autentificacion completada" << endl;
    }
    else
    {   
        // Mensaje personalizado si la condicion no se cumple
        cout << "_____________________________________" << endl;
        cout << "Primer intento fallido" << endl;
        if (user2 != user && password2 != password)
        {
            cout << "Usuario y contrasena incorrectas" << endl;
        }
        else if (user2 != user)
        {
            cout << "Usuario incorrecto" << endl;
        }
        else
        {
            cout << "Contrasena incorrecta" << endl;
        }

        //Interfaz del segundo intento
        cout << "_____________________________________" << endl;
        cout << "Segundo intento" << endl;
        cout << "Usuario" << endl;
        cin >> user2;
        cout << "Contrasena" << endl;
        cin >> password2;

        // Segunda comparacion de de usuario y contrasena ya creada con la ingresada
        if (user2 == user && password2 == password)
        {   
            cout << "_____________________________________" << endl;
            cout << "Autentificacion completada" << endl;
        }
        else
        {   
            // Mensaje personalizado si la condicion no se cumple
            cout << "_____________________________________" << endl;
            cout << "Segundo intento fallido" << endl;
            if (user2 != user && password2 != password)
            {
                cout << "Usuario y contrasena incorrectas" << endl;
            }
            else if (user2 != user)
            {
                cout << "Usuario incorrecto" << endl;
            }
            else
            {
                cout << "Contrasena incorrecta" << endl;
            }

            // Interfaz tercer intento
            cout << "_____________________________________" << endl;
            cout << "Tercer intento" << endl;
            cout << "Usuario" << endl;
            cin >> user2;
            cout << "Contrasena" << endl;
            cin >> password2;

            // Tercera comparacion de de usuario y contrasena ya creada con la ingresada
            if (user2 == user && password2 == password)
            {   
                cout << "_____________________________________" << endl;
                cout << "Autentificacion completada" << endl;
            }
            else
            {
                // Si la condicion no se cumple terminar programa
                cout << "_____________________________________" << endl;
                cout << "Tercer intento fallido" << endl;
                cout << "Ya no te quedan mas intentos" << endl;
            }
        }

        return 0;
    }
}