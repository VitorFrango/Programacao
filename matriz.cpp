#include <iostream>

using namespace std;

int main() {

    float gps[3][2] = { 
                        {3,2},
                        {4,5},
                        {5,6}
                    };

    for (int i = 0; i < 3; i++) {
        cout << "POS: " << i << endl;
        cout << "LAT:" << gps[i][0] << ", LONG:" << gps[i][1] << endl;
    }

}