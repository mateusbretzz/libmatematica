#include "matematica.h"
#include <math.h>

Trigonometria calcular_trigonometria(float angulo_radianos) {
    Trigonometria valor;
    valor.seno = sin(angulo_radianos);
    valor.cosseno = cos(angulo_radianos);
    valor.tangente = tan(angulo_radianos);
    return valor;
}
