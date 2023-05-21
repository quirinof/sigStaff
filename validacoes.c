#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoes.h"

int numero(char n) {
    if (n >= '0' && n <= '9') {
        return 1;
    }
    else {
        return 0;
    }
}

int quantidade_digitos(char* v, int x) {
    int i;
    for (i = 0; i < x; i++) {
        if (v[i] == '\0') {
            return 0;
        }
    }
    if (v[i] != '\0') {
        return 0;
    }
    else {
        return 1;
    }
}

int valida_id(char* id, int t) {
    //       o id em si, o tamanho do id para tornar uma função genérica
    int i;

    // verifica a quantidade de digitos
    if (!quantidade_digitos(id, t)) {
        return 0;
    }

    // apenas digitos numericos
    for (i = 0; i < t; i++) {
        if (!numero(id[i])) {
            return 0;
        }
    }

    // ID valido
    return 1;
}


int valida_cpf(char* cpf) {
    int i, j;
    int d1 = 0;
    int d2 = 0;
    // verificação da quantidade de digitos
    if (!quantidade_digitos(cpf, 11)) {
        return 0;
    }
    // verificação da existencia de apenas digitos numericos 
    for (i = 0; i < 11; i++) {
        if (!numero(cpf[i])) {
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

int bissexto(int ano) {
    if ((ano % 4 == 0) && (ano % 100 != 0)) {
        return 1;
    }
    else if (ano % 400 == 0) {
        return 1;     
    }
    else {
        return 0;
    }
}

int ehdata(int dd, int mm, int aa) {
    int max;
    if (aa < 0 || mm < 1 || mm > 12 ) {
        return 0;
    }
    if (mm == 2) {
        if(bissexto(aa)) {
            max = 29;
        }
        else {
            max = 28;
        }
    } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
        max = 30;
    } 
    else {
        max = 31;
    }
    if (dd < 1 || dd > max) {
        return 0;
    }
    return 1;
} 

int valida_data(char* data) {
    int i, dia, mes, ano;

    // eliminar as barras ou pontos que separam os dias, meses e anos
    limpa_caracteres(data);

    // verifica quantidade de digitos 
    if (!quantidade_digitos(data, 8)) {
        return 0;
    }
    // se sao apenas numeros
    for (i = 0; i < 8; i++) {
        if (!numero(data[i])) {
            return 0;
        }
    }
    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[2] - '0') * 10 + (data[3] - '0');
    ano = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + (data [7] - '0');
    // verifica se é uma data valida
    if (!ehdata(dia, mes, ano)) {
        return 0;
    }
    // data valida
    return 1;
}

int letra(char l) {
    if ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z') || (l == ' ')) {
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

void limpa_caracteres(char* str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (numero(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int valida_cel(char* cel) {
    int i;
    limpa_caracteres(cel);
    if (!quantidade_digitos(cel, 11)) {
        return 0;
    }
    for (i = 0; i < 11; i++) {
        if (!numero(cel[i])) {
            return 0;
        }
    }
    return 1; 
}
