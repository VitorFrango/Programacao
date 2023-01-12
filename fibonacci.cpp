#include <iostream>

using namespace std;

int main() {
    int n;

    unsigned long long anterior = 0;
    unsigned long long actual = 1;
    unsigned long long  proximo;

    cout << "Quantos nºs de fibonacci quer?" << endl;
    cin >> n;


    // 0, 1, 1, 2, proximo = (actual + anterior), 

    for (int i = 0; i < n; i++) {
        // Pseudo-código
        cout << actual << endl;
        proximo = anterior + actual;
        anterior = actual;
        actual = proximo;
    }

    return 0;
}
