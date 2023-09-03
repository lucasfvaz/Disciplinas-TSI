#include <iostream>
#include "Biblioteca01.h"
#include "Biblioteca02.h"

int main() {
    int v, k;
    //solicita ao usuario o valor
    std::cout << "Digite o primeiro valor inteiro: ";
    //armazena o valor em v
    std::cin >> v;

    std::cout << "Digite o segundo valor inteiro: ";
    std::cin >> k;

    //verifica se v é multiplo de k
    if (multiplo(v, k)) {
        std::cout << v << " e multiplo de " << k << std::endl;
    } else {
        std::cout << v << " nao e multiplo de " << k << std::endl;
    }

    if (primo(v)) {
        std::cout << v << " e primo" << std::endl;
    } else {
        std::cout << v << " nao e primo" << std::endl;
    }

    if (primoSuperticioso(v)) {
        std::cout << v << " e primo supersticioso" << std::endl;
    } else {
        std::cout << v << " nao e primo supersticioso" << std::endl;
    }

    if (numeroPerfeito(v)) {
        std::cout << v << " e um numero perfeito" << std::endl;
    } else {
        std::cout << v << " nao e um numero perfeito" << std::endl;
    }

    return 0;
}
