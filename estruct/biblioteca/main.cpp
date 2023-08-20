#include <iostream>
#include "Biblioteca01.h"
#include "Biblioteca02.h"

int main() {
    int V, k;
    std::cout << "Digite um valor inteiro V: ";
    std::cin >> V;

    std::cout << "Digite um valor inteiro k: ";
    std::cin >> k;

    if (isMultiple(V, k)) {
        std::cout << V << " é múltiplo de " << k << std::endl;
    } else {
        std::cout << V << " não é múltiplo de " << k << std::endl;
    }

    if (isPrime(V)) {
        std::cout << V << " é primo" << std::endl;
    } else {
        std::cout << V << " não é primo" << std::endl;
    }

    if (isSuperstitiousPrime(V)) {
        std::cout << V << " é primo supersticioso" << std::endl;
    } else {
        std::cout << V << " não é primo supersticioso" << std::endl;
    }

    if (isPerfectNumber(V)) {
        std::cout << V << " é um número perfeito" << std::endl;
    } else {
        std::cout << V << " não é um número perfeito" << std::endl;
    }

    return 0;
}
