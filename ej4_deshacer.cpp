#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> historial;
    int opcion;
    string accion;

    do {
        cout << "\nMenu: 1) Registrar accion  2) Deshacer  3) Ver tope  4) Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                cout << "Accion: ";
                getline(cin, accion);
                historial.push(accion);
                cout << "Registrada: " << accion << endl;
                break;
            case 2:
                if (historial.empty()) {
                    cout << "No hay acciones para deshacer." << endl;
                } else {
                    cout << "Se revierte: " << historial.top() << endl;
                    historial.pop();
                }
                break;
            case 3:
                if (historial.empty()) {
                    cout << "La pila esta vacia." << endl;
                } else {
                    cout << "Accion en el tope: " << historial.top() << endl;
                }
                break;
            case 4:
                cout << "Fin del programa." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 4);
    return 0;
}
