#include <iostream>
#include <string>

using namespace std;

int main () {

    string palabra;
    cout << "Ingrese una palabra de 6 letras: ";
    getline(cin,palabra);

    for (int i =2; i<=5; i++  ) {
        cout << palabra[i];
    }


    return 1;
}