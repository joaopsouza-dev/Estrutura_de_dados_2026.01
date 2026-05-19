#ifndef ATIVIDADE_H
#define ATIVIDADE_H

typedef struct Item {
    int Chave;
} Item;

typedef struct Fila {
    Item *dados;
    int inicio;
    int fim;
    int tamanho;
    int capacidade;
} Fila;

Item criarItem(int chave);
Fila *criarFila(int capacidade);
void destruirFila(Fila *F);
void addFila(Fila *F, Item I);
void remFila(Fila *F);
void exibirFila(Fila *F);

#endif