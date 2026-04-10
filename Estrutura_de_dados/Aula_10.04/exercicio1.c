#include <stdio.h>
#include <stdlib.h>

//definir a struct de um elemento de uma lista encadeada

typedef struct Item {

    int Chave;
    struct Item * Proximo; //proximo e o edereço do proximo item da lista


} Item;

Item * CriarItem(int Chave);

void exibirLista(Item * I, int tamanho);
int contarPares(Item *I);

typedef struct {

    int tamanho;
    Item * inicio;

} Lista;

Lista * criarLista();

//utilizar o item na main

int main () {

    system("cls");

    Item * A = CriarItem(25);
    Item * B = CriarItem(36);
    Item * C = CriarItem(40);
    Item * D = CriarItem(10);

    A->Proximo = C;
    C->Proximo = D;
    D->Proximo = B;

    printf("Teste 1: %d\n", A->Proximo->Proximo->Chave);
    printf("Teste 2: %d\n", D->Proximo->Chave);
    printf("Teste 3: %d\n", B->Proximo);

    exibirLista(A, 4);

    printf("Pares: %d", contarPares(A));

    Lista *m = criarLista();
    m->inicio = A;
    m->tamanho = 4;


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
    printf("%X \n", I->Proximo); //Ponteiro para o proximo item

    return I;

}


void exibirLista(Item * I, int tamanho) {

    Item * atual = I;
    printf("\n");

    while(atual != NULL) {

        printf("%X \t", atual); //mostra o endereço de memória de Item
        printf("%d \t", atual->Chave); //mostra a chave de A
        printf("%X \n", atual->Proximo); //Ponteiro para o proximo item
        printf("=======================\n\n"); //Ponteiro para o proximo item

        atual = atual->Proximo;

    }
}

int contarPares(Item *I) {

    int contador = 0;

    while (I != NULL) {

        if(I->Chave % 2 == 0)  {
            contador++;
        }

        I = I->Proximo;
        
    }

    return contador;
}

Lista * criarLista() {

    Lista * L = (Lista *) malloc (sizeof(Lista));

    if(L == NULL) {
        printf("ERRO AO CRIAR LISTA");
    }

    L->tamanho = 0;
    L->inicio = NULL;

}