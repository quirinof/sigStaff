#include <stdio.h> 
#include <stdlib.h>
#include "funcionarios.h"
#include "projetos.h"
#include "atividades.h"
#include "sobre.h"


char tela_principal(void);


int main(void) {
    char opcao;

    do {
        opcao = tela_principal();
        switch(opcao) {
            case '1': modulo_funcionarios();
                      break;
            case '2': modulo_projetos();
                      break;
            case '3': modulo_atividades();
                      break;
            case '4': tela_sobre();
                      tela_equipe();
                      break;
        }
    } while (opcao != '0');
    
    return 0;
}

char tela_principal(void) {
    char escolha;

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  >>>>>>  MENU PRINCIPAL  <<<<<<                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Funcionarios                                      ||\n");
    printf(" ||         [ 2 ] Projetos                                          ||\n");
    printf(" ||         [ 3 ] Atividades                                        ||\n");
    printf(" ||         [ 4 ] Sobre                                             ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 0 ] Sair                                              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf("       Digite o numero da sua escolha: ");
    scanf("%c", &escolha);
    getchar();

    return escolha;
}