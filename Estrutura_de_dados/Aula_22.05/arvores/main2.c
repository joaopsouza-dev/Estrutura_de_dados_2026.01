#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main() {
    system("cls");

    Item * A = (Item *) malloc (sizeof(Item));
    if(A == NULL) exit(1);

    A->Valor = 12;

    A->Esquerda = (Item *) malloc (sizeof(Item));
    A->Esquerda->Valor = 36;

    A->Direita = (Item *) malloc (sizeof(Item));
    A->Direita->Valor = 39;

    A->Direita->Direita = (Item *) malloc (sizeof(Item));
    A->Direita->Direita->Valor = 47;

    printf("%d", A->Direita->Direita->Valor);



    return 0;
}