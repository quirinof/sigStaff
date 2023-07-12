typedef struct funcionario Funcionario;
struct funcionario {
    char nome[71];
    char cpf[12];
    char celular[12];
    char email[51];
    char cargo[61];
    int status;
    Funcionario *prox;
};

// funções gerais de controle
void adicionar_funcionario(void);
void pesquisar_funcionario(void);
void atualizar_funcionario(void);
void excluir_funcionario(void);

// telas de navegação e/ou preenchimento de dados
void modulo_funcionarios(void);
char tela_funcionarios(void);
Funcionario* tela_adicionar_funcionario(void);
char* tela_pesquisar_funcionario(void);
char* tela_atualizar_funcionario(void);
char* tela_excluir_funcionario(void);
void tela_erro(void);

// funções para manipular arquivos
void salvar_funcionario(Funcionario*);
Funcionario* buscar_funcionario(char*);
void exibir_funcionario(Funcionario*);
void refazer_funcionario(Funcionario*);

// as funções que editam apenas um campo específico da estrutura funcionário
void tela_editar_funcionario(Funcionario*);
void tela_editar_nome(Funcionario*);
void tela_editar_cpf(Funcionario*);
void tela_editar_cel(Funcionario*);
void tela_editar_email(Funcionario*);
void tela_editar_cargo(Funcionario*);

int verifica_cpf_cadastrado(char*);

