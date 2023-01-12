#include <iostream>

using namespace std;

int main() {
    int numeros[5];
    int numeros2[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << "Insira o " << i + 1 << "º nº" << endl;
        cin >> numeros[i]; 
    }

    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << endl;
    }
    
}