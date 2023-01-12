#include <iostream>

using namespace std;

int main() {

    int contador = 0;

    while (contador < 10) {
        cout << contador * contador << " ";
        contador = contador + 1;
    }
}