#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "atividades.h"
#include "projetos.h"
#include "relatorios.h"
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
            case '5': recuperar_atividade();
                      break;
            case '6': listar_atividades();
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

void pesquisar_atividade(void) {
    Atividade *atv;
    char *id;

    id = tela_pesquisar_atividade();
    atv = buscar_atividade(id);
    exibir_atividade(atv);

    free(atv);
    free(id);
}

void atualizar_atividade(void) {
    Atividade *atv;
	char *id;

	id = tela_atualizar_atividade();
	atv = buscar_atividade(id);
	if (atv == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||               >>>>>> Atividade inexistente <<<<<<               ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
  	} 
    else {
		tela_editar_atividade(atv);
		refazer_atividade(atv);
		free(atv);
	}
	free(id);
}

void excluir_atividade(void) {
    Atividade *atv;
	char *id;

	id = tela_excluir_atividade();
	atv = (Atividade*) malloc(sizeof(Atividade));
	atv = buscar_atividade(id);
	if (atv == NULL) {
    	printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||              >>>>>> Atividade nao encontrada! <<<<<<            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
  	} 
    else {
		atv->status = 0;
		refazer_atividade(atv);
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                 ...... Atividade excluida ......                ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
		free(atv);
	}
	free(id);
}

void recuperar_atividade(void) {
    Atividade *atv;
    char *id;

    id = tela_recuperar_atv();
    atv = (Atividade*) malloc(sizeof(Atividade));
    atv = buscar_e_recuperar_atv(id);
    if(atv == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||              >>>>>> Atividade nao encontrada! <<<<<<            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
    }
    else {
        refazer_atividade(atv);
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                ...... Atividade recuperada ......               ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
        free(atv);
    }
    free(id);
}

/// Menu de atividades
char tela_atividades(void) {
    char escolha;

    system("cls || clear");
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
    printf(" ||         [ 5 ] Recuperar atividade excluída                      ||\n");
    printf(" ||         [ 6 ] Listar todas as Atividades                        ||\n");
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

/// Preenche os dados e retorna a estrutura preenchida
Atividade* tela_adicionar_atividade(void) {
    Atividade *atv;

    atv = (Atividade*) malloc(sizeof(Atividade));
    system("cls || clear");
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
        scanf("%[^\n]", atv->nome_atv);
        getchar();
    } while(!valida_nome(atv->nome_atv));
    printf("\n");

    do {
        printf("            ID do Projeto relacionado: \n");
        printf("            => ");
        scanf("%[^\n]", atv->id_pjt);
        getchar();
    } while (!valida_id(atv->id_pjt, 5));
    printf("\n");

    do {
        printf("            CPF do Funcionario atribuido: \n");
        printf("            => ");
        scanf("%[^\n]", atv->cpf);
        getchar();
    } while (!valida_cpf(atv->cpf));   
    printf("\n");

    do {
        printf("            Data de entrega da atividade(dd/mm/aaaa): \n");
        printf("            => ");
        scanf("%[^\n]", atv->data_atv);
        getchar();
    } while (!valida_data(atv->data_atv) || !verifica_data_pjt(atv->id_pjt, atv->data_atv));

    printf("\n");
    strcpy(atv->id, gerar_id_atv());
    printf("            O ID da atividade:\n");
    printf("            => %s \n", atv->id);
    
    atv->status = 1;
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Atividade cadastrada ......               ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();

    return atv;
}

/// Retorna ID digitado pelo usuário
char* tela_pesquisar_atividade(void) {
    char *id;

    id = (char*) malloc(6*sizeof(char));
    system("cls || clear");
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
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

/// Retorna ID digitado pelo usuário
char* tela_atualizar_atividade(void) {
    char* id;
     
    id = (char*) malloc(6*sizeof(char));
    system("cls || clear");
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
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

/// Menu de escolha do atributo a ser editado. Recebe o objeto
void tela_editar_atividade(Atividade* atv) {
    char editar;

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
            case '1': tela_editar_titulo_atividade(atv);
                      break;
            case '2': tela_editar_cpf_atividade(atv);
                      break;
            case '3': tela_editar_data_atividade(atv);
                      break;
            case '4': tela_editar_id_atribuido(atv);
                      break;
        }          
    } while (editar != '0');
}

/// Altera o atributo Nome do objeto recebido
void tela_editar_titulo_atividade(Atividade* atv) {
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
        scanf("%[^\n]", atv->nome_atv);
        getchar();
    } while (!valida_nome(atv->nome_atv));
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

/// Altera o atributo cpfDoFuncionario do objeto recebido
void tela_editar_cpf_atividade(Atividade* atv) {
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
        scanf("%[^\n]", atv->cpf);
        getchar();
    } while (!valida_cpf(atv->cpf));
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

/// Altera o atributo dataDeEntrega do objeto recebido
void tela_editar_data_atividade(Atividade* atv) {
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
        scanf("%[^\n]", atv->data_atv);
        getchar();
    } while (!valida_data(atv->data_atv) || !verifica_data_pjt(atv->id_pjt, atv->data_atv));
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

/// Altera o atributo idProjeto do objeto recebido
void tela_editar_id_atribuido(Atividade* atv) {
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
        scanf("%[^\n]", atv->id_pjt);
        getchar();
    } while (!valida_id(atv->id_pjt, 5));
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
char* tela_excluir_atividade(void) {
    char* id;

    id = (char*) malloc(6*sizeof(char));
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
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

/// Retorna ID digitado pelo usuário
char* tela_recuperar_atv(void) {
    char* id;

    id = (char*) malloc(6*sizeof(char));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       ----- RECUPERAR -----                     ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         ID da Atividade: \n");
        printf("         => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

/// Erro de acesso ao arquivo
void tela_erro_atv(void) {
	system("cls || clear");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf(" ||                                                                 ||\n");
	printf(" ||                   >>>>>>>>    ERRO    <<<<<<<                   ||\n");
	printf(" ||                                                                 ||\n");
    printf(" ||   <<<<< Nao foi possivel acessar o arquivo de atividades >>>>>  ||\n");
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
void salvar_atividade(Atividade* atv) {
    FILE *fp;

    fp = fopen("atividades.dat", "ab");
    if (fp == NULL) {
        tela_erro_atv();
    }
    fwrite(atv, sizeof(Atividade), 1, fp);

    fclose(fp);
}

/// Busca objeto no arquivo e retorna ele ou NULL. Recebe o ID como parâmetro 
Atividade* buscar_atividade(char* id) {
    FILE* fp;
    Atividade* atv; 
    
    atv = (Atividade*) malloc(sizeof(Atividade));
    fp = fopen("atividades.dat", "rb");
    if (fp == NULL) {
        tela_erro_atv();
    }
    while (fread(atv, sizeof(Atividade), 1, fp)) {
        if ((strcmp(id, atv->id) == 0) && (atv->status == 1)) {
            fclose(fp);
            return atv;
        }
    }
    fclose(fp);
    return NULL;
}

/// Exibe os dados do objeto. Recebe o objeto como parâmetro
void exibir_atividade(Atividade* atv) {
    if (atv == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||               >>>>>> Atividade Inexistente <<<<<<               ||\n");
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
        printf(" ||                 >>>>>> Atividade Encontrada <<<<<<              ||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||      Titulo/Nome:     %s \n", atv->nome_atv);
        printf(" ||      Data de entrega: %s \n", atv->data_atv);
        printf(" ||      ID da Atividade: %s \n", atv->id);
        printf(" ||      ID do Projeto:   %s \n", atv->id_pjt);
        printf(" ||      Funcionario:     %s \n", atv->cpf);
        printf(" ||      Status:          %d \n", atv->status);
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
void refazer_atividade(Atividade* atv) {
	int achou;
	FILE* fp;
	Atividade* atv_lido;

	atv_lido = (Atividade*) malloc(sizeof(Atividade));
	fp = fopen("atividades.dat", "r+b");
	if (fp == NULL) {
		tela_erro_atv();
	}
	achou = 0;
	while (fread(atv_lido, sizeof(Atividade), 1, fp) && !achou) {
		if (strcmp(atv_lido->id, atv->id) == 0) {
			achou = 1;
			fseek(fp, -1*sizeof(Atividade), SEEK_CUR);
        	fwrite(atv, sizeof(Atividade), 1, fp);
		}
	}
    free(atv_lido);
	fclose(fp);
}

/// Busca objeto no arquivo para trocar status e retornar ele mesmo ou NULL. Recebe o ID como parâmetro  
Atividade* buscar_e_recuperar_atv(char *id) {
    FILE *fp;
    Atividade *atv;

    atv = (Atividade*) malloc(sizeof(Atividade));
    fp = fopen("atividades.dat", "rb");
    if (fp == NULL) {
        tela_erro_atv();
    }
    while (fread(atv, sizeof(Atividade), 1, fp)) {
        if ((strcmp(atv->id, id) == 0) && (atv->status == 0)) {
            atv->status = 1;
            fclose(fp);
            return atv;
        }
    }   
    fclose(fp);
    return NULL;
}

/// Gera um ID automático e sequencial com base no arquivo. Retorna o ID
char* gerar_id_atv(void) {
    FILE *fp;
    Atividade *atv;
    int id_gerado = 1;
    char *id;
    atv = (Atividade*) malloc(sizeof(Atividade));
    id = (char*) malloc(6 * sizeof(char));
    fp = fopen("atividades.dat", "rb");
    if (fp != NULL) {
        while(fread(atv, sizeof(Atividade), 1, fp) == 1) {
            id_gerado++;
        }
    }
    
    sprintf(id, "%05d", id_gerado);
    free(atv);
    fclose(fp);
    return id;
}

/// Verifica se a data limite da atividade é menor que a data de entregue do projeto. Recebe ID do projeto e a Data da atividade
int verifica_data_pjt(char *id_pjt, char *data) {
    FILE *fp;
    Projeto *pjt;
    pjt = (Projeto*) malloc(sizeof(Projeto));
    fp = fopen("projetos.dat", "rb");
    if(fp == NULL) {
        tela_erro_pjt();
    }
    while (fread(pjt, sizeof(Projeto), 1, fp)) {
        if(strcmp(pjt->id, id_pjt) == 0) {
            if(strcmp(inv_data(pjt->data_entrega), inv_data(data)) < 0) {
                fclose(fp);
                free(pjt);
                return 0;
            }
        } 
    }
    fclose(fp);
    free(pjt);
    return 1;
}
