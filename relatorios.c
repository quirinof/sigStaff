#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "atividades.h"
#include "funcionarios.h"
#include "projetos.h"
#include "relatorios.h"
#include "validacoes.h"

void relatorio_ordenado_fnc(Funcionario **);
void relatorio_ordenado_pjt(Projeto **);
void relatorio_ordenado_atv(Atividade **);
void exibir_lista_fnc(Funcionario *);
void exibir_lista_pjt(Projeto *);
void exibir_lista_atv(Atividade *);
void excluir_lista_fnc(Funcionario **);
void excluir_lista_pjt(Projeto **);
void excluir_lista_atv(Atividade **);

/// Função mae que coordena todas as funcionalidades do módulo
void modulo_relatorios(void) {
    char opcao;
    do {
        opcao = tela_relatorios();
        switch(opcao) {
            case '1': modulo_lista_ordenada_funcionarios();
                      break;
            case '2': modulo_lista_ordenada_projetos();
                      break;
            case '3': modulo_lista_ordenada_atividades();
                      break;
            case '4': atividades_por_funcionario();
                      break;
            case '5': atividades_por_projeto();
                      break;
            case '6': funcionarios_por_projeto();
                      break;
            case '7': atividades_por_data();
                      break;
        }
    } while (opcao != '0');
}

/// Manipula a listagem ordenada de todos os funcionários
void modulo_lista_ordenada_funcionarios(void) {
    Funcionario *lista;
    lista = NULL;
    relatorio_ordenado_fnc(&lista);
    if (lista != NULL) {
        exibir_lista_fnc(lista);
    }
    excluir_lista_fnc(&lista);
}

/// Manipula a listagem ordenada de todos os projetos
void modulo_lista_ordenada_projetos(void) {
    Projeto *lista;
    lista = NULL;
    relatorio_ordenado_pjt(&lista);
    if (lista != NULL) {
        exibir_lista_pjt(lista);
    }
    excluir_lista_pjt(&lista);
}

/// Manipula a listagem ordenada de todas as atividades
void modulo_lista_ordenada_atividades(void) {
    Atividade *lista;
    lista = NULL;
    relatorio_ordenado_atv(&lista);
    if (lista != NULL) {
        exibir_lista_atv(lista);
    }
    excluir_lista_atv(&lista);
}

/// Manipula a listagem de atividades anexadas a um único funcionário
void atividades_por_funcionario(void) {
    char *cpf;

    cpf = tela_atividades_por_funcionario();
    relatorio_atv_por_fnc(cpf);

    free(cpf);
}

/// Manipula a listagem de atividades atribuídas a um único projeto
void atividades_por_projeto(void) {
    char *id_pjt;

    id_pjt = tela_atividades_por_projeto();
    relatorio_atv_por_pjt(id_pjt);

    free(id_pjt);
}

/// Manipula a listagem de funcionários existentes em um único projeto
void funcionarios_por_projeto(void) {
    char *id_pjt;

    id_pjt = tela_funcionarios_por_projeto();
    relatorio_fnc_por_pjt(id_pjt);

    free(id_pjt);
}

/// Manipula a listagem de atividades em uma data específica 
void atividades_por_data(void) {
    char *data;

    data = tela_atividades_por_data();
    relatorio_atv_por_data(data);

    free(data);
}

/// Menu de relatórios
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
    printf(" ||      [ 2 ] Projetos                                             ||\n");
    printf(" ||      [ 3 ] Atividades                                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         Filtrados:                                              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      [ 4 ] Todas as atividades relacionadas a um Funcionario    ||\n");
    printf(" ||      [ 5 ] As atividades de um Projeto                          ||\n");
    printf(" ||      [ 6 ] Funcionarios por projeto                             ||\n");
    printf(" ||      [ 7 ] Atividades por data especifica                       ||\n");
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

/// Retorna cpf digitado pelo usuário
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

/// Retorna ID digitado pelo usuário
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

/// Retorna ID digitado pelo usuário
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

/// Retorna Data digitada pelo usuário
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

/// Recebe a data para listar as atividades relacionadas a ela
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

/// Recebe o CPF para listar as atividades relacionadas a um funcionário
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

/// Recebe o ID para listar as atividades relacionadas a um projeto
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

/// Recebe um ID para listar os funcionários atribuídos àquele projeto
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

/// Abre o arquivo e exibe cada um dos funcionários.
void listar_funcionarios(void) {
    Funcionario *fnc;
    FILE *fp;
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp != NULL) {
        while (fread(fnc, sizeof(Funcionario), 1, fp)) {
            exibir_funcionario(fnc);
        }
        fclose(fp);
    }
    else {
        tela_erro();
    }
    free(fnc);
}

/// Abre o arquivo e exibe cada um dos projetos.
void listar_projetos(void) {
    FILE *fp;
    Projeto *pjt;
    pjt = (Projeto*) malloc(sizeof(Projeto));
    fp = fopen("projetos.dat", "rb");
    if (fp != NULL) {
        while (fread(pjt, sizeof(Projeto), 1, fp)) {
            exibir_projeto(pjt);
        }
        fclose(fp);
    }
    else {
        tela_erro_pjt();
    }
    free(pjt);
}

/// Abre o arquivo e exibe cada uma das atividades.
void listar_atividades(void) {
    FILE *fp;
    Atividade *atv;
    atv = (Atividade*) malloc(sizeof(Atividade));
    fp = fopen("atividades.dat", "rb");
    if (fp != NULL) {
        while (fread(atv, sizeof(Atividade), 1, fp)) {
            exibir_atividade(atv);
        }
        fclose(fp);
    }
    else {
        tela_erro_atv();
    }
    free(atv);
}

/// Abre o arquivo e exibe alguns campos das atividades.
void listar_atv_filtrada(char *id) {
    FILE *fp;
    Atividade *atv; 
    atv = (Atividade*) malloc(sizeof(Atividade));
    fp = fopen("atividades.dat", "rb");
    if (fp != NULL) {
        while(fread(atv, sizeof(Atividade), 1, fp)) {
            if(strcmp(atv->id_pjt, id) == 0 || strcmp(atv->cpf, id) == 0 || strcmp(atv->data_atv, id) == 0) {
                printf(" ||       %s             %s             %s\n", atv->id, atv->nome_atv, atv->data_atv);
            }
        }
        fclose(fp);
    }
    else {
        tela_erro_atv();
    }
    free(atv);
}

/// Abre o arquivo e exibe alguns campos dos funcionários.
void listar_fnc_filtrado(char *cpf) {
    FILE *fp;
    Funcionario *fnc; 
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp != NULL) {
        while(fread(fnc, sizeof(Funcionario), 1, fp)) {
            if(strcmp(fnc->cpf, cpf) == 0) {
                printf(" ||    %s         %s          %s\n", fnc->cpf, fnc->nome, fnc->cargo);
            }
        }
        fclose(fp);
    }
    else {
        tela_erro();
    } 
    free(fnc);
}

/// Abre arquivo de funcionários e exibe as atividades dele.
void listar_atividades_por_fnc(char *cpf) {
    Funcionario *fnc;
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fnc = buscar_funcionario(cpf);
    if (fnc != NULL) {
        printf(" ||         Funcionario: %s \n", fnc->nome);
        printf(" ||                                                                 ||\n");
        printf(" ||  <<    ID     |            Nome             |    Entrega    >>  ||\n");
        printf(" ||   -----------------------------------------------------------   ||\n");
        listar_atv_filtrada(cpf);
    }
    else {
        tela_erro();
    }
    free(fnc);
}

/// Abre o arquivo de projetos e exibe as atividades dele.
void listar_atividades_por_pjt(char* id_pjt) {
    Projeto *pjt;
    pjt = (Projeto*) malloc(sizeof(Projeto));
    pjt = buscar_projeto(id_pjt);
    if (pjt != NULL) {
        printf(" ||         Projeto: %s \n", pjt->nome);
        printf(" ||                                                                 ||\n");
        printf(" ||  <<    ID     |            Nome             |    Entrega    >>  ||\n");
        printf(" ||   -----------------------------------------------------------   ||\n");
        listar_atv_filtrada(id_pjt);
    }
    else {
        tela_erro_pjt();
    }
    free(pjt);
}

/// Abre os arquivos de atividades e projetos, e exibe os funcionários relacionados a um projeto
void listar_fnc_por_pjt(char *id_pjt) {
    FILE *fp;
    Projeto *pjt;
    Atividade *atv;
    char *cpf_fnc;
    atv = (Atividade*) malloc(sizeof(Atividade));
    pjt = (Projeto*) malloc(sizeof(Projeto));
    pjt = buscar_projeto(id_pjt);
    if (pjt != NULL) {
        printf(" ||         Projeto: %s \n", pjt->nome);
        printf(" ||                                                                 ||\n");
        printf(" ||   <<    CPF     |            Nome             |    Cargo    >>  ||\n");
        printf(" ||   -----------------------------------------------------------   ||\n");
        fp = fopen("atividades.dat", "rb");
        if (fp != NULL) {
            while(fread(atv, sizeof(Atividade), 1, fp)) {
                if(strcmp(atv->id_pjt, id_pjt) == 0) {
                    cpf_fnc = atv->cpf;
                    listar_fnc_filtrado(cpf_fnc);
                }
            }
            fclose(fp);
        }
        else {
            tela_erro_atv();
        } 
    }
    else {
        tela_erro_pjt();
    }  
    free(pjt);
    free(atv);
}

/// Abre arquivo de funcionários e ordena alfabeticamente todos.
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

/// Exibe a lista ordenada de funcionários
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
        printf(" ||      %s ", aux->nome);
        printf("                    %s  \n", aux->cargo);
        aux = aux->prox;
	}
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       --- Fim da lista ---                      ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

/// Libera a memória alocada para lista
void excluir_lista_fnc(Funcionario **lista) {
    Funcionario *fnc; 
    while (*lista != NULL) {
        fnc = *lista;
        *lista = (*lista)->prox;
        free(fnc);
    }
}


/// Abre arquivo de projetos e ordena alfabeticamente todos.
void relatorio_ordenado_pjt(Projeto **lista) {
    FILE *fp;
    Projeto *pjt;

    excluir_lista_pjt(&(*lista));
    *lista = NULL;
    fp = fopen("projetos.dat", "rb");
    if (fp == NULL) {
        tela_erro_pjt();
    }
    else {
        pjt = (Projeto*) malloc(sizeof(Projeto));
        while (fread(pjt, sizeof(Projeto), 1, fp)) {
            if ((*lista == NULL) || (strcmp(inv_data(pjt->data_entrega), inv_data((*lista)->data_entrega)) < 0)) {
                pjt->prox = *lista;
                *lista = pjt;
            }
            else {
                Projeto *ant = *lista;
                Projeto *atu =  (*lista)->prox;
                while ((atu != NULL) && (strcmp(inv_data(atu->data_entrega), inv_data(pjt->data_entrega)) < 0)) {
                    ant = atu;
                    atu = atu->prox;
                }
                ant->prox = pjt;
                pjt->prox = atu;
            }
            pjt = (Projeto *) malloc(sizeof(Projeto));
        }
        free(pjt);
        fclose(fp);
    }
}

/// Exibe a lista ordenada de projeto
void exibir_lista_pjt(Projeto *aux) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>>     RELATORIOS     <<<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                   ----- Lista de Projetos -----                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||              Data             |             Nome                ||\n");
    printf("\n");
    while (aux != NULL) {
        printf(" ||         %s ", aux->data_entrega);
        printf("               %s  \n", aux->nome);
        aux = aux->prox;
	}
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       --- Fim da lista ---                      ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

/// Libera a memória alocada para lista
void excluir_lista_pjt(Projeto **lista) {
    Projeto *pjt; 
    while (*lista != NULL) {
        pjt = *lista;
        *lista = (*lista)->prox;
        free(pjt);
    }
}


/// Abre arquivo de atividades e ordena alfabeticamente todas.
void relatorio_ordenado_atv(Atividade **lista) {
    FILE *fp;
    Atividade *atv;

    excluir_lista_atv(&(*lista));
    *lista = NULL;
    fp = fopen("atividades.dat", "rb");
    if (fp == NULL) {
        tela_erro_atv();
    }
    else {
        atv = (Atividade*) malloc(sizeof(Atividade));
        while (fread(atv, sizeof(Atividade), 1, fp)) {
            if ((*lista == NULL) || (strcmp(inv_data(atv->data_atv), inv_data((*lista)->data_atv)) < 0)) {
                atv->prox = *lista;
                *lista = atv;
            }
            else {
                Atividade *ant = *lista;
                Atividade *atu =  (*lista)->prox;
                while ((atu != NULL) && (strcmp(inv_data(atu->data_atv), inv_data(atv->data_atv)) < 0)) {
                    ant = atu;
                    atu = atu->prox;
                }
                ant->prox = atv;
                atv->prox = atu;
            }
            atv = (Atividade *) malloc(sizeof(Atividade));
        }
        free(atv);
        fclose(fp);
    }
}

/// Exibe a lista ordenada de atividades
void exibir_lista_atv(Atividade *aux) {
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
    printf(" ||              Data             |             Nome                ||\n");
    printf("\n");
    while (aux != NULL) {
        printf(" ||           %s ", aux->data_atv);
        printf("                 %s  \n", aux->nome_atv);
        aux = aux->prox;
	}
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       --- Fim da lista ---                      ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

/// Libera a memória alocada para lista
void excluir_lista_atv(Atividade **lista) {
    Atividade *atv;
    while (*lista != NULL) {
        atv = *lista;
        *lista = (*lista)->prox;
        free(atv);
    }
}

