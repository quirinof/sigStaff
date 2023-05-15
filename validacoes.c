#include <stdio.h>
#include <stdlib.h>
#include "validacoes.h"

int valida_id(char *id) {
    int i;

    // Menos de 5 digitos
    for (i = 0; i < 5; i++) {
        if (id[i] == '\0')
            return 0;
    }

    // Mais de 5 digitos
    if (id[i] != '\0')
        return 0;

    // Caracteres alem de digitos numericos
    for (i = 0; i < 5; i++) {
        if (id[i] < '0' || id[i] > '9')
            return 0;
    }

    // ID valido
    return 1;
}