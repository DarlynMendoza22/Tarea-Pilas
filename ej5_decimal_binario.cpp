#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int numero;

    cout << "Ingrese un entero decimal positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "El numero debe ser positivo." << endl;
        return 1;
    }

    int n = numero;
    while (n > 0) {
        pila.push(n % 2);
        n /= 2;
    }

    cout << "Binario de " << numero << ": ";
    while (!pila.empty()) {
        cout << pila.top();
        pila.pop();
    }
    cout << endl;
    return 0;
}
