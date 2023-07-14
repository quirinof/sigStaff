#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "projetos.h"
#include "relatorios.h"
#include "validacoes.h"

void modulo_projetos(void) {
    char opcao;
    do {
        opcao = tela_projetos();
        switch (opcao) {
            case '1': adicionar_projeto();
                      break;
            case '2': pesquisar_projeto();
                      break;
            case '3': atualizar_projeto();
                      break;
            case '4': excluir_projeto();
                      break;
            case '5': recuperar_projeto();
                      break;
            case '6': listar_projetos();
                      break;
        }
    } while (opcao != '0');
}

void adicionar_projeto(void) {
    Projeto *pjt;
    
    pjt = tela_adicionar_projeto();
    salvar_projeto(pjt);

    free(pjt);
}

void pesquisar_projeto(void) {
    Projeto *pjt;
    char *id;

    id = tela_pesquisar_projeto();
    pjt = buscar_projeto(id);
    exibir_projeto(pjt);
    
    free(pjt);
    free(id);
}

void atualizar_projeto(void) {
    Projeto *pjt;
    char *id;

    id = tela_atualizar_projeto();
    pjt = buscar_projeto(id);
    if (pjt == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||                 >>>>>> Projeto inexistente <<<<<<               ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
    }
    else {
        tela_editar_projeto(pjt);
        refazer_projeto(pjt);
		free(pjt);
    }
    free(id);
}

void excluir_projeto(void) {
    Projeto *pjt;
    char *id;

    id = tela_excluir_projeto();
    pjt = (Projeto*) malloc(sizeof(Projeto));
    pjt = buscar_projeto(id);
    if (pjt == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||               >>>>>> Projeto nao encontrado! <<<<<<             ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
    }
    else {
        pjt->status = 0;
        refazer_projeto(pjt);
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                  ...... Projeto excluido ......                 ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
        free(pjt);
    }
    free(id);
}

void recuperar_projeto(void) {
    Projeto *pjt;
    char *id;

    id = tela_recuperar_projeto();
    pjt = (Projeto*) malloc(sizeof(Projeto));
    pjt = buscar_e_recuperar_pjt(id);
    if(pjt == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||               >>>>>> Projeto nao encontrado! <<<<<<             ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
    }
    else {
        refazer_projeto(pjt);
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                 ...... Projeto recuperado ......                ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
        free(pjt);
    }
    free(id);
}

/// Menu de Projetos
char tela_projetos(void) {
    char escolha;

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                     >>>>>>  PROJETOS  <<<<<<                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Adicionar novo projeto                            ||\n");
    printf(" ||         [ 2 ] Pesquisar por projeto existente                   ||\n");
    printf(" ||         [ 3 ] Atualizar um projeto em andamento                 ||\n");
    printf(" ||         [ 4 ] Excluir projeto                                   ||\n");
    printf(" ||         [ 5 ] Recuperar projeto excluido                        ||\n");
    printf(" ||         [ 6 ] Listar todos os projetos                          ||\n");
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

/// Preenche os dados e retorna o objeto preenchido
Projeto* tela_adicionar_projeto(void) {
    Projeto *pjt;
    pjt = (Projeto*) malloc(sizeof(Projeto));
    char* id;
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ADICIONAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Titulo/Nome: \n");
        printf("            => ");
        scanf("%[^\n]", pjt->nome);
        getchar();
    } while (!valida_nome(pjt->nome));
    printf("\n");
    do {
        printf("            Data limite para entrega (dd/mm/aaaa): \n");
        printf("            => ");
        scanf("%[^\n]", pjt->data_entrega);
        getchar();
    } while (!valida_data(pjt->data_entrega));
    printf("\n");
    id = gerar_id();
    strcpy(pjt->id, id);
    printf(" ||         O ID do seu projeto: \n");
    printf(" ||         => %s \n", pjt->id);

    pjt->status = 1;
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                 ...... Projeto cadastrado ......                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
    
    free(id);
    return pjt;
}

/// Retorna ID digitado pelo usuário
char* tela_pesquisar_projeto(void) {
    char* id;

    id = (char*) malloc(6*sizeof(char));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");;
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- PESQUISAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Digite o ID do Projeto: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

/// Retorna ID digitado pelo usuário
char* tela_atualizar_projeto(void) {
    char *id;

    id = (char*) malloc(6*sizeof(char));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ATUALIZAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Digite o ID do Projeto: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

/// Menu de escolha do atributo a ser editado. Recebe o objeto
void tela_editar_projeto(Projeto* pjt) {
    char editar;

    do {
        system("cls||clear");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                           __ EDITAR __                          ||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||         [ 1 ] Titulo                                            ||\n");
        printf(" ||         [ 2 ] Data para entrega                                 ||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||         [ 0 ] Retornar ao menu de Projetos                      ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf("           Digite sua escolha: ");
        scanf("%c", &editar);
        getchar();
        printf("\n");
        switch (editar) {
            case '1': tela_editar_titulo_projeto(pjt);
                      break;
            case '2': tela_editar_data_projeto(pjt);
                      break;
        }
    } while (editar != '0');
}

/// Altera o atributo Nome do objeto recebido
void tela_editar_titulo_projeto(Projeto* pjt) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                           __ EDITAR __                          ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Novo titulo do projeto: \n");
        printf("         => ");
        scanf("%[^\n]", pjt->nome);
        getchar();
    } while (!valida_nome(pjt->nome));
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Informacao atualizada ......              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

/// Altera o atributo Data do objeto recebido
void tela_editar_data_projeto(Projeto* pjt) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                           __ EDITAR __                          ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Nova data de entrega do projeto (dd/mm/aaaa): \n");
        printf("         => ");
        scanf("%[^\n]", pjt->data_entrega);
        getchar();
    } while (!valida_data(pjt->data_entrega));    
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Informacao atualizada ......              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

/// Retorna ID digitado pelo usuário
char* tela_excluir_projeto(void) {
    char *id;

    id = (char*) malloc(6*sizeof(char));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       ----- EXCLUIR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("            Digite o ID do Projeto: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

/// Retorna ID digitado pelo usuário
char* tela_recuperar_projeto(void) {
    char* id;

    id = (char*) malloc(6*sizeof(char));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       ----- RECUPERAR -----                     ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         ID do Projeto: \n");
        printf("         => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

/// Erro de acesso ao arquivo
void tela_erro_pjt(void) {
	system("cls || clear");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf(" ||                                                                 ||\n");
	printf(" ||                   >>>>>>>>    ERRO    <<<<<<<                   ||\n");
	printf(" ||                                                                 ||\n");
    printf(" ||   <<<<<  Nao foi possivel acessar o arquivo de projetos  >>>>>  ||\n");
	printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	getchar();
}


////////// FUNÇÕES DE ARQUIVAMENTO //////////////

/// Salva o objeto no arquivo. Recebe o objeto como parâmetro
void salvar_projeto(Projeto* pjt) {
    FILE *fp;
    fp = fopen("projetos.dat", "ab");
    if(fp == NULL) {
        tela_erro_pjt(); 
    }
    fwrite(pjt, sizeof(Projeto), 1, fp);
    fclose(fp);
}

/// Busca objeto no arquivo e retorna ele ou NULL. Recebe o ID como parâmetro 
Projeto* buscar_projeto(char* id) {
    FILE *fp;
    Projeto *pjt;
    pjt = (Projeto*) malloc(sizeof(Projeto));
    fp = fopen("projetos.dat", "rb");
    if(fp == NULL) {
        tela_erro_pjt();
    }
    while (fread(pjt, sizeof(Projeto), 1, fp)) {
        if ((strcmp(id, pjt->id) == 0) && (pjt->status == 1)) {
            fclose(fp);
            return pjt;
        }
    }
    fclose(fp);
    return NULL;
}

/// Exibe os dados do objeto. Recebe o objeto como parâmetro
void exibir_projeto(Projeto* pjt) {
    if (pjt == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
		printf(" ||               >>>>>> Projeto Inexistente <<<<<<                 ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	} 
    else {
        system("cls || clear");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                 >>>>>> Projeto Encontrado <<<<<<                ||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||      Nome:    %s \n", pjt->nome);
        printf(" ||      ID:      %s \n", pjt->id);
        printf(" ||      Entrega: %s \n", pjt->data_entrega);
        printf(" ||      Status:  %d \n", pjt->status);
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	}
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	getchar();
}

/// Regrava o objeto no arquivo. Recebe o objeto como parâmetro
void refazer_projeto(Projeto *pjt) {
    int achou;
    FILE *fp;
    Projeto *pjt_lido;

    pjt_lido = (Projeto*) malloc(sizeof(Projeto));
    fp = fopen("projetos.dat", "r+b");
    if(fp == NULL) {
        tela_erro_pjt();
    }
    achou = 0;
    while(fread(pjt_lido, sizeof(Projeto), 1, fp) && !achou) {
        if (strcmp(pjt_lido->id, pjt->id) == 0) {
            achou = 1;
            fseek(fp, -1*sizeof(Projeto), SEEK_CUR);
            fwrite(pjt, sizeof(Projeto), 1, fp);
        }
    }
    fclose(fp);
    free(pjt_lido);
}

/// Busca objeto no arquivo para trocar status e retornar ele mesmo ou NULL. Recebe o ID como parâmetro  
Projeto* buscar_e_recuperar_pjt(char *id) {
    FILE *fp;
    Projeto *pjt;

    pjt = (Projeto*) malloc(sizeof(Projeto));
    fp = fopen("projetos.dat", "rb");
    if (fp == NULL) {
        tela_erro_pjt();
    }
    while (fread(pjt, sizeof(Projeto), 1, fp)) {
        if ((strcmp(pjt->id, id) == 0) && (pjt->status == 0)) {
            pjt->status = 1;
            fclose(fp);
            return pjt;
        }
    }   
    fclose(fp);
    return NULL;
}

/// Gera um ID automático e sequencial com base no arquivo. Retorna o ID
char* gerar_id(void) {
    FILE *fp;
    Projeto *pjt;
    int id_gerado = 1;
    char *id;
    pjt = (Projeto*) malloc(sizeof(Projeto));
    id = (char*) malloc(6 * sizeof(char));
    fp = fopen("projetos.dat", "rb");
    if (fp != NULL) {
        while(fread(pjt, sizeof(Projeto), 1, fp) == 1) {
            id_gerado++;
        }
    }
    sprintf(id, "%05d", id_gerado);
    free(pjt);
    fclose(fp);
    return id;
}
