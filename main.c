#include <stdio.h> 

void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_funcionario(void);
void tela_cadastrar_funcionario(void);
void tela_pesquisar_funcionario(void);
void tela_atualizar_funcionario(void);
void tela_excluir_funcionario(void);

int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    tela_funcionario();
    tela_cadastrar_funcionario();
    tela_pesquisar_funcionario();
    tela_atualizar_funcionario();
    tela_excluir_funcionario();
    return 0;
}

void tela_principal(void) {
    char escolha;
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
    printf(" ||         [ 1 ] Funcionarios                                      ||\n");
    printf(" ||         [ 2 ] Identificacoes                                    ||\n");
    printf(" ||         [ 3 ] Atividades                                        ||\n");
    printf(" ||         [ 4 ] Tarefas                                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 0 ] Sair                                              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         Digite o numero da sua escolha: ");
    scanf("%c", &escolha);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
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
    printf(" ||  de funcionarios, simulando as funcionalides necessarias para   ||\n");
    printf(" ||  tal sistema. Criado apenas para fins didaticos.                ||\n");
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

void tela_funcionario(void) {
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
    printf(" ||                           FUNCIONARIOS                          ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||        [ 1 ] Cadastrar                                          ||\n");
    printf(" ||        [ 2 ] Pesquisar                                          ||\n");
    printf(" ||        [ 3 ] Atualizar                                          ||\n");
    printf(" ||        [ 4 ] Excluir                                            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||        [ 0 ] Voltar ao Menu Principal                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||        Digite o numero da sua escolha: ");
    scanf("%c", &escolha);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

void tela_cadastrar_funcionario(void) {
    char nome[51], cpf[12], email[51], cargo[51];
    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                            CADASTRO                             ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      Digite o Nome: ");
    scanf("%[ A-Za-zÇç]", nome);
    getchar();
    printf(" ||      Digite o CPF: ");
    scanf("%s", cpf);
    getchar();
    printf(" ||      Digite o Email: ");
    scanf("%[A-Za-zÇç0-9@._]", email);
    getchar();
    printf(" ||      Digite o Cargo/Funcao: ");
    scanf("%[ A-Za-zÇç]", cargo);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                     Funcionario cadastrado!                     ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\n");
    getchar();
}

void tela_pesquisar_funcionario(void) {
    char cpf[12];
    system("cls");  
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                             PESQUISA                            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      Digite o CPF: ");
    scanf("%s", cpf);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                      Funcionario Encontrado!                    ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}

void tela_atualizar_funcionario(void) {
    char cpf[12];
    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                           ATUALIZACAO                           ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      Digite o CPF: ");
    scanf("%s", cpf);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      Atualizacao efetuada!                      ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();  
}

void tela_excluir_funcionario(void) {
    char cpf[12];
    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                             EXCLUSAO                            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||      Digite o CPF: ");
    scanf("%s", cpf);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                         Acao realizada!                         ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}