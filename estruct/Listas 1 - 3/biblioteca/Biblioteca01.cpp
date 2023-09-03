#include "Biblioteca01.h"
#include <cmath>

//definição da função
int multiplo(int v, int k) {

   //verifica o resto da divisão
   //retono com operador ternário
    return (v % k == 0) ? 1 : 0;
}

int primo(int v) {
    if (v <= 1)
        return 0;

    for (int i = 2; i <= sqrt(v); ++i) {
        if (v % i == 0)
            return 0;
    }

    return 1;
}
