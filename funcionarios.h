typedef struct funcionario Funcionario;
struct funcionario {
    char nome[71];
    char cpf[12];
    char celular[12];
    char email[51];
    char cargo[61];
};

void modulo_funcionarios(void);
char tela_funcionarios(void);
void tela_adicionar_funcionario(void);
void tela_pesquisar_funcionario(void);
void tela_atualizar_funcionario(void);
void tela_editar_nome(void);
void tela_editar_cpf(void);
void tela_editar_cel(void);
void tela_editar_email(void);
void tela_editar_cargo(void);
void tela_excluir_funcionario(void);