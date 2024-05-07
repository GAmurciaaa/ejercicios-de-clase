#include <iostream>

using namespace std;

int main() {
    // Your code here
    char l;


    do {
        cout << "Elija una opcon del menu:\n a.\n b.\n c.\n d.\n e.\n O precione 'x' para salir";
        cin >> l;
        switch (l) {
            case 'a':
                cout << "Opcion a";
                break;
            case 'b':
                cout << "Opcion b";
                break;
            case 'c':
                cout << "Opcion c";
                break;
            case 'd':
                cout << "Opcion d";
                break;
            case 'e':
                cout << "Opcion e";
                break;
            case 'x':
                cout << "Saliendo del programa";
                break;
            default:
                cout << "Opcion no valida";
                break;
        }
    } while (l != 'x');
    return 0;
}