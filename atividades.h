typedef struct atividade Atividade;
struct atividade {
    char titulo_atividade[51];
    char id_atividade[6];
    char id_projeto[6];
    char cpf[12];
    char data_atividade[11];
};

void adicionar_atividade(void);
void pesquisar_atividade(void);
void atualizar_atividade(void);
void excluir_atividade(void);

void modulo_atividades(void);
char tela_atividades(void);
Atividade* tela_adicionar_atividade(void);
void tela_pesquisar_atividade(void);
void tela_atualizar_atividade(void);
void tela_editar_titulo_atividade(void);
void tela_editar_cpf_atividade(void);
void tela_editar_data_atividade(void);
void tela_editar_id_atribuido(void);
void tela_editar_id_atividade(void);
void tela_excluir_atividade(void);
