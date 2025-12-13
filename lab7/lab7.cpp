#include <iostream>

using namespace std;

bool menu() {
    int opc ;

    cout <<'\n' << "Menu de opciones:" <<endl;
    cout << "1. Par o impar" << endl;
    cout << "2. Promedio" << endl;
    cout << "3. Adivina el numero" << endl;
    cout << "4. Salir" << endl;

    cout << "Ingrese su opcion: ";

    while (true) {
        cin >> opc;
        cin.clear();
        cin.ignore(1000, '\n');

        if (opc>0 && opc<5){

            switch (opc)
            {
            case 1:
                cout <<"par o impar";
                return true;
            case 2:
                cout << "promedio";
                return true;
            case 3:
                cout << "adivina el numero";
                return true;
            case 4:
                cout << "gracias por usar el programa, Hasta luego";
                return false;
            default:
                break;
            }
            break;
        }
        else {
            cout << "opcion invalida,solo numeros, vuelve a intentarlo: ";
        }

        }

}

int main () {
    cout << "Bienvenido al lab 7" <<endl;
    while (menu()) {
        ;
    }
    return 1;
}