#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "atividades.h"
#include "validacoes.h"


void modulo_atividades(void) {
    char opcao;
    do {
        opcao = tela_atividades();
        switch (opcao) {
            case '1': adicionar_atividade();
                      break;
            case '2': pesquisar_atividade();
                      break;
            case '3': atualizar_atividade();
                      break;
            case '4': excluir_atividade();
                      break;
        }
    } while (opcao != '0');
}

void adicionar_atividade(void) {
    Atividade *atv;

    atv = tela_adicionar_atividade();
    salvar_atividade(atv);

    free(atv);
}

void salvar_atividade(Atividade* atv) {
    FILE *fp;

    fp = fopen("atividades.dat", "ab");
    if (fp == NULL) {
        printf("Erro de arquivo");
    }
    fwrite(atv, sizeof(Atividade), 1, fp);

    fclose(fp);
}

void pesquisar_atividade(void) {
    tela_pesquisar_atividade();
}

void atualizar_atividade(void) {
    tela_atualizar_atividade();
}

void excluir_atividade(void) {
    tela_excluir_atividade();
}

char tela_atividades(void) {

    char escolha;

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                   >>>>>>  ATIVIDADES  <<<<<<                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Adicionar nova atividade                          ||\n");
    printf(" ||         [ 2 ] Pesquisar atividade existente                     ||\n");
    printf(" ||         [ 3 ] Atualizar uma atividade em andamento              ||\n");
    printf(" ||         [ 4 ] Excluir atividade                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 0 ] Voltar ao Menu Principal                          ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"); 
    printf(" ||                                                                 ||\n");
    printf("       Digite sua escolha: ");
    scanf("%c", &escolha);
    getchar();

    return escolha;
}


Atividade* tela_adicionar_atividade(void) {
    Atividade *atv;

    atv = (Atividade*) malloc(sizeof(Atividade));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ADICIONAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    
    do {
        printf("            Nome da atividade: \n");
        printf("            => ");
        scanf("%[^\n]", atv->titulo_atividade);
        getchar();
    } while(!valida_nome(atv->titulo_atividade));
    printf("\n");

    do {
        printf("            ID da Atividade: \n");
        printf("            => ");
        scanf("%[^\n]", atv->id_atividade);
        getchar();
    } while (!valida_id(atv->id_atividade, 5));
    printf("\n");

    do {
        printf("            ID do Projeto relacionado: \n");
        printf("            => ");
        scanf("%[^\n]", atv->id_projeto);
        getchar();
    } while (!valida_id(atv->id_projeto, 5));
    printf("\n");

    do {
        printf("         CPF do Funcionario atribuido: \n");
        printf("         => ");
        scanf("%[^\n]", atv->cpf);
        getchar();
    } while (!valida_cpf(atv->cpf));   
    printf("\n");

    do {
        printf("            Data de entrega da atividade (dd/mm/aaaa): \n");
        printf("            => ");
        scanf("%[^\n]", atv->data_atividade);
        getchar();
    } while (!valida_data(atv->data_atividade));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Atividade incluida ......                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();

    return atv;
}


void tela_pesquisar_atividade(void) {
    char id_atividade[6];

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- PESQUISAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Digite o ID da Atividade: \n");
        printf("            => ");
        scanf("%[^\n]", id_atividade);
        getchar();
    } while (!valida_id(id_atividade, 5));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Atividade encontrada ......               ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_atualizar_atividade(void) {
    char id_atividade[6];
    char editar; 

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ATUALIZAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Digite o ID da Atividade: \n");
        printf("            => ");
        scanf("%[^\n]", id_atividade);
        getchar();
    } while (!valida_id(id_atividade, 5));
    printf("\n");

    do {
        system("cls || clear");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                          __ EDITAR __                           ||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||         [ 1 ] Titulo                                            ||\n");
        printf(" ||         [ 2 ] CPF do funcionario                                ||\n");
        printf(" ||         [ 3 ] Data de entrega                                   ||\n");
        printf(" ||         [ 4 ] ID do Projeto atribuido                           ||\n");
        printf(" ||         [ 5 ] ID da Atividade                                   ||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||         [ 0 ] Sair                                              ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf("           Digite sua escolha: ");
        scanf("%c", &editar);
        getchar();
        printf("\n");
        switch (editar) {
            case '1': tela_editar_titulo_atividade();
                      break;
            case '2': tela_editar_cpf_atividade();
                      break;
            case '3': tela_editar_data_atividade();
                      break;
            case '4': tela_editar_id_atribuido();
                      break;
            case '5': tela_editar_id_atividade();
                      break;
        }          
    } while (editar != '0');
}

void tela_editar_titulo_atividade(void) {
    char titulo_atividade[51];

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                          __ EDITAR __                           ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Novo titulo de atividade: \n");
        printf("         => ");
        scanf("%[^\n]", titulo_atividade);
        getchar();
    } while (!valida_nome(titulo_atividade));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       Informacao atualizada!                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_editar_cpf_atividade(void) {
    char cpf_atividade[12];

    system("cls || clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                          __ EDITAR __                           ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Novo CPF do Funcionario atribuido a Atividade: \n");
        printf("         => ");
        scanf("%[^\n]", cpf_atividade);
        getchar();
    } while (!valida_cpf(cpf_atividade));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       Informacao atualizada!                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_editar_data_atividade(void) {
    char data_atividade[11];

    system("cls || clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                          __ EDITAR __                           ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Nova Data de entrega da atividade (dd/mm/aaaa): \n");
        printf("         => ");
        scanf("%[^\n]", data_atividade);
        getchar();
    } while (!valida_data(data_atividade));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       Informacao atualizada!                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_editar_id_atribuido(void) {
    char id_projeto[6];

    system("cls || clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                          __ EDITAR __                           ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Novo ID do projeto atribuido a Atividade: \n");
        printf("            => ");
        scanf("%[^\n]", id_projeto);
        getchar();
    } while (!valida_id(id_projeto, 5));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       Informacao atualizada!                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_editar_id_atividade(void) {
    char id_atividade[6];

    system("cls || clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                          __ EDITAR __                           ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Novo ID da Atividade: \n");
        printf("            => ");
        scanf("%[^\n]", id_atividade);
        getchar();
    } while (!valida_id(id_atividade, 5));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       Informacao atualizada!                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_excluir_atividade(void) {
    char id_atividade[6];

    system("cls || clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       ----- EXCLUIR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Digite o ID da Atividade: \n");
        printf("            => ");
        scanf("%[^\n]", id_atividade);
        getchar();
    } while (!valida_id(id_atividade, 5));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  ...... Atividade deletada ......               ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}