#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros; // C++
    int numeros2[5] = {1, 2, 3, 4, 5}; // C
    int quantidade;

    int input;
    
    for (int i = 0; input != 0; i++) {
        cout << "Insira o número, caso não queira inserir mais escreva FIM" << endl;
        cin >> input;
        numeros.push_back(input);
    }

    int tamanho = numeros.size();
    int tamanho2 = sizeof(numeros2) / sizeof(int);

    for (int i = 0; i < tamanho; i++) {
        cout << (i + 1) << "º Numeros: " << numeros[i] << endl;
    }

    return 0;
}