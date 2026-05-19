#include <stdio.h>
#include <stdlib.h>
#include "atividade.h"

#define MAX 3

int main() {

    Item *vetor = (Item *) malloc(MAX * sizeof(Item));

    if(vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    vetor[0] = criarItem(137);
    vetor[1] = criarItem(241);
    vetor[2] = criarItem(339);

    printf("Itens do vetor:\n");

    for(int i = 0; i < MAX; i++) {
        printf("Item %d: %d\n", i + 1, vetor[i].Chave);
    }

    printf("\nAgora utilizando a fila:\n");

    Fila *fila1 = criarFila(15);

    if(fila1 == NULL) {
        free(vetor);
        return 1;
    }

    for(int i = 0; i < MAX; i++) {
        addFila(fila1, vetor[i]);
    }

    exibirFila(fila1);

    printf("\nRemovendo um item da fila...\n");
    remFila(fila1);

    exibirFila(fila1);

    destruirFila(fila1);
    free(vetor);

    return 0;
}