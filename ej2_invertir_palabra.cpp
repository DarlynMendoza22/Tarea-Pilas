#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> pila;
    string palabra;
    string invertida = "";

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for (char c : palabra) {
        pila.push(c);
    }

    while (!pila.empty()) {
        invertida += pila.top();
        pila.pop();
    }

    cout << "Palabra invertida: " << invertida << endl;
    return 0;
}
