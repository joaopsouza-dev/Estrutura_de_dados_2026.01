#ifndef EXERCICIOS_H
#define EXERCICIOS_H

typedef struct Item {

    int Chave;
    
} Item;

typedef struct Pilha {

    Item * dados;
    int tamanho;
    int topo; //posição do ultimo elemento inserido
    int capacidade;

} Pilha;

Item criarItem(int chave);
Pilha * criarPilha(int capacidade);
void Empilhar(Pilha * P, Item I);
void Desempilhar(Pilha * P);
void exibirPilha(Pilha * P);

#endif