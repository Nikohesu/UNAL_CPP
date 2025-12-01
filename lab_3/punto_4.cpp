#include <iostream>
using namespace std;

int main () {

    double horas_taba;
    const int valor_hora = 10;
    double result;

    do {
        cout << "Ingresa las horas trabajadas esta semana: ";
        if (cin >> horas_taba) {
            break;
        }
        else {
            cout << "el valor ingresado no es valido" << '\n';
            cin.clear();
            cin.ignore();
        }

    } while (true);
    

    result = horas_taba * valor_hora;

    cout << "Su sueldo total es de: " << result << endl;



    return 0;
}

/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 3 - punto 4
 *********************************************/