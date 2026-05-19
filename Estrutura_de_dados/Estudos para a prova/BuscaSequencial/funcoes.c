#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 20

#include "header.h"

int buscaSequencial(char nome[][50], int tamanho_vetor, char nome_busca[]) {

    for(int i = 0; i < tamanho_vetor; i++) {

        if(strcmp(nome[i], nome_busca) == 0) {
            printf("O nome foi encontrado na lista!\n");
            return i;
        }
    }
    printf("O nome nao foi encontrado na lista");
    exit(1);
}

void pesquisarNome(char busca[]) {
    char nome[TAMANHO];
    printf("Digite o nome que voce deseja encontrar:\n");
    scanf("%s", nome);

    strcpy(busca, nome);

}