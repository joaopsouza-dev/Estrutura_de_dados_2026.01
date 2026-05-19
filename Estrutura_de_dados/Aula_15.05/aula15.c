#include <stdio.h>
#include <stdlib.h>
#include "dados.h"

Item criarItem1(int chave) {
    Item I;
    I.Chave = chave;
    return I;
}

Item * criarItem(int Chave) {

    Item * I = (Item *) malloc (sizeof(Item));
    if (I == NULL) {
        printf("ERRO: não há memória para mais um ITEM!\n");
        return NULL; 
    }

    I->Chave = Chave;
    I->Proximo = NULL;

    return I;    

}

Fila * criarFila() {
    Fila *F = (Fila *) malloc(sizeof(Fila));

    if(F == NULL) {
        printf("Erro ao alocar memoria da fila!\n");
        return NULL;
    }

    F->tamanho = 0;
    F->inicio = NULL;
    F->fim = NULL;

    return F;
}

void destruirFila(Fila *F) {
    if(F == NULL) {
        printf("A fila ao existe!\n");
        return;
    }

    free(F);

    printf("\nFila destruida com sucesso!\n");
}

void addFila(Fila * F, Item * I) {
    if(F == NULL || I == NULL) {
        printf("Algum dos itens e inexistente!\n");
        return;
    }

    if(F->tamanho == 0) {
        F->inicio = I;
    } else {
        F->fim->Proximo = I;
    }

    F->fim = I;
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

    if(F->inicio == NULL) F->fim == NULL;

    Item * atual = F->inicio;
    F->inicio = atual->Proximo;
    free(atual);
    F->tamanho--;

    printf("\nItem removido!\n");
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

    Item * atual = F->inicio;
    printf("\nItens da fila:\n");

    while(atual != NULL) {
        printf("%d \t ", atual->Chave);
        atual = atual->Proximo;
    }

    printf("\n");


}