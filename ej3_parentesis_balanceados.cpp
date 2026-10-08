#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool estaBalanceada(const string& expresion) {
    stack<char> pila;
    for (char c : expresion) {
        if (c == '(') {
            pila.push(c);
        } else if (c == ')') {
            if (pila.empty()) {
                return false;
            }
            pila.pop();
        }
    }
    return pila.empty();
}

int main() {
    string expresion;
    cout << "Ingrese una expresion: ";
    getline(cin, expresion);

    if (estaBalanceada(expresion)) {
        cout << "Resultado: CORRECTO (parentesis balanceados)" << endl;
    } else {
        cout << "Resultado: INCORRECTO (parentesis no balanceados)" << endl;
    }
    return 0;
}
