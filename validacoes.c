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
    // a função que limpa caracteres ja retorna apenas digitos numericos 
    limpa_caracteres(cel);
    if (!quantidade_digitos(cel, 11)) {
        return 0;
    }
    return 1; 
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
    // a função elimina pontos ou traços, deixando apenas digitos numericos
    limpa_caracteres(cpf);
    // verificação da quantidade de digitos
    if (!quantidade_digitos(cpf, 11)) {
        return 0;
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

int verifica_data(int dd, int mm, int aa) {
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
} // by: Flavius Gorgonio

int valida_data(char* data) {
    int dia, mes, ano;

    // eliminar as barras ou pontos e ja retorna apenas numeros
    limpa_caracteres(data);
    // verifica quantidade de digitos 
    if (!quantidade_digitos(data, 8)) {
        return 0;
    }
    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[2] - '0') * 10 + (data[3] - '0');
    ano = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + (data [7] - '0');
    // verifica se é uma data valida
    if (!verifica_data(dia, mes, ano)) {
        return 0;
    }
    
    return 1;
}

int letra(char l) {
    // vai retornar 1 apenas se for letra
    if ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z')) {
        return 1;
    } 
    else {
        return 0;
    }
}

int valida_nome(char* nome) {
    int i;
    for (i = 0; nome[i] != '\0'; i++) {
        if(!letra(nome[i]) && nome[i] != ' ') {
            return 0; 
        }
    }
    return 1;
}

int caracteres_email(char c) {
    if ((!letra(c)) && (!numero(c)) && (c != '@') && (c != '.') && (c != '_') && (c != '-')) {
        return 0;
    }
    else {
        return 1;
    }
}

int valida_email(char* email) {
    int i;
    int a = 0, p = 0;
    // verifica se o primeiro caracter segue as normas de email
    if(!letra(email[0]) && !numero(email[0])) {
            return 0;
        }
    for (i = 0; email[i] != '\0'; i++) {
        // verifica se o email contem apenas os caracteres validos
        if (!caracteres_email(email[i])) {
            return 0;
        }
        // verificando quantidade de arroba e ponto
        if (email[i] == '@') {
            a++;
        }
        if (email[i] == '.') {
            p++;
        }
    }
    // valida arroba e ponto
    if (a != 1 || p != 1) {
        return 0;
    }
    return 1;
}
