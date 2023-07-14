#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "funcionarios.h"
#include "relatorios.h"
#include "validacoes.h"

void modulo_funcionarios(void) {
    char opcao;
    do {
        opcao = tela_funcionarios();
        switch (opcao) {
            case '1': adicionar_funcionario();
                      break;
            case '2': pesquisar_funcionario();
                      break;
            case '3': atualizar_funcionario();
                      break;
            case '4': excluir_funcionario();
                      break;
            case '5': recuperar_funcionario();
                      break;
            case '6': listar_funcionarios();
                      break;
        }
    } while (opcao != '0');
}

void adicionar_funcionario(void) {
    Funcionario *fnc;

    fnc = tela_adicionar_funcionario();
    salvar_funcionario(fnc);

    free(fnc);
}

void pesquisar_funcionario(void) {
    Funcionario *fnc;
    char *cpf;
    
    cpf = tela_pesquisar_funcionario();
    fnc = buscar_funcionario(cpf);
    exibir_funcionario(fnc);

    free(fnc);
    free(cpf);
}

void atualizar_funcionario(void) {
    Funcionario *fnc;
	char *cpf;

	cpf = tela_atualizar_funcionario();
	fnc = buscar_funcionario(cpf);
	if (fnc == NULL) {
    	printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||             >>>>>> Funcionario nao encontrado! <<<<<<           ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
  	} 
    else {
		  tela_editar_funcionario(fnc);
		  refazer_funcionario(fnc);
		  free(fnc);
	}
	free(cpf);
}

void excluir_funcionario(void) {
    Funcionario *fnc;
	char *cpf;

	cpf = tela_excluir_funcionario();
	fnc = (Funcionario*) malloc(sizeof(Funcionario));
	fnc = buscar_funcionario(cpf);
	if (fnc == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||             >>>>>> Funcionario nao encontrado! <<<<<<           ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
  	} 
    else {
		fnc->status = 0;
		refazer_funcionario(fnc);
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                ...... Funcionario excluido ......               ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
		free(fnc);
	}
	free(cpf);
}

void recuperar_funcionario(void) {
    Funcionario *fnc;
    char *cpf;

    cpf = tela_recuperar_funcionario();
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fnc = buscar_e_recuperar_fnc(cpf);
    if(fnc == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
    	printf(" ||             >>>>>> Funcionario nao encontrado! <<<<<<           ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
    }
    else {
        refazer_funcionario(fnc);
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                ...... Funcionario recuperado ......             ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
	    printf(" ||               ------- Enter para continuar! --------            ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        getchar();
        free(fnc);
    }
    free(cpf);
}

/// Menu de funcionarios
char tela_funcionarios(void) {
    char escolha;

    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                   >>>>>>  FUNCIONARIOS  <<<<<<                  ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||        [ 1 ] Adicionar um novo funcionario                      ||\n");
    printf(" ||        [ 2 ] Pesquisar funcionario ja cadastrado                ||\n");
    printf(" ||        [ 3 ] Atualizar os dados de um funcionario               ||\n");
    printf(" ||        [ 4 ] Excluir funcionario do sistema                     ||\n");
    printf(" ||        [ 5 ] Recuperar funcionario excluido                     ||\n");
    printf(" ||        [ 6 ] Listar todos os Funcionarios                       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||        [ 0 ] Voltar ao Menu Principal                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf("       Digite o numero da sua escolha: ");
    scanf("%c", &escolha);
    getchar();

    return escolha;
}

/// Preenche os dados e retorna a estrutura preenchida
Funcionario* tela_adicionar_funcionario(void) {
    Funcionario *fnc;
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ADICIONAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||           Obs.: Digite as informacoes com atencao               ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Nome completo: \n");
        printf("         => ");
        scanf("%[^\n]", fnc->nome);
        getchar();
    } while (!valida_nome(fnc->nome));
    printf("\n");
    do {
        printf("         CPF do Funcionario: \n");
        printf("         => ");  
        scanf("%[^\n]", fnc->cpf);
        getchar();
    } while (!valida_cpf(fnc->cpf) || !verifica_cpf_cadastrado(fnc->cpf));
    printf("\n");
    do {
        printf("         Numero de celular: \n");
        printf("         => ");
        scanf("%[^\n]", fnc->celular);
        getchar();
    } while(!valida_cel(fnc->celular));
    printf("\n");
    do {
        printf("         Email:  \n");
        printf("         => ");
        scanf("%[^\n]", fnc->email);
        getchar();
    } while (!valida_email(fnc->email));
    printf("\n");
    do {
        printf("         Cargo/Funcao: \n");
        printf("         => ");
        scanf("%[^\n]", fnc->cargo);
        getchar();
    } while (!valida_nome(fnc->cargo));
    fnc->status = 1;
    printf("\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                     Funcionario cadastrado!                     ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();

    return fnc;
}

/// Retorna cpf digitado pelo usuário
char* tela_pesquisar_funcionario(void) {
    char *cpf;
    system("cls||clear");  
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- PESQUISAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    cpf = (char*) malloc(12*sizeof(char));
    do {
        printf("         CPF do Funcionario: \n");
        printf("         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));
    printf("\n");

    return cpf;
}

/// Retorna cpf digitado
char* tela_atualizar_funcionario(void) {
    char* cpf;
    
    cpf = (char*) malloc(12*sizeof(char));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                     ----- ATUALIZACAO -----                     ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         CPF do Funcionario: \n");
        printf("         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));
    printf("\n");

    return cpf;
}

/// Menu de escolha do atributo a ser editado. Recebe o objeto
void tela_editar_funcionario(Funcionario *fnc) {
    char editar;
    do {
        system("cls||clear");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||                        ----- EDITAR -----                       ||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||         [ 1 ] Nome                                              ||\n");
        printf(" ||         [ 2 ] Email                                             ||\n");
        printf(" ||         [ 3 ] Celular                                           ||\n");
        printf(" ||         [ 4 ] Cargo                                             ||\n");
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
            case '1': tela_editar_nome(fnc);
                      break;
            case '2': tela_editar_email(fnc);
                      break;
            case '3': tela_editar_cel(fnc);
                      break;
            case '4': tela_editar_cargo(fnc);
                      break;
        }
    } while (editar != '0');
}

/// Altera o atributo Nome do objeto recebido
void tela_editar_nome(Funcionario* fnc) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                        ----- EDITAR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Novo nome do funcionario: \n");
        printf("         => ");
        scanf("%[^\n]", fnc->nome);
        getchar();
    } while(!valida_nome(fnc->nome));
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ...... Informacao atualizada ......               ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

/// Altera o atributo Celular do objeto recebido
void tela_editar_cel(Funcionario* fnc) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                        ----- EDITAR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Novo numero de celular do funcionario: \n");
        printf("         => ");
        scanf("%[^\n]", fnc->celular);
        getchar();
    } while(!valida_cel(fnc->celular));
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

/// Altera o atributo Email do objeto recebido
void tela_editar_email(Funcionario* fnc) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                        ----- EDITAR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Novo email do funcionario: \n");
        printf("         => ");
        scanf("%[^\n]", fnc->email);
        getchar();
    } while (!valida_email(fnc->email));
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

/// Altera o atributo Cargo do objeto recebido
void tela_editar_cargo(Funcionario* fnc) {
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                        ----- EDITAR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         Novo cargo do funcionario: \n");
        printf("         => ");
        scanf("%[^\n]", fnc->cargo);
        getchar();
    }  while(!valida_nome(fnc->cargo));
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

/// Retorna cpf digitado
char* tela_excluir_funcionario(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       ----- EXCLUIR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         CPF do Funcionario: \n");
        printf("         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));
    printf("\n");

    return cpf;
}

/// Retorna cpf digitado
char* tela_recuperar_funcionario(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    system("cls||clear");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       ----- RECUPERAR -----                     ||\n");
    printf(" ||                                                                 ||\n");
    do {
        printf("         CPF do Funcionario: \n");
        printf("         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));
    printf("\n");

    return cpf;
}

/// Erro de acesso ao arquivo
void tela_erro(void) {
	system("cls||clear");
	printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf(" ||                                                                 ||\n");
	printf(" ||                   >>>>>>>>    ERRO    <<<<<<<                   ||\n");
	printf(" ||                                                                 ||\n");
    printf(" ||  <<<<< Nao foi possivel acessar o arquivo de funcionarios >>>>> ||\n");
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
void salvar_funcionario(Funcionario* fnc) {
    FILE *fp;
    fp = fopen("funcionarios.dat", "ab");
    if (fp == NULL) {
        tela_erro();
    }
    fwrite(fnc, sizeof(Funcionario), 1, fp);
    fclose(fp);
}

/// Busca objeto no arquivo e retorna ele ou NULL. Recebe o cpf como parâmetro 
Funcionario* buscar_funcionario(char* cpf) {
    FILE *fp;
    Funcionario* fnc;

    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    while (fread(fnc, sizeof(Funcionario), 1, fp)) {
        if ((strcmp(fnc->cpf, cpf) == 0) && (fnc->status == 1)) {
            fclose(fp);
            return fnc;
        }
    }   
    fclose(fp);
    return NULL;
}

/// Busca objeto no arquivo para trocar status e retornar ele mesmo ou NULL. Recebe o cpf como parâmetro  
Funcionario* buscar_e_recuperar_fnc(char *cpf) {
    FILE *fp;
    Funcionario *fnc;

    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    while (fread(fnc, sizeof(Funcionario), 1, fp)) {
        if ((strcmp(fnc->cpf, cpf) == 0) && (fnc->status == 0)) {
            fnc->status = 1;
            fclose(fp);
            return fnc;
        }
    }   
    fclose(fp);
    return NULL;
}

/// Exibe os dados do objeto. Recebe o objeto como parâmetro
void exibir_funcionario(Funcionario* fnc) {
	if (fnc == NULL) {
        printf(" ||                                                                 ||\n");
        printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
        printf(" ||                                                                 ||\n");
		printf(" ||               >>>>>> Funcionario Inexistente <<<<<<             ||\n");
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
        printf(" ||               >>>>>> Funcionario Encontrado <<<<<<              ||\n");
        printf(" ||                                                                 ||\n");
        printf(" ||      Nome:    %s \n", fnc->nome);
        printf(" ||      Cargo:   %s \n", fnc->cargo);
        printf(" ||      Email:   %s \n", fnc->email);
        printf(" ||      Celular: %s \n", fnc->celular);
        printf(" ||      CPF:     %s \n", fnc->cpf);
        printf(" ||      Status:  %d \n", fnc->status);
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
void refazer_funcionario(Funcionario* fnc) {
	int achou;
	FILE* fp;
	Funcionario* fnc_lido;

	fnc_lido = (Funcionario*) malloc(sizeof(Funcionario));
	fp = fopen("funcionarios.dat", "r+b");
	if (fp == NULL) {
		tela_erro();
	}
	achou = 0;
	while (fread(fnc_lido, sizeof(Funcionario), 1, fp) && !achou) {
		if (strcmp(fnc_lido->cpf, fnc->cpf) == 0) {
			achou = 1;
			fseek(fp, -1*sizeof(Funcionario), SEEK_CUR);
        	fwrite(fnc, sizeof(Funcionario), 1, fp);
		}
	}
    free(fnc_lido);
	fclose(fp);
}

/// Verifica se existe algum objeto no arquivo com o mesmo cpf. Recebe o cpf como parâmetro
int verifica_cpf_cadastrado(char *cpf) {
    FILE *fp;
    Funcionario *fnc;
    fnc = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionarios.dat", "rb");
    while(fread(fnc, sizeof(Funcionario), 1, fp)) {
        if(strcmp(fnc->cpf, cpf) == 0) {
            free(fnc);
            return 0;
        }
    }
    free(fnc);
    return 1;
}