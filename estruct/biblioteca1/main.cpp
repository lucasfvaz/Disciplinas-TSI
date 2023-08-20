#include <cmath>

int isMultiple(int V, int k) {
    return (V % k == 0) ? 1 : 0;
}

int isPrime(int V) {
    if (V <= 1)
        return 0;

    for (int i = 2; i <= sqrt(V); ++i) {
        if (V % i == 0)
            return 0;
    }

    return 1;
}
