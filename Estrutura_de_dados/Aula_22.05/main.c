#include <stdio.h>
#include <stdlib.h>
#include "exercicios.h"

int main() {

    Pilha * Exemplo = criarPilha(15);


    Empilhar(Exemplo, criarItem(237));
    Empilhar(Exemplo, criarItem(546));
    Empilhar(Exemplo, criarItem(345));
    Empilhar(Exemplo, criarItem(989));
    Empilhar(Exemplo, criarItem(134));

    exibirPilha(Exemplo);

    Desempilhar(Exemplo);
    
    printf("\n\nApos desempilhar:\n");
    exibirPilha(Exemplo);

    


}