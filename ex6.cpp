#include <iostream>

int main() {

    std::cout << "Insira dois números" <<std::endl;
    int number1;
    int number2;
    std::cin >> number1;
    std::cin >> number2;

    // Não ------- são negativos
    if (!(number1 < 0 && number2 < 0)) {

    }

    // Não são negativos <=> São positivos e São 0
    if ((number1 > 0 && number2 > 0) && (number1 == 0 && number2 == 0)) {

    }

    std::string ingrediente1;
    std::string ingrediente2;

    if ((ingrediente1 == "tofu" or ingrediente2 == "tofu") 
        && (ingrediente1 == "arroz" and ingrediente1 == "batata" || ingrediente1 == "arroz")
        || (ingrediente2 == "arroz" || ingrediente2 == "batata" || ingrediente2 == "arroz"))
    {
        std::cout << "Pode escolher o menu 3 - Tofu e (Batata ou Arroz)\n";
    }
}

