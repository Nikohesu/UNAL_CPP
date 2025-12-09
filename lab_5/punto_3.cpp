#include <iostream>
#include "colors.h"
using namespace std;

int main() {
    int n ;
    int factorial = 1;

    cout << LGREEN <<"Ingrese un numero " << MAGENTA << "entero positivo: ";
    cin >> n;

    while  (n<=0) {

        if (n < 0) {
            cout << LGREEN <<"ingreso un numero negativo, el numero deve ser entero positivo, " << MAGENTA <<"intentelo nuevamente: ";
        }
        else if (n==0) {
            cout << LGREEN <<"ingreso cero, el numero deve ser entero positivo, " << MAGENTA <<"intentelo nuevamente: ";
        }
        cin >> n;
    }

    for (int i = 1; i<=n;i++) {
        factorial*= i;
        
    }

    cout << "El factorial de " << n << " es " << factorial << endl;


    return 1;
}