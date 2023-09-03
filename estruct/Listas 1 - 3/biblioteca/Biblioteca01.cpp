#include "Biblioteca01.h"
#include <cmath>

//defini��o da fun��o
int multiplo(int v, int k) {

   //verifica o resto da divis�o
   //retono com operador tern�rio
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
