#include <iostream>

int main() {

    std::string passwordBase = "Xpto1234";
    std::string passwordUtilizador;

    std::cout << "Introduza a sua password:" << std::endl;

    std::cin >> passwordUtilizador;

    if (passwordBase == passwordUtilizador) {
        std::cout << "Password correcta!" << std::endl;
    } else {
        std::cout << "Password incorrecta." << std::endl;
    }



    return 0;
}