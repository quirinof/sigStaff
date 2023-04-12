#include <stdio.h> 
#include <stdlib.h>

char tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);

void modulo_funcionarios(void);
char tela_funcionarios(void);
void tela_adicionar_funcionario(void);
void tela_pesquisar_funcionario(void);
void tela_atualizar_funcionario(void);
void tela_excluir_funcionario(void);

void modulo_projetos(void);
char tela_projetos(void);
void tela_adicionar_projeto(void);
void tela_pesquisar_projeto(void);
void tela_atualizar_projeto(void);
void tela_excluir_projeto(void);

void modulo_atividades(void);
char tela_atividades(void);
void tela_adicionar_atividade(void);
void tela_pesquisar_atividade(void);
void tela_atualizar_atividade(void);
void tela_excluir_atividade(void);


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


void tela_sobre(void) {

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||           Universidade Federal do Rio Grande do Norte           ||\n");
    printf(" ||               Centro de Ensino Superior do Serido               ||\n");
    printf(" ||            Departamento de Computacao e Tecnologia              ||\n");
    printf(" ||                   Disciplina -- Programacao                     ||\n");
    printf(" ||          Projeto de Sistema de Controle de Funcionarios         ||\n");
    printf(" ||         Desenvolvido por @quirinof -- desde marco, 2023         ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||        ====== Sistema de Controle de Funcionarios ======        ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||  Temos aqui um projeto da disciplina de programacao, que serve  ||\n");
    printf(" ||  para nos(alunos) sermos avaliados mediante os conhecimentos    ||\n");
    printf(" ||  adquiridos durante o periodo. Contem um sistema para controle  ||\n");
    printf(" ||  de funcionarios de uma software house, simulando as            ||\n");
    printf(" ||  funcionalides necessarias para tal sistema. Criado apenas      ||\n");
    printf(" ||  para fins didaticos.                                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_equipe(void) {

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||           Universidade Federal do Rio Grande do Norte           ||\n");
    printf(" ||               Centro de Ensino Superior do Serido               ||\n");
    printf(" ||            Departamento de Computacao e Tecnologia              ||\n");
    printf(" ||                   Disciplina -- Programacao                     ||\n");
    printf(" ||          Projeto de Sistema de Controle de Funcionarios         ||\n");
    printf(" ||         Desenvolvido por @quirinof -- desde marco, 2023         ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||        ====== Sistema de Controle de Funcionarios ======        ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||               Este projeto foi desenvolvido por:                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                        Matheus Quirino                          ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||           * Email: matheusquinoff@gmail.com                     ||\n");
    printf(" ||           * Git: https://github.com/quirinof                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


char tela_principal(void) {

    char escolha;

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
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

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
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

    char nome[51];
    char cpf_funcionario[12];
    char celular[12];
    char email[51];
    char cargo[51];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ADICIONAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||           Obs.: Digite as informacoes com atencao               ||\n");
    printf(" ||                                                                 ||\n");
    printf("         Nome completo: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", nome);
    getchar();
    printf("\n");
    printf("         CPF (apenas digitos): \n");
    printf("         => ");
    scanf("%[0-9]", cpf_funcionario);
    getchar();
    printf("\n");
    printf("         Numero de celular: \n");
    printf("         => ");
    scanf("%[0-9]", celular);
    getchar();
    printf("\n");
    printf("         Email:  \n");
    printf("         => ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
    printf(" \n");
    printf("         Cargo/Funcao: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", cargo);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                     Funcionario cadastrado!                     ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||     Nome: %s    \t                                                \n", nome);
    printf(" ||     Cargo: %s   \t                                                \n", cargo);
    printf(" ||     CPF: %s     \t                                                \n", cpf_funcionario);
    printf(" ||     Email: %s   \t                                                \n", email);
    printf(" ||     Celular: %s \t                                                \n", celular);
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_pesquisar_funcionario(void) {

    char cpf_funcionario[12];

    system("cls");  
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- PESQUISAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf("         CPF do Funcionario (apenas digitos): \n");
    printf("         => ");
    scanf("%s", cpf_funcionario);
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
    
    char editar;
    char cpf_funcionario[12];
    char novo_nome_funcionario[51];
    
    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                     ----- ATUALIZACAO -----                     ||\n");
    printf(" ||                                                                 ||\n");
    printf("         CPF do Funcionario (apenas digitos): \n");
    printf("         => ");
    scanf("%s", cpf_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                          __ EDITAR __                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Nome                                              ||\n");
    printf(" ||         [ 2 ] Cargo                                             ||\n");
    printf(" ||         [ 3 ] CPF                                               ||\n");
    printf(" ||         [ 4 ] Email                                             ||\n");
    printf(" ||         [ 5 ] Celular                                           ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite sua escolha: ");
    scanf("%c", &editar);
    getchar();
    printf("\n");
    // exemplo de escolha para nome 
    printf("         Novo nome do funcionario: \n");
    printf("         => ");
    scanf("%[^\n]", novo_nome_funcionario);
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

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                 >>>>>     FUNCIONARIOS     <<<<<                ||\n");
    printf(" ||                                                                 ||\n");
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


void modulo_projetos(void) {
    char opcao;
    do {
        opcao = tela_projetos();
        switch (opcao) {
            case '1': tela_adicionar_projeto();
                      break;
            case '2': tela_pesquisar_projeto();
                      break;
            case '3': tela_atualizar_projeto();
                      break;
            case '4': tela_excluir_projeto();
                      break;
        }
    } while (opcao != '0');
}

char tela_projetos(void) {

    char escolha;

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                     >>>>>>  PROJETOS  <<<<<<                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Adicionar novo projeto                            ||\n");
    printf(" ||         [ 2 ] Pesquisar por projeto existente                   ||\n");
    printf(" ||         [ 3 ] Atualizar um projeto em andamento                 ||\n");
    printf(" ||         [ 4 ] Excluir projeto                                   ||\n");
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


void tela_adicionar_projeto(void) {

    char titulo_projeto[51];
    char id_projeto[5];
    char cpf_funcionario[12];
    char data_limite_projeto[11];
    char status_projeto[27];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ADICIONAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf("            Titulo/Nome: \n");
    printf("            => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", titulo_projeto);
    getchar();
    printf("\n"); 
    printf("            ID do Projeto: \n");
    printf("            => ");
    scanf("%[0-9]", id_projeto);
    getchar();
    printf("\n");
    printf("            CPF do funcionario atribuido: \n");
    printf("            => ");
    scanf("%[0-9]", cpf_funcionario);
    getchar();
    printf("\n");
    printf("            Data limite para entrega (DD/MM/AAAA): \n");
    printf("            => ");
    scanf("%[0-9/]", data_limite_projeto);
    getchar();
    printf("\n");
    printf("            Status do Projeto: \n");
    printf("            => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", status_projeto);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Projeto cadastrado ......                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_pesquisar_projeto(void) {

    char id_projeto[5];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- PESQUISAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da Projeto: \n");
    printf("           => ");
    scanf("%[0-9]", id_projeto);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Projeto Encontrado ......                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_atualizar_projeto(void) {

    char id_projeto[5];
    char nome_novo_projeto[51];
    char editar;

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ATUALIZAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID do Projeto: \n");
    printf("           => ");
    scanf("%[0-9]", id_projeto);
    getchar();
    printf("\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                          __ EDITAR __                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Titulo do Projeto                                 ||\n");
    printf(" ||         [ 2 ] ID do Projeto                                     ||\n");
    printf(" ||         [ 3 ] CPF do funcionario atribuido                      ||\n");
    printf(" ||         [ 4 ] Data Limite para entrega                          ||\n");
    printf(" ||         [ 5 ] Status do Projeto                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite sua escolha: ");
    scanf("%c", &editar);
    getchar();
    printf("\n");
    // exemplo de escolha para nome do projeto
    printf("         Novo titulo de projeto: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", nome_novo_projeto);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Informacao atualizada ......              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}


void tela_excluir_projeto(void) {

    char id_projeto[5];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                   >>>>>     PROJETOS     <<<<<                  ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       ----- EXCLUIR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID do Projeto: \n");
    printf("           => ");
    scanf("%[0-9]", id_projeto);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  ...... Projeto excluido ......                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void modulo_atividades(void) {
    char opcao;
    do {
        opcao = tela_atividades();
        switch (opcao) {
            case '1': tela_adicionar_atividade();
                      break;
            case '2': tela_pesquisar_atividade();
                      break;
            case '3': tela_atualizar_atividade();
                      break;
            case '4': tela_excluir_atividade();
                      break;
        }
    } while (opcao != '0');
}

char tela_atividades(void) {

    char escolha;

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
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


void tela_adicionar_atividade(void) {

    char titulo_atividade[51];
    char id_atividade[6];
    char id_projeto[5];
    char descricao_atividade[301];
    char cpf_funcionario[12];
    char data_inicio_atividade[11];
    char status_atividade[27];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ADICIONAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf("            Titulo da atividade: \n");
    printf("            => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", titulo_atividade);
    getchar();
    printf("\n");
    printf("            ID da atividade: \n");
    printf("            => ");
    scanf("%[0-9]", id_atividade);
    getchar();
    printf("\n");
    printf("            Descricao: \n");
    printf("            => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", descricao_atividade);
    getchar();
    printf("\n");
    printf("            ID do projeto relacionada: \n");
    printf("            => ");
    scanf("%[0-9]", id_projeto);
    getchar();
    printf("\n");
    printf("            CPF do funcionario encarregado: \n");
    printf("            => ");
    scanf("%[0-9]", cpf_funcionario);
    getchar();         
    printf("\n");
    printf("            Data de inicio (DD/MM/AAAA): \n");
    printf("            => ");
    scanf("%[0-9/]", data_inicio_atividade);
    getchar();
    printf("\n");
    printf("            Status da atividade: \n");
    printf("            => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", status_atividade);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Atividade incluida ......                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_pesquisar_atividade(void) {

    char id_atividade[6];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- PESQUISAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da atividade: \n");
    printf("           => ");
    scanf("%[0-9]", id_atividade);
    getchar();
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
    char titulo_novo_atividade[51];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      ----- ATUALIZAR -----                      ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da Atividade: \n");
    printf("           => ");
    scanf("%[0-9]", id_atividade);
    getchar();
    printf("\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                          __ EDITAR __                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Titulo da Atividade                               ||\n");
    printf(" ||         [ 2 ] Descricao                                         ||\n");
    printf(" ||         [ 3 ] CPF do funcionario encarregado                    ||\n");
    printf(" ||         [ 4 ] Data de Inicio                                    ||\n");
    printf(" ||         [ 5 ] Status da Atividade                               ||\n");
    printf(" ||         [ 6 ] ID do Projeto                                     ||\n");
    printf(" ||         [ 7 ] ID da Atividade                                   ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite sua escolha: ");
    scanf("%c", &editar);
    getchar();
    printf("\n");
    // exemplo de escolha para titulo da atividade
    printf("         Novo titulo de atividade: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", titulo_novo_atividade);
    getchar();
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

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  >>>>>     ATIVIDADES     <<<<<                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       ----- EXCLUIR -----                       ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da Atividade: \n");
    printf("           => ");
    scanf("%[0-9]", id_atividade);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                  ...... Atividade deletada ......               ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}