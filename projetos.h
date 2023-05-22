typedef struct projeto Projeto;
struct projeto {
    char titulo_projeto[51];
    char id_projeto[6];
    char data_projeto[11];
};

void adicionar_projeto(void);
void pesquisar_projeto(void);
void atualizar_projeto(void);
void excluir_projeto(void);

void modulo_projetos(void);
char tela_projetos(void);
Projeto* tela_adicionar_projeto(void);
void tela_pesquisar_projeto(void);
void tela_atualizar_projeto(void);
void tela_editar_titulo_projeto(void);
void tela_editar_id_projeto(void);
void tela_editar_data_projeto(void);
void tela_editar_status_projeto(void);
void tela_excluir_projeto(void);
