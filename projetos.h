typedef struct projeto Projeto;
struct projeto {
    char nome[71];
    char id[6];
    char data_entrega[11];
    int status;
};

void adicionar_projeto(void);
void pesquisar_projeto(void);
void atualizar_projeto(void);
void excluir_projeto(void);

void modulo_projetos(void);
char tela_projetos(void);
Projeto* tela_adicionar_projeto(void);
char* tela_pesquisar_projeto(void);
char* tela_atualizar_projeto(void);
void tela_editar_projeto(void);
void tela_editar_titulo_projeto(void);
void tela_editar_id_projeto(void);
void tela_editar_data_projeto(void);
void tela_editar_status_projeto(void);
char* tela_excluir_projeto(void);


void salvar_projeto(Projeto*);
Projeto* buscar_projeto(char*);
void exibir_projeto(Projeto*);
void refazer_projeto(Projeto*);
