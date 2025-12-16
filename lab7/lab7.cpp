/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 7
*********************************************/

#include <iostream>

using namespace std;

void poi () {
/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 7 - punto 2
*********************************************/
    int num;
    cout << "\x1B[2J\x1B[H" << "\n" << "Bienvenido al programa par o impar" << endl;
    cout  << "Ingrese el numero que quiere evaluar como par o impar: ";
    cin >> num;
    (num % 2 == 0) ? cout << "El numero " << num << " es par" : cout << "El numero " << num << " es impar";
    cout << endl;
}

void prm () {
/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 7 - punto 3
*********************************************/
    int rep;
    int nsum = 0;

    cout << "\x1B[2J\x1B[H"<< '\n' << "Hola bienvenido al progrma para calcular el promedio" << endl;


    cout << "Ingresa la cantidad de datos que vas a ingresar: ";
        while (true) {
            cin >> rep;
            cin.clear();
            cin.ignore(1000, '\n');
            if (rep > 0) {
                break;
            } 
            else {
                cout << "Opcion invalida, el numero debe ser mayor de 0: ";
            } 
        }


    for (int i = 1, num;i<=rep;i++) {
        cout << "Ingresa el valor " << i << ": ";
        cin >> num;
        nsum += num;
    }
    cout << "El promedio de estos numeros es: " << (double)nsum/rep << endl;
    


}

void advnum () {
/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 7 - punto 4
*********************************************/
    srand(time(NULL));
    int anum = rand()%101,unum,ite=0;

    cout << "\x1B[2J\x1B[H" << "Bienvenido al juego de adivinar el numero" <<endl;
    cout << "Ingresa el numero que crees que es el correcto: ";

    do {
        cin >> unum;
        cin.clear();
        cin.ignore(1000, '\n');
        cout << '\n';

        if (unum > 0 && unum <= 100) {
            if (unum > anum ) {
                cout << "\x1B[2J\x1B[H" << "el numero es menor que " << unum << endl;
                cout << "intentalo de nuevo: ";
                ite++;
            }
            else if (unum < anum) {
                cout  << "\x1B[2J\x1B[H" << "el numero es mayor que " << unum <<endl;
                cout << "intentalo de nuevo: ";
                ite++;
            }
            else if (unum == anum){
                cout << "\x1B[2J\x1B[H" << "Felicitaciones, ganaste en " << ite << " intentos";
            }
        }
        else {
            cout << "\x1B[2J\x1B[H" << "Intento invalido, recuera que solo puedes ingresar numeros del 1 al 100" << endl;
            cout << "intentalo de nuevo: ";
        }

        
    }while (unum != anum);
    

}

bool menu() {
/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 7 - punto 1
*********************************************/
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
                poi();
                return true;
            case 2:
                prm() ;
                return true;
            case 3:
                advnum();
                return true;
            case 4:
                cout << "gracias por usar el programa, Hasta luego, y si me dio pereza poner colores";
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