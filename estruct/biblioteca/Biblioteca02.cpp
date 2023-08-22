#include "Biblioteca02.h"

int primoSuperticioso(int v) {
    return (primo(v) && (v % 10 == 7)) ? 1 : 0;
}

int numeroPerfeito(int v) {
    int sum = 0;
    for (int i = 1; i <= v / 2; ++i) {
        if (v % i == 0)
            sum += i;
    }

    return (sum == v) ? 1 : 0;
}
