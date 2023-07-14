/// Classe atividade
typedef struct atividade Atividade;
struct atividade {
    char nome_atv[51];
    char id[6];
    char id_pjt[6];
    char cpf[12];
    char data_atv[11];
    int status;
    Atividade *prox;
};

void adicionar_atividade(void);
void pesquisar_atividade(void);
void atualizar_atividade(void);
void excluir_atividade(void);
void recuperar_atividade(void);

void modulo_atividades(void);
char tela_atividades(void);
Atividade* tela_adicionar_atividade(void);
char* tela_pesquisar_atividade(void);
char* tela_atualizar_atividade(void);
char* tela_excluir_atividade(void);
char* tela_recuperar_atv(void);
void tela_erro_atv(void);

void salvar_atividade(Atividade*);
Atividade* buscar_atividade(char*);
void exibir_atividade(Atividade*);
void refazer_atividade(Atividade*);
Atividade* buscar_e_recuperar_atv(char *);

void tela_editar_atividade(Atividade*);
void tela_editar_titulo_atividade(Atividade*);
void tela_editar_cpf_atividade(Atividade*);
void tela_editar_data_atividade(Atividade*);
void tela_editar_id_atribuido(Atividade*);

char* gerar_id_atv(void);
int verifica_data_pjt(char *, char *);
