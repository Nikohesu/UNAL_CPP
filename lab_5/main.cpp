/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 5 
*********************************************/

#include <iostream>
#include <string>
#include "colors.h"


using namespace std;

void mayor_de_ten () {
/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 5 - punto 1
*********************************************/
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
/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 5 - punto 2
*********************************************/
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
     
void tipos_de_datos () {
/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 5 - punto 3
*********************************************/
    char letra ;
    int num;
    bool capt_num;
    bool capt_char;

    cout << "ingrese un caracter: ";
    cin >> letra;
    cin.ignore(10000, '\n');
    cout << "ingrese un numero entero: ";
    if (cin >> num) {
        if (letra >= 'a' && letra <= 'z') {
            cout << '\n' << "El caracter ingresado es una letra minuscula: " << letra << endl;
        }
        else if (letra >= 'A' && letra <= 'Z') {
            cout << '\n' << "El caracter ingresado es una letra mayuscula: " << letra << endl;
        }
        else if (letra >= '0' && letra <= '9') {
            cout << '\n' << "El caracter ingresado es un digito: " << letra << endl;
        }
        else {
            cout << '\n' << "El caracter ingresado es un simbolo: " << letra << endl;
        }
        cout << "El numero entero ingresado es: " << num << endl;

    }
    else {
        cout << "\x1b[2J\x1b[H" ;
        cout << RED << "El valor ingresado no es valido" << RESET << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }

    if (num < 0) {
        cout << "El numero es negativo." << endl;
    }
    else if (num == 0) {
        cout << "El numero es cero." << endl;
    }
    else {
        cout << "El numero es positivo." << endl;

    }
    if (num > 100) {
        cout << "El numero es mayor que 100." << endl;
    }
    else {
        cout << "El numero es menor o igual que 100." << endl;
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
            tipos_de_datos();
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