#include <iostream>

using namespace std;

int main() {
    int x = 19;

    if (x > 20) {
        cout << "X maior que 20" << endl;
    } else if (x == 20) {
        cout << "X igual a 20" << endl;
    } else {
        cout << "X menor que 20" << endl;
    }

    if (x > 10 && x < 20) {
        cout << "10 < x < 20" << endl;
    }

    if (x > 10 || x < 20) {
        cout << "10 > x ou x < 20" << endl;
    }

    int y = 27;
    int z = 42;

    if ( (y % 2 == 0) ^ (z % 2 == 0) ) {
        cout << "Ou o Y ou o Z são pares" << endl;
    }

    if (!(y % 2 == 0)) {
        cout << "O Y não é par" << endl;
    }

    if (z == 42) {
        cout << "O Z é 42" << endl;
    }
}