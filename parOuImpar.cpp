#include <iostream>

int main() {

    int numero;
    int resultado;

    std::cout << "Insira um número:\n";

    std::cin >> numero;

    resultado = numero % 2;

    std::cout << "0 => Significa número par.\n";
    std::cout << "1 => Significa número ímpar\n";
    std::cout << "Resultado: " << resultado << std::endl;


    if (numero % 2 == 0) {
        std::cout << "O nº é par";
    } else {
        std::cout << "O nº é ímpar";
    }


    if (numero > 0) {
        std::cout << "O nº é positivo";
    } else if (numero < 0) {
        std::cout << "O nº é negativo";
    } else {
        std::cout << "O nº é zero";
    }

}