/// Classe projeto
typedef struct projeto Projeto;
struct projeto {
    char nome[71];
    char id[6];
    char data_entrega[11];
    int status;
    Projeto *prox;
};

// funções gerais para manipular todas as funcionalidades
void adicionar_projeto(void);
void pesquisar_projeto(void);
void atualizar_projeto(void);
void excluir_projeto(void);
void recuperar_projeto(void);

// telas de navegação ou preenchimento de dados
void modulo_projetos(void);
char tela_projetos(void);
Projeto* tela_adicionar_projeto(void);
char* tela_pesquisar_projeto(void);
char* tela_atualizar_projeto(void);
void tela_editar_projeto(Projeto*);
void tela_editar_titulo_projeto(Projeto*);
void tela_editar_data_projeto(Projeto*);
char* tela_excluir_projeto(void);
char* tela_recuperar_projeto(void);
void tela_erro_pjt(void);

// funções de arquivamento
void salvar_projeto(Projeto*);
Projeto* buscar_projeto(char*);
void exibir_projeto(Projeto*);
void refazer_projeto(Projeto*);
Projeto* buscar_e_recuperar_pjt(char *);


// util
char* gerar_id(void);


