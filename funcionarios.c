#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.h"

void modulo_funcionarios(void) {
    char opcao;
    do {
        opcao = tela_funcionarios();
        switch (opcao) {
            case '1': tela_adicionar_funcionario();
                      break;
            case '2': tela_pesquisar_funcionario();
                      break;
            case '3': tela_atualizar_funcionario();
                      break;
            case '4': tela_excluir_funcionario();
                      break;
        }
    } while (opcao != '0');
}


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


void tela_adicionar_funcionario(void) {

    char nome_funcionario[51];
    char cpf_funcionario[12];
    char cel_funcionario[12];
    char email_funcionario[51];
    char cargo_funcionario[51];

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
    printf("         Nome completo: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", nome_funcionario);
    getchar();
    printf("\n");
    printf("         CPF (apenas digitos): \n");
    printf("         => ");
    scanf("%[0-9]", cpf_funcionario);
    getchar();
    printf("\n");
    printf("         Numero de celular: \n");
    printf("         => ");
    scanf("%[0-9]", cel_funcionario);
    getchar();
    printf("\n");
    printf("         Email:  \n");
    printf("         => ");
    scanf("%[A-Za-z0-9@._]", email_funcionario);
    getchar();
    printf(" \n");
    printf("         Cargo/Funcao: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", cargo_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                     Funcionario cadastrado!                     ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_pesquisar_funcionario(void) {

    char cpf_funcionario[12];

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
    printf("         CPF do Funcionario (apenas digitos): \n");
    printf("         => ");
    scanf("%[0-9]", cpf_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    // exemplo de como pode ficar apos a busca realizada
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ...... Funcionario Encontrado ......              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      Nome:                                                      ||\n");
    printf(" ||      Cargo:                                                     ||\n");
    printf(" ||      Contato:                                                   ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_atualizar_funcionario(void) {

    char cpf_funcionario[12];
    char editar;
    
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
    printf("         CPF do Funcionario (apenas digitos): \n");
    printf("         => ");
    scanf("%s", cpf_funcionario);
    getchar();
    printf("\n");

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
        printf(" ||                                                                 ||\n");
        printf(" ||         [ 1 ] Nome                                              ||\n");
        printf(" ||         [ 2 ] CPF                                               ||\n");
        printf(" ||         [ 3 ] Email                                             ||\n");
        printf(" ||         [ 4 ] Celular                                           ||\n");
        printf(" ||         [ 5 ] Cargo                                             ||\n");
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
            case '1': tela_editar_nome();
                      break;
            case '2': tela_editar_cpf();
                      break;
            case '3': tela_editar_email();
                      break;
            case '4': tela_editar_cel();
                      break;
            case '5': tela_editar_cargo();
                      break;
        }
    } while (editar != '0');
}


void tela_editar_nome(void) {

    char nome_funcionario[51];

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
    printf("         Novo nome do funcionario: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", nome_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ...... Atualizacao efetuada ......                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}


void tela_editar_cpf(void) {

    char cpf_funcionario[12];

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
    printf("         Novo CPF do funcionario: \n");
    printf("         => ");
    scanf("%[0-9]", cpf_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ...... Atualizacao efetuada ......                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_editar_cel(void) {

    char cel_funcionario[12];

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
    printf("         Novo numero de celular do funcionario: \n");
    printf("         => ");
    scanf("%[0-9]", cel_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ...... Atualizacao efetuada ......                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_editar_email(void) {

    char email_funcionario[51];

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
    printf("         Novo email do funcionario: \n");
    printf("         => ");
    scanf("%[A-Za-z0-9@._]", email_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ...... Atualizacao efetuada ......                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_editar_cargo(void) {

    char cargo_funcionario[51];
    
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
    printf("         Novo cargo do funcionario: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", cargo_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               ...... Atualizacao efetuada ......                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}

void tela_excluir_funcionario(void) {
    
    char cpf_funcionario[12];

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
    printf("         CPF do Funcionario (apenas digitos): \n");
    printf("         => ");
    scanf("%s", cpf_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  ...... Acao realizada ......                   ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}