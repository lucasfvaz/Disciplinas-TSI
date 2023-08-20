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
        std::cout << V << " � m�ltiplo de " << k << std::endl;
    } else {
        std::cout << V << " n�o � m�ltiplo de " << k << std::endl;
    }

    if (isPrime(V)) {
        std::cout << V << " � primo" << std::endl;
    } else {
        std::cout << V << " n�o � primo" << std::endl;
    }

    if (isSuperstitiousPrime(V)) {
        std::cout << V << " � primo supersticioso" << std::endl;
    } else {
        std::cout << V << " n�o � primo supersticioso" << std::endl;
    }

    if (isPerfectNumber(V)) {
        std::cout << V << " � um n�mero perfeito" << std::endl;
    } else {
        std::cout << V << " n�o � um n�mero perfeito" << std::endl;
    }

    return 0;
}
