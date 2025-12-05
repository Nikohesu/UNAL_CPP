#include <iostream>
#include <string>
#include "colors.h"


using namespace std;

void mayor_de_ten () {
    double valor;
    cout << "ingrese un valor numerico: ";
    if (cin >> valor) {
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
        else {
            cout << "\x1b[2J\x1b[H" ;
            cout << RED << "El valor ingresado no es valido" << RESET << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }


    }

    void cal_let (){
        double cal;
        char cal_let;
        cout << "Ingresa la nota obtenida (decimales) :";
        if (cin >> cal){
            if (cal >= 0 && cal<=5){
                if (cal >= 4.5 && cal <= 5) {
                    cal_let = 'A';
                }
                else if (cal >= 4 && cal <= 4.4){
                    cal_let ='B';
                }
                else if (cal >= 3.5 && cal <= 3.9){
                    cal_let ='C';
                }
                else if (cal >= 3.0 && cal <= 3.4){
                    cal_let ='D';
                }   
                else {
                    cal_let = 'F';
                }

            cout << "Tu calificacion en letra es: " << cal_let;
            
        }
        else {
            cout << "\x1b[2J\x1b[H" ;
            cout << RED << "El valor ingresado es invalido" << RESET << endl;

        }


        }
    else {
        
        cout << "\x1b[2J\x1b[H" ;
        cout << RED << "El valor ingresado es invalido" << RESET << endl;
        cin.clear();
        cin.ignore(10000, '\n');

    }


}
     


int main() {

    int opcion;
    bool running =true;

    while (running)
    {
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
            cal_let();
            break;
        }
        case 3: {
            cout << "3" << endl;
            break;
        }
        case 4: {
            cout << GREEN << "Gracias por usar el programa. ¡Hasta luego!" << RESET << endl;
            running = false;
            break;
        }
        default: {
            cout << RED << "Opción no válida." << RESET << endl;
            break;
        }
    }
    
    }
    

 


    return 0;
}