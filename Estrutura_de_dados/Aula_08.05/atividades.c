#include <stdio.h>
#include <stdlib.h>
#include "atividade.h"

Item criarItem(int chave) {
    Item I;
    I.Chave = chave;
    return I;
}

Fila *criarFila(int capacidade) {
    Fila *F = (Fila *) malloc(sizeof(Fila));

    if(F == NULL) {
        printf("Erro ao alocar memoria da fila!\n");
        return NULL;
    }

    F->capacidade = capacidade;
    F->tamanho = 0;
    F->inicio = 0;
    F->fim = -1;

    F->dados = (Item *) malloc(capacidade * sizeof(Item));

    if(F->dados == NULL) {
        printf("Erro ao alocar memoria dos dados!\n");
        free(F);
        return NULL;
    }

    return F;
}

void destruirFila(Fila *F) {
    if(F == NULL) {
        printf("A fila ja esta nula!\n");
        return;
    }

    free(F->dados);
    free(F);

    printf("\nFila destruida com sucesso!\n");
}

void addFila(Fila *F, Item I) {
    if(F == NULL) {
        printf("Fila inexistente!\n");
        return;
    }

    if(F->tamanho == F->capacidade) {
        printf("\nA fila esta cheia!\n");
        return;
    }

    F->fim++;
    F->dados[F->fim] = I;
    F->tamanho++;
}

void remFila(Fila *F) {
    if(F == NULL) {
        printf("Fila inexistente!\n");
        return;
    }

    if(F->tamanho == 0) {
        printf("Fila vazia!\n");
        return;
    }

    printf("Item removido: %d\n", F->dados[F->inicio].Chave);

    for(int i = 0; i < F->fim; i++) {
        F->dados[i] = F->dados[i + 1];
    }

    F->fim--;
    F->tamanho--;
}

void exibirFila(Fila *F) {
    if(F == NULL) {
        printf("Fila inexistente!\n");
        return;
    }

    if(F->tamanho == 0) {
        printf("Fila vazia!\n");
        return;
    }

    printf("\nItens da fila:\n");

    for(int i = F->inicio; i <= F->fim; i++) {
        printf("Item %d: %d\n", i + 1, F->dados[i].Chave);
    }
}