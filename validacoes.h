// Funções que validam os campos necessarios para o sistema
int valida_cpf(char*);
int valida_id(char*, int);
int valida_data(char*);
int valida_nome(char*);
int valida_email(char*);
int valida_cel(char*);


// Funções que são uteis para algumas validações
int letra(char);
int numero(char);
int quantidade_digitos(char*, int);
int bissexto(int);
int verifica_data(int, int, int);
void limpa_caracteres(char*);
int caracteres_email(char);