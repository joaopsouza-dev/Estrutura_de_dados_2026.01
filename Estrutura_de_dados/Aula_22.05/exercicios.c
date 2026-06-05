#include <stdio.h>
#include <stdlib.h>
#include "exercicios.h"


Item criarItem(int Chave) {

    Item I;

    I.Chave = Chave;

    return I;    

}

Pilha * criarPilha(int capacidade) {
    Pilha *P = (Pilha *) malloc(sizeof(Pilha));

    if(P == NULL) {
        printf("Erro ao alocar memoria da fila!\n");
        return NULL;
    }

    P->dados = (Item *) malloc(sizeof(Item) * capacidade); // ← ADICIONAR ISSO
    if(P->dados == NULL) {
        printf("Erro ao alocar memoria dos dados!\n");
        free(P);
        return NULL;
    }

    P->tamanho = 0;
    P->capacidade = capacidade;
    P->topo = -1; // ← ver bug 2

    return P;
}

void Empilhar(Pilha * P, Item I) {

    if(P == NULL) {
        printf("Erro ao alocar memoria da Pilha!\n");
        return;
    }

    if(P->tamanho == P->capacidade) {
        printf("Erro: Pilha Cheia!\n");
        return;
    }

    if(P->tamanho == P->capacidade) return;

    P->topo = P->topo+1;
    P->dados[P->topo] = I;
    P->tamanho++;
    
}

void Desempilhar(Pilha * P) {

    if(P == NULL) {
        printf("Erro ao acessar a Pilha!\n");
        return;
    }

    if(P->tamanho == 0) {
        printf("Erro: Pilha Vazia!\n");
        return;
    }

    P->topo = P->topo - 1;
    P->tamanho--;

}

void exibirPilha(Pilha * P) {

    if(P == NULL) {
        printf("Erro ao acessar a Pilha!\n");
        return;
    }

    if(P->tamanho == 0) {
        printf("Pilha Vazia!\n");
        return;
    }

    for(int i = P->topo; i >= 0; i--) {
        printf("%d\n", P->dados[i].Chave);
    }

}