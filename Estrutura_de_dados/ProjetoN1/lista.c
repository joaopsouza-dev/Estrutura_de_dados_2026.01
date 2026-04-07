#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"

Dados * juntar_dados(char *nome_arquivo) {

    //Abre o arquivo nesse bloco
    FILE *arquivo = fopen("dados_finais.csv", "w");
    FILE *fp = fopen(nome_arquivo, "r");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf("Arquivo aberto com sucesso.\n");
    

    //Fecha o arquivo nesse bloco
    int fclose(arquivo);
    int resultado = fclose(arquivo);

    if (resultado == 0) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo.\n");
    }

    int fclose(fp);
    int resultado = fclose(fp);

    if (resultado == 0) {
        printf("Arquivo fechado com sucesso.\n");
    } else {
        printf("Erro ao fechar o arquivo.\n");
    }
} 

    
