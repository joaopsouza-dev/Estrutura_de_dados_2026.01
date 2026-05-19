#ifndef DADOS_H
#define DADOS_H

typedef struct Item {

    int Chave;
    struct Item * Proximo;
    
} Item;

typedef struct Fila {

    int tamanho;
    Item * inicio;
    Item * fim;

} Fila;

Item criarItem1(int chave);
Item * criarItem(int chave);
Fila * criarFila();
void destruirFila(Fila *F);
void addFila(Fila *F, Item *I);
void remFila(Fila *F);
void exibirFila(Fila *F);

#endif