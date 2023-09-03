#include "Biblioteca02.h"

int isSuperstitiousPrime(int V) {
    return (isPrime(V) && (V % 10 == 7)) ? 1 : 0;
}

int isPerfectNumber(int V) {
    int sum = 0;
    for (int i = 1; i <= V / 2; ++i) {
        if (V % i == 0)
            sum += i;
    }

    return (sum == V) ? 1 : 0;
}
