#include <iostream>
using namespace std;

int main()
{
    int month;

    // Interfaz
    cout << "Signo del zodiaco" << endl;
    cout << "Escribe tu mes de nacimiento (1-12)" << endl;
    cout << "Ejemplo: Julio es el 7" << endl;
    cin >> month;

    switch (month)
    {
    case 1: // Enero
        cout << "Tu signo del zodiaco es Capricornio" << endl;
        break;
    case 2: // Febrero
        cout << "Tu signo del zodiaco es Acuario" << endl;
        break;
    case 3: // Marzo
        cout << "Tu signo del zodiaco es Piscis" << endl;
        break;
    case 4: // Abril
        cout << "Tu signo del zodiaco es Aries" << endl;
        break;
    case 5: // Mayo
        cout << "Tu signo del zodiaco es Tauro" << endl;
        break;
    case 6: // Junio
        cout << "Tu signo del zodiaco es Géminis" << endl;
        break;
    case 7: // Julio
        cout << "Tu signo del zodiaco es Cancer" << endl;
        break;
    case 8: // Agosto
        cout << "Tu signo del zodiaco es Leo" << endl;
        break;
    case 9: // Septiembre
        cout << "Tu signo del zodiaco es Virgo" << endl;
        break;
    case 10: // Octubre
        cout << "Tu signo del zodiaco es Libra" << endl;
        break;
    case 11: // Noviembre
        cout << "Tu signo del zodiaco es Escorpio" << endl;
        break;
    case 12: // Diciembre
        cout << "Tu signo del zodiaco es Sagitario" << endl;
        break;

    default:
        cout << "Entrada de datos invalida, porfavor digite entre rango establecido (1-12)" << endl;
        break;
    }

    return 0;
}