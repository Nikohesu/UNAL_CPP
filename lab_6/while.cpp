#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 1; 
    cout << "Ingrese un numero entero: ";
    cin >> num ;

    while (count <= 10) {
        cout << num << "*" << count << " = " << num*count <<endl;
        count++;
    }

    return 1;
}