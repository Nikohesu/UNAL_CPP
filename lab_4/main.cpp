#include <iostream>
#include <string>
#include "colors.h"


using namespace std;

void mayor_de_ten () {
    double valor;
    cout << "ingrese un valor numerico: ";
    cin >> valor;
    if (valor > 10) {
        cout << "El valor es mayor que 10." << endl;
    } else if (valor == 10) {
        cout << "El valor es igual a 10." << endl;
    } else if ( valor < 10) {
        cout << "El valor es menor que 10." << endl;
    }
    else {
        cout << RED << "El valor ingresado no es valido" << RESET << endl;
    }


}

int main() {

    int opcion;

    while (true) {
            cout << GREEN << '\n' << "*********************************************" << RESET << endl;
            cout << YELLOW << "Bienvenido a el selector de programas" << RESET << endl;
            cout << "   1. Evaluación de 10 " <<endl;
            cout << "   2. Calificación en letras" << endl;
            cout << "   3. Tipos de datos" << endl;
            cout << "   4. Salir" << endl;
            cout << GREEN << "*********************************************" << RESET << endl;

            cout << YELLOW <<"Seleccione una opción (Numero): " << RESET;
            if ((cin >> opcion) && (opcion >= 1 && opcion <= 4)) {
                break;
            }
            else {
                cout << RED << "El valor ingresado no es valido" << RESET << '\n';
                cin.clear();
                cin.ignore(10000, '\n');

    }
    }

    switch (opcion) {
        case 1: {
            mayor_de_ten();
    
            break;
        }
        case 2: {
            cout << "2" << endl;
            break;
        }
        case 3: {
            cout << "3" << endl;
            break;
        }
        case 4: {
            cout << GREEN << "Gracias por usar el programa. ¡Hasta luego!" << RESET << endl;
            break;
        }
        default: {
            cout << RED << "Opción no válida." << RESET << endl;
            break;
        }
    }

 

    



    
    


    return 0;
}