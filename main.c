#include <stdio.h> 
#include <stdlib.h>

void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);

void tela_funcionario(void);
void tela_adicionar_funcionario(void);
void tela_pesquisar_funcionario(void);
void tela_atualizar_funcionario(void);
void tela_excluir_funcionario(void);

void tela_tarefa(void);
void tela_adicionar_tarefa(void);
void tela_pesquisar_tarefa(void);
void tela_atualizar_tarefa(void);
void tela_excluir_tarefa(void);

void tela_atividade(void);
void tela_adicionar_atividade(void);
void tela_pesquisar_atividade(void);
void tela_atualizar_atividade(void);
void tela_excluir_atividade(void);


int main(void) {

    tela_sobre();
    tela_equipe();
    tela_principal();

    tela_funcionario();
    tela_adicionar_funcionario();
    tela_pesquisar_funcionario();
    tela_atualizar_funcionario();
    tela_excluir_funcionario();

    tela_tarefa();
    tela_adicionar_tarefa();
    tela_pesquisar_tarefa();
    tela_atualizar_tarefa();
    tela_excluir_tarefa();

    tela_atividade();
    tela_adicionar_atividade();
    tela_pesquisar_atividade();
    tela_atualizar_atividade();
    tela_excluir_atividade();

    return 0;
}


void tela_sobre(void) {

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


void tela_principal(void) {

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
    printf(" ||                          MENU PRINCIPAL                         ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Funcionarios                                      ||\n");
    printf(" ||         [ 2 ] Tarefas                                           ||\n");
    printf(" ||         [ 3 ] Atividades                                        ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 0 ] Sair                                              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf("       Digite o numero da sua escolha: ");
    scanf("%c", &escolha);
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
    printf(" ||        [ 1 ] Adicionar um funcionario novo                      ||\n");
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
    printf(" ||                            ADICIONAR                            ||\n");
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
    printf(" ||                            PESQUISAR                            ||\n");
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
    printf(" ||                      Funcionario Encontrado!                    ||\n");
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
    char nome_novo_funcionario[51];
    
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
    printf("         CPF do Funcionario (apenas digitos): \n");
    printf("         => ");
    scanf("%s", cpf_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                             EDITAR                              ||\n");
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
    scanf("%[^\n]", nome_novo_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                      Atualizacao efetuada!                      ||\n");
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
    printf(" ||                             EXCLUIR                             ||\n");
    printf(" ||                                                                 ||\n");
    printf("         CPF do Funcionario (apenas digitos): \n");
    printf("         => ");
    scanf("%s", cpf_funcionario);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                         Acao realizada!                         ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_tarefa(void) {

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
    printf(" ||                             TAREFAS                             ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Adicionar nova tarefa                             ||\n");
    printf(" ||         [ 2 ] Pesquisar tarefa existente                        ||\n");
    printf(" ||         [ 3 ] Atualizar uma tarefa em andamento                 ||\n");
    printf(" ||         [ 4 ] Excluir uma tarefa                                ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 0 ] Voltar ao Menu Principal                          ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"); 
    printf(" ||                                                                 ||\n");
    printf("       Digite sua escolha: ");
    scanf("%c", &escolha);
    getchar();
}


void tela_adicionar_tarefa(void) {

    char titulo_tarefa[51];
    char id_tarefa[5];
    char cpf_funcionario[12];
    char data_limite_tarefa[11];
    char status_tarefa[27];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                           ADICIONAR                             ||\n");
    printf(" ||                                                                 ||\n");
    printf("            Titulo: \n");
    printf("            => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", titulo_tarefa);
    getchar();
    printf("\n"); 
    printf("            ID da Tarefa: \n");
    printf("            => ");
    scanf("%[0-9]", id_tarefa);
    getchar();
    printf("\n");
    printf("            CPF do funcionario atribuido: \n");
    printf("            => ");
    scanf("%[0-9]", cpf_funcionario);
    getchar();
    printf("\n");
    printf("            Data limite para entrega (DD/MM/AAAA): \n");
    printf("            => ");
    scanf("%[0-9/]", data_limite_tarefa);
    getchar();
    printf("\n");
    printf("            Status da Tarefa: \n");
    printf("            => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", status_tarefa);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       Tarefa cadastrada!                        ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_pesquisar_tarefa(void) {

    char id_tarefa[5];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                            PESQUISAR                            ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da tarefa: \n");
    printf("           => ");
    scanf("%[0-9]", id_tarefa);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       Tarefa Encontrada!                        ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_atualizar_tarefa(void) {

    char id_tarefa[5];
    char titulo_novo_tarefa[51];
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
    printf(" ||                            ATUALIZAR                            ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da tarefa: \n");
    printf("           => ");
    scanf("%[0-9]", id_tarefa);
    getchar();
    printf("\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                             EDITAR                              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Titulo da Tarefa                                  ||\n");
    printf(" ||         [ 2 ] ID da Tarefa                                      ||\n");
    printf(" ||         [ 3 ] CPF do funcionario atribuido                      ||\n");
    printf(" ||         [ 4 ] Data Limite para entrega                          ||\n");
    printf(" ||         [ 5 ] Status da Tarefa                                  ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite sua escolha: ");
    scanf("%c", &editar);
    getchar();
    printf("\n");
    // exemplo de escolha para nome da tarefa
    printf("         Novo titulo de tarefa: \n");
    printf("         => ");
    scanf("%[A-ZÁÀÃÂÉÈÊÍÌÎÓÒÕÔÚÙÛ a-záàãâéèêíìîóòõôúùûÇç]", titulo_novo_tarefa);
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


void tela_excluir_tarefa(void) {

    char id_tarefa[5];

    system("cls");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||       <<<<<<<<<<<       SOFTHOUSE CAICO       >>>>>>>>>>>       ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                             EXCLUIR                             ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da tarefa: \n");
    printf("           => ");
    scanf("%[0-9]", id_tarefa);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                         Tarefa excluida!                        ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}


void tela_atividade(void) {

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
    printf(" ||                           ATIVIDADES                            ||\n");
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
}


void tela_adicionar_atividade(void) {

    char titulo_atividade[51];
    char id_atividade[6];
    char id_tarefa[5];
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
    printf(" ||                           ADICIONAR                             ||\n");
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
    printf("            ID da tarefa relacionada: \n");
    printf("            => ");
    scanf("%[0-9]", id_tarefa);
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
    printf(" ||                       Atividade incluida!                       ||\n");
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
    printf(" ||                            PESQUISAR                            ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da atividade: \n");
    printf("           => ");
    scanf("%[0-9]", id_atividade);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                       Atividade encontrada!                     ||\n");
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
    printf(" ||                            ATUALIZAR                            ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da Atividade: \n");
    printf("           => ");
    scanf("%[0-9]", id_atividade);
    getchar();
    printf("\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                             EDITAR                              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||         [ 1 ] Titulo da Atividade                               ||\n");
    printf(" ||         [ 2 ] Descricao                                         ||\n");
    printf(" ||         [ 3 ] CPF do funcionario encarregado                    ||\n");
    printf(" ||         [ 4 ] Data de Inicio                                    ||\n");
    printf(" ||         [ 5 ] Status da Atividade                               ||\n");
    printf(" ||         [ 6 ] ID da Tarefa                                      ||\n");
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
    printf(" ||                             EXCLUIR                             ||\n");
    printf(" ||                                                                 ||\n");
    printf("           Digite o ID da Atividade: \n");
    printf("           => ");
    scanf("%[0-9]", id_atividade);
    getchar();
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                         Atividade deletada!                     ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar();
}