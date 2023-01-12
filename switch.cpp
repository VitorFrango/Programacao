#include <iostream>

int main() {
    int mohs;

    std::cout << "Insira um nº de 1 a 10"<< std::endl;

    std::cin >> mohs;

    switch (mohs) {
        case 1:
            std::cout << "Talco";
            break;
        
        case 2:
            std::cout << "Gesso";
            break;

        //...

        default:
            std::cout << "Nº desconhecido" << std::endl;
    }

    

    
}