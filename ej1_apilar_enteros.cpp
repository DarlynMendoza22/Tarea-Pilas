#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int numero;

    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Numero " << i << ": ";
        cin >> numero;
        pila.push(numero);
    }

    cout << "Elementos retirados (orden LIFO): ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;
    return 0;
}
