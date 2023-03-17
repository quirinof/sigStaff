#include <stdio.h> 

void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);

int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    return 0;
}

void tela_principal(void) {
    char escolha;
    system("clear||cls");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                ||\n");
    printf(" ||           Universidade Federal do Rio Grande do Norte          ||\n");
    printf(" ||               Centro de Ensino Superior do Serido              ||\n");
    printf(" ||            Departamento de Computacao e Tecnologia             ||\n");
    printf(" ||                   Disciplina -- Programacao                    ||\n");
    printf(" ||          Projeto de Sistema de Controle de Funcionarios        ||\n");
    printf(" ||         Desenvolvido por @quirinof -- desde marco, 2023        ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                ||\n");
    printf(" ||        ====== Sistema de Controle de Funcionarios ======       ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||         [ 1 ] Funcionarios                                     ||\n");
    printf(" ||         [ 2 ] Ponto                                            ||\n");
    printf(" ||         [ 3 ] Folha de Pagamento                               ||\n");
    printf(" ||         [ 4 ]                                                  ||\n");
    printf(" ||         [ 0 ] Sair                                             ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||         Digite sua escolha: ");
    scanf("%c", &escolha);
    printf(" ||                                                                ||\n");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\n");
    getchar();
}

void tela_sobre(void) {
    system("clear||cls");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                ||\n");
    printf(" ||           Universidade Federal do Rio Grande do Norte          ||\n");
    printf(" ||               Centro de Ensino Superior do Serido              ||\n");
    printf(" ||            Departamento de Computacao e Tecnologia             ||\n");
    printf(" ||                   Disciplina -- Programacao                    ||\n");
    printf(" ||          Projeto de Sistema de Controle de Funcionarios        ||\n");
    printf(" ||         Desenvolvido por @quirinof -- desde marco, 2023        ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                ||\n");
    printf(" ||        ====== Sistema de Controle de Funcionarios ======       ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||  Temos aqui um projeto da disciplina de programacao, que serve ||\n");
    printf(" ||  para nos(alunos) sermos avaliados mediante os conhecimentos   ||\n");
    printf(" ||  adquiridos durante o periodo. Contem um sistema para controle ||\n");
    printf(" ||  de funcionarios, simulando as funcionalides necessarias para  ||\n");
    printf(" ||  tal sistema. Criado apenas para fins didaticos.               ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\n");
    getchar();
}

void tela_equipe(void) {
    system("clear||cls");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                ||\n");
    printf(" ||           Universidade Federal do Rio Grande do Norte          ||\n");
    printf(" ||               Centro de Ensino Superior do Serido              ||\n");
    printf(" ||            Departamento de Computacao e Tecnologia             ||\n");
    printf(" ||                   Disciplina -- Programacao                    ||\n");
    printf(" ||          Projeto de Sistema de Controle de Funcionarios        ||\n");
    printf(" ||         Desenvolvido por @quirinof -- desde marco, 2023        ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                ||\n");
    printf(" ||        ====== Sistema de Controle de Funcionarios ======       ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||               Este projeto foi desenvolvido por:               ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||                        Matheus Quirino                         ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||         * Email: matheusquinoff@gmail.com                      ||\n");
    printf(" ||         * Git: https://github.com/quirinof                     ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\n");
    getchar();
}