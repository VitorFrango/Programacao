#include <iostream>

using namespace std;

int main() {

    int contador;

    cout << "Insira um número inteiro positivo" << endl;

    cin >> contador;

    for (int i = 0; i < contador; i++) {
        cout << "[" << (i + 1) << "] Quadrado: " << (i + 1) * (i + 1) << endl;
    }
}