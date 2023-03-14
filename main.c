#include <stdio.h> 

void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);

int main(void) {
    tela_principal();
    return 0;
}

void tela_principal(void) {
    char escolha;
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
    printf(" ||         [ 0 ] Sair                                             ||\n");
    printf(" ||                                                                ||\n");
    printf(" ||          Digite sua escolha: ");
    scanf("%c", &escolha);
    printf(" ||                                                                ||\n");
    printf(" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    return 0;
}