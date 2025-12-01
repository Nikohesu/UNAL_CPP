#include <iostream>
using namespace std;


int main () {

    int numE = 0;
    double numR = 0.0;
    char caract = 'a';

    cout << "tu numero entero es: " << numE << endl << "tu numero real es: " << numR << endl << "tu letra es: " << caract << endl;
    /* pude haber usado /n para el salto de linea pero no pude sacar la barra inclinada */
    cout << endl << "Ingresa el nuevo valor para el numero entero: ";
    cin >> numE;

    cout << "Ingresa el nuevo valor para el numero real: ";
    cin >> numR;
    
    cout << "Ingresa el nuevo valor para el letra: ";
    cin >> caract;

    numE += 10;
    numR *= 2;

    cout << endl << "valores despues de los cambios: " << endl << "entero + 10: " << numE << endl << "real * 2: " << numR << endl << "caracter sin cambios: " << caract << endl;


    return 0;
}

/*********************************************
 Jhoan Nicolas Sanchez Aguilar 
 nic3n1217@gmail.com
 Laboratorio 3 - punto 3
 *********************************************/