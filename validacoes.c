#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoes.h"


int valida_id(char *id) {
    int i;

    // quantidade de digitos
    for (i = 0; i < 5; i++) {
        if (id[i] == '\0')
            return 0;
    }
    if (id[i] != '\0') {
        return 0;
    }
    // apenas digitos numericos
    for (i = 0; i < 5; i++) {
        if (id[i] < '0' || id[i] > '9') {
            return 0;
        }
    }

    // ID valido
    return 1;
}



int valida_cpf(char *cpf) {
    int i, j;
    int d1 = 0;
    int d2 = 0;
    // verificação da quantidade de digitos
    for (i = 0; i < 11; i++) {
        if (cpf[i] == '\0') {
            return 0;
        }
    }
    if (cpf[i] != '\0') {
        return 0;
    } 
    // verificação da existencia de apenas digitos numericos 
    for (i = 0; i < 11; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') {
            return 0;
        }
    }
    // calculo digito 1 
    for (i = 0, j = 10; i < 9; i++, j--) {
        d1 += (cpf[i] - '0') * j;
    }
    d1 = (11 - (d1 % 11)) % 10;
    // verifica se o primeiro digito é valido
    if ((cpf[9] - '0') != d1) {
        return 0;
    }
    // calculo digito 2
    for (i = 0, j = 11; i < 10; i++, j--) {
        d2 += (cpf[i] - '0') * j;
    }
    d2 = (11 - (d2 % 11)) % 10;
    // verifica se o segundo digito é valido
    if ((cpf[10] - '0') != d2) {
        return 0;
    }
    return 1;
}



int valida_data(char *data) {
    int i;
    
    // verifica quantidade de digitos 
    for (i = 0; i < 10; i++) {
        if (data[i] == '\0') {
            return 0;
        }
    }
    if (data[i] != '\0') {
        return 0;
    }    
    // verifica se as barras estao separando o dia/mes/ano
    if (data[2] != '/' || data[5] != '/') {
        return 0;
    }
}

int letra(char l) {
    if (l>='A' && l<='Z') {
        return 1;
    }
    else if (l>='a' && l<='z') {
        return 1;
    }
    else {
        return 0;
    }
}

int valida_nome(char* nome) {
    int i;
    for (i = 0; nome[i] != '\0'; i++) {
        if(!letra(nome[i])) {
            return 0; 
        }
    }
    return 1;
}