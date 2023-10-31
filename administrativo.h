/*  ("+=========================================================================+\n")
    ("|                                                                         |\n")
    ("|               Universidade Federal do Rio Grande do Norte               |\n")
    ("|                                                                         |\n")
    ("|                   Centro de Ensino Superior do Seridó                   |\n")
    ("|                                                                         |\n")
    ("|             Aluno -- Renan Missias Rodrigues Alves da Costa             |\n")
    ("|                                                                         |\n")
    ("|                    Disciplina DCT1106 -- Programação                    |\n")
    ("|                                                                         |\n")
    ("|                  Projeto Sistema de Gestão para Óticas                  |\n")
    ("|                                                                         |\n")
    ("|               Developed by @RenanMRb - since august, 2023               |\n")
    ("|                                                                         |\n")
    ("+=========================================================================+\n")  */


/////
//Criação da struck
//
typedef struct administrador Admin;

struct administrador {
    char cpf[11];
    char email[30];
    char cel[11];
    char nome[40];
};

//Declaração das funções do arquivo administrativo.c
//
void modulo_administrativo (void);
Admin* cad_admin (void);
void pesq_admin (void);
char* le_cpf (void);
char* le_email (void);
char* le_cel (void);
char* le_nome (void);
void gravar_admin (Admin*);
Admin* carregar_admin(char* cpf);