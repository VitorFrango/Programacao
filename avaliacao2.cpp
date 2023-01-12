#include <iostream>

using namespace std;

int main() {

    string j1;
    string j2;

    if (j1 == j2) {
        cout << "Empataram" << endl;
    } 
    // J1 vence
    else if (
        (j1 == "pedra" && j2 == "tesoura") ||
        (j1 == "papel" && j2 == "pedra") ||
        (j1 == "tesoura" && j2 == "papel")
    ) {
        cout << "Vence J1" << endl;
    } else {
        cout << "Vence J2" << endl;
    }

}