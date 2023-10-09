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


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "all.h"


/////
//Percorre todo o caminho do menu venda
//
void modulo_venda (void) {
    setlocale (LC_ALL, "Portuguese_Brazil");
    char op;
    do {
        op = menu_venda ();
        switch (op) {
            case '1':
                cad_venda ();
                break;
            case '2':
                pesq_venda ();
                break; } }
    while (op != '0'); }


//Cadastra uma nova venda
//
void cad_venda (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_venda_colab ();
        verify = ent_cpf (); 
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        limpa_buffer ();
        tela_venda_cliente ();
        info_cliente_0 ();
        verify = ent_cpf (); 
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    do {
        do {
            limpa_buffer ();
            tela_venda_produt ();
            verify = ent_cod_barras (); 
            if (!verify) {
                tela_erro (); } }
        while (!verify);
        do {
            limpa_buffer ();
            tela_venda_q_prod ();
            verify = ent_quant (); 
            if (!verify) {
                tela_erro (); } }
        while (!verify);
        verify = acresc_item_venda (); } 
    while (!verify);
    form_pag ();
    limpa_buffer ();
    tela_cad_venda ();
    t_exe_cad_vend ();
    tela_vend_concl ();
    limpa_buffer (); }


//Pesquisa o cadastro de alguma venda
//
void pesq_venda (void) {
    int verify;
    do {
        limpa_buffer ();
        tela_pesq_venda ();
        verify = ent_id_venda (); 
        if (!verify) {
            tela_erro (); } }
    while (!verify);
    t_exe_cad_vend ();
    limpa_buffer (); }


//Acrescenta itens a uma venda em processo
//
int acresc_item_venda (void) {
    char op;
    char op_max = '2';
        do {
            tela_cad_venda ();
            op = menu_item_venda ();
            if (!valid_op(op, op_max)) {
                tela_erro(); } }   
        while (!valid_op(op, op_max));
        switch (op) {
            case '1':
            return 0;
            break; 
            case '2': 
            return 1;
            break; } }


//Declara a forma de pagamento de uma venda
//
void form_pag (void) {
    char op;
    char op_max = '4';
    do {
        tela_cad_venda ();
        op = menu_form_pag ();
    switch (op) {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break; }
    system("clear"); }
    while ((op != '1') && (op != '2') && (op != '3') && (op != '4')); }