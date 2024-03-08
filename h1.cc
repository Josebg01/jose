#include <iostream>

using namespace std;

int main(int cantidad, char* argumentos[]) {
    if (cantidad < 2) {
        cout << "Error: No hay argumentos" << endl;
    }
    int i=cantidad-1;

    for ( i; i >= 0; --i) {
        cout << argumentos[i] << endl;
    }

}