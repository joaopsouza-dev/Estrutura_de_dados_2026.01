#include <stdio.h>
#include <stdlib.h>

//definir a struct de um elemento de uma lista encadeada

typedef struct {

    int Chave;
    struct Item * Proximo; //proximo e o edereço do proximo item da lista


} Item;

Item * CriarItem(int Chave);

//utilizar o item na main

int main () {

    system("cls");

    Item * A = CriarItem(25);
    Item * B = CriarItem(36);
    Item * C = CriarItem(40);
    Item * D = CriarItem(10);

    A->Proximo = B;
    B->Proximo = C;
    C->Proximo = D;


    return 0;
}

Item * CriarItem(int ChaveB) {

    Item * I = (Item *) malloc(sizeof(Item));

    if(I == NULL) {
        printf("Erro ao alocar memória");
        return NULL;
    }

    I->Chave = ChaveB;
    I->Proximo = NULL;

    printf("%X \t", I); //mostra o endereço de memória de Item
    printf("%d \t", I->Chave); //mostra a chave de A
    printf("%X \t", I->Proximo); //Ponteiro para o proximo item

}
