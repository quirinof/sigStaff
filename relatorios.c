#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "atividades.h"
#include "funcionarios.h"
#include "projetos.h"
#include "relatorios.h"
#include "validacoes.h"

void relatorio_ordenado_fnc(Funcionario **);
void exibir_lista_fnc(Funcionario *);
void excluir_lista_fnc(Funcionario **);


void modulo_relatorios(void) {
    char opcao;
    do {
        opcao = tela_relatorios();
        switch(opcao) {
            case '1': modulo_lista_ordenada_funcionarios();
                      break;
            case '2': atividades_por_funcionario();
                      break;
            case '3': atividades_por_projeto();
                      break;
            case '4': funcionarios_por_projeto();
                      break;
            case '5': atividades_por_data();
                      break;
            case '6': listar_funcionarios();
                      break;
            case '7': listar_projetos();
                      break;
            case '8': listar_atividades();
                      break;
        }
    } while (opcao != '0');
}


void modulo_lista_ordenada_funcionarios(void) {
    Funcionario *lista;
    lista = NULL;
    relatorio_ordenado_fnc(&lista);
    exibir_lista_fnc(lista);
    excluir_lista_fnc(&lista);
}

void atividades_por_funcionario(void) {
    char *cpf;

    cpf = tela_atividades_por_funcionario();
    relatorio_atv_por_fnc(cpf);

    free(cpf);
}

void atividades_por_projeto(void) {
    char *id_pjt;

    id_pjt = tela_atividades_por_projeto();
    relatorio_atv_por_pjt(id_pjt);

    free(id_pjt);
}

void funcionarios_por_projeto(void) {
    char *id_pjt;

    id_pjt = tela_funcionarios_por_projeto();
    relatorio_fnc_por_pjt(id_pjt);

    free(id_pjt);
}

void atividades_por_data(void) {
    char *data;

    data = tela_atividades_por_data();
    relatorio_atv_por_data(data);

    free(data);
}


char tela_relatorios(void) {
    char escolha;

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         Ordenado:                                               ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      [ 1 ] Funcionarios                                         ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         Filtrados:                                              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      [ 2 ] Todas as atividades relacionadas a um Funcionario    ||\n");
    printf(" ||      [ 3 ] As atividades de um Projeto                          ||\n");
    printf(" ||      [ 4 ] Funcionarios por projeto                             ||\n");
    printf(" ||      [ 5 ] Atividades por data especifica                       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         Gerais(Basico):                                         ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      [ 6 ] Funcionarios                                         ||\n");
    printf(" ||      [ 7 ] Projetos                                             ||\n");
    printf(" ||      [ 8 ] Atividades                                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      [ 0 ] Voltar ao Menu Principal                             ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"); 
    printf(" ||                                                                 ||\n");
    printf("       Digite sua escolha: ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}


char* tela_atividades_por_funcionario(void) {
    char *cpf;
    cpf = (char*) malloc(12*sizeof(char));

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||              ----- Atividades por Funcionario -----             ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf(" ||         CPF do Funcionario:                                     ||\n");
        printf(" ||         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

    return cpf;
}

char* tela_atividades_por_projeto(void) {
    char *id_pjt;
    id_pjt = (char*) malloc(6*sizeof(char));

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ----- Atividades por Projeto -----               ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf(" ||         ID do Projeto:                                          ||\n");
        printf(" ||         => ");
        scanf("%[^\n]", id_pjt);
        getchar();
    } while (!valida_id(id_pjt, 5));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

    return id_pjt;
}

char* tela_funcionarios_por_projeto(void) {
    char *id_pjt;
    id_pjt = (char*) malloc(6*sizeof(char));

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ----- Funcionarios por Projeto -----             ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf(" ||         ID do Projeto:                                          ||\n");
        printf(" ||         => ");
        scanf("%[^\n]", id_pjt);
        getchar();
    } while (!valida_id(id_pjt, 5));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

    return id_pjt;
}

char* tela_atividades_por_data(void) {
    char *data_atv;
    data_atv = (char*) malloc(11*sizeof(char));

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  ----- Atividades por Data -----                ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf(" ||         Data de entrega da atividade:                           ||\n");
        printf(" ||         => ");
        scanf("%[^\n]", data_atv);
        getchar();
    } while(!valida_data(data_atv));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

    return data_atv;
}

void relatorio_atv_por_data(char *data_atv) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||   << ID da atividade | Nome da atividade | Data de entrega >>   ||\n");
    printf(" ||   -----------------------------------------------------------   ||\n");
    listar_atv_filtrada(data_atv);
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

void relatorio_atv_por_fnc (char *cpf) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  ----- Lista de Atividades -----                ||\n");
    printf(" ||                                                                 ||\n");
    listar_atividades_por_fnc(cpf);
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

void relatorio_atv_por_pjt(char *id_pjt) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                   ----- Lista de Atividades -----               ||\n");
    printf(" ||                                                                 ||\n");
    listar_atividades_por_pjt(id_pjt);
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

void relatorio_fnc_por_pjt(char* id_pjt) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                 ----- Lista de Funcionarios -----               ||\n");
    printf(" ||                                                                 ||\n");
    listar_fnc_por_pjt(id_pjt);
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


/////// FUNCOES DE ARQUIVAMENTO /////////////////

/// RELATORIOS COMPLETOS SIMPLES ///
void listar_funcionarios(void) {
    FILE *fp;
    Funcionario *fnc;
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    while (fread(fnc, sizeof(Funcionario), 1, fp)) {
        exibir_funcionario(fnc);
    }
    fclose(fp);
    free(fnc);
}

void listar_projetos(void) {
    FILE *fp;
    Projeto *pjt;
    pjt = (Projeto*) malloc(sizeof(Projeto));
    fp = fopen("projetos.dat", "rb");
    if (fp == NULL) {
        tela_erro_pjt();
    }
    while (fread(pjt, sizeof(Projeto), 1, fp)) {
        exibir_projeto(pjt);
    }
    fclose(fp);
    free(pjt);
}

void listar_atividades(void) {
    FILE *fp;
    Atividade *atv;
    atv = (Atividade*) malloc(sizeof(Atividade));
    fp = fopen("atividades.dat", "rb");
    if (fp == NULL) {
        tela_erro_atv();
    }
    while (fread(atv, sizeof(Atividade), 1, fp)) {
        exibir_atividade(atv);
    }
    fclose(fp);
    free(atv);
}

/// RELATORIOS FILTRADOS/ESPECIFICOS ///
void listar_atv_filtrada(char *id) {
    FILE *fp;
    Atividade *atv; 
    atv = (Atividade*) malloc(sizeof(Atividade));
    fp = fopen("atividades.dat", "rb");
    if (fp == NULL) {
        tela_erro_atv();
    }
    while(fread(atv, sizeof(Atividade), 1, fp)) {
        if(strcmp(atv->id_pjt, id) == 0 || strcmp(atv->cpf, id) == 0 || strcmp(atv->data_atv, id) == 0) {
            printf(" ||     %s  |   %s   |   %s\n", atv->id, atv->nome_atv, atv->data_atv);
        }
    }
    fclose(fp);
    free(atv);
}

void listar_fnc_filtrado(char *cpf) {
    FILE *fp;
    Funcionario *fnc; 
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    while(fread(fnc, sizeof(Funcionario), 1, fp)) {
        if(strcmp(fnc->cpf, cpf) == 0) {
            printf(" ||    %s     %s     %s\n", fnc->cpf, fnc->nome, fnc->cargo);
        }
    }
    fclose(fp);
    free(fnc);
}

/// RELATORIOS USANDO MAIS DE UM ARQUIVO ///
void listar_atividades_por_fnc(char *cpf) {
    Funcionario *fnc;
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fnc = buscar_funcionario(cpf);
    printf(" ||         Funcionario: %s \n", fnc->nome);
    printf(" ||                                                                 ||\n");
    printf(" ||  <<    ID     |            Nome             |    Entrega    >>  ||\n");
    printf(" ||   -----------------------------------------------------------   ||\n");
    listar_atv_filtrada(cpf);
    free(fnc);
}

void listar_atividades_por_pjt(char* id_pjt) {
    Projeto *pjt;
    pjt = (Projeto*) malloc(sizeof(Projeto));
    pjt = buscar_projeto(id_pjt);
    printf(" ||         Projeto: %s \n", pjt->nome);
    printf(" ||                                                                 ||\n");
    printf(" ||  <<    ID     |            Nome             |    Entrega    >>  ||\n");
    printf(" ||   -----------------------------------------------------------   ||\n");
    listar_atv_filtrada(id_pjt);
    free(pjt);
}

void listar_fnc_por_pjt(char *id_pjt) {
    FILE *fp;
    Projeto *pjt;
    Atividade *atv;
    char *cpf_fnc;
    atv = (Atividade*) malloc(sizeof(Atividade));
    pjt = (Projeto*) malloc(sizeof(Projeto));
    pjt = buscar_projeto(id_pjt);
    printf(" ||         Projeto: %s \n", pjt->nome);
    printf(" ||                                                                 ||\n");
    printf(" ||   <<    CPF     |            Nome             |    Cargo    >>  ||\n");
    printf(" ||   -----------------------------------------------------------   ||\n");
    fp = fopen("atividades.dat", "rb");
    if (fp == NULL) {
        tela_erro_atv();
    }
    while(fread(atv, sizeof(Atividade), 1, fp)) {
        if(strcmp(atv->id_pjt, id_pjt) == 0) {
            cpf_fnc = atv->cpf;
            listar_fnc_filtrado(cpf_fnc);
        }
    }
    fclose(fp);
    free(pjt);
    free(atv);
}


void relatorio_ordenado_fnc(Funcionario **lista) {
    FILE *fp;
    Funcionario *fnc;

    excluir_lista_fnc(&(*lista));
    *lista = NULL;
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    else {
        fnc = (Funcionario*) malloc(sizeof(Funcionario));
        while (fread(fnc, sizeof(Funcionario), 1, fp)) {
            if ((*lista == NULL) || (strcmp(fnc->nome, (*lista)->nome) < 0)) {
                fnc->prox = *lista;
                *lista = fnc;
            }
            else {
                Funcionario *ant = *lista;
                Funcionario *atu =  (*lista)->prox;
                while ((atu != NULL) && (strcmp(atu->nome, fnc->nome) < 0)) {
                    ant = atu;
                    atu = atu->prox;
                }
                ant->prox = fnc;
                fnc->prox = atu;
            }
            fnc = (Funcionario *) malloc(sizeof(Funcionario));
        }
        free(fnc);
        fclose(fp);
    }
} // by: @FlaviusGorgonio


void exibir_lista_fnc(Funcionario *aux) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                 ----- Lista de Funcionarios -----               ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||              Nome             |             Cargo               ||\n");
    printf("\n");
    while (aux != NULL) {
        printf(" ||  %s  |", aux->nome);
        printf("  %s  \n", aux->cargo);
        aux = aux->prox;
	}
    printf(" ||                                                                 ||\n");
    printf(" ||                     --- Fim da lista ---                        ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

void excluir_lista_fnc(Funcionario **lista) {
    Funcionario *fnc; 
    while (*lista != NULL) {
        fnc = *lista;
        *lista = (*lista)->prox;
        free(fnc);
    }
}

