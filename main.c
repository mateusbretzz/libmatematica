#include <stdio.h>
#include "matematica.h"

int main() {
    float angulo = 3.14/4;
    Trigonometria valor = calcular_trigonometria(angulo);
    
    printf("O seno de %.f: %f\n", angulo, valor.seno);
    printf("O cosseno de %.f: %f\n", angulo, valor.cosseno);
    printf("A tangente de %.f: %f\n", angulo, valor.tangente);

    return 0;
}
