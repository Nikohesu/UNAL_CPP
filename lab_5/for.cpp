#include <iostream>
using namespace std;

int main() {
    int num ;
    cout << "Ingrese un numero entero: ";
    cin >> num ;

    for (int count=1;count <= 10;count++) {
        cout << num << "*" << count << " = " << num*count <<endl;
    }

    return 1;
}