#include <stdio.h>
#include <stdlib.h>
#include "aula.h"

int main() {
    system("cls");

    No * Raiz = CriarNo(25);

    Raiz->Direita = CriarNo(15);
    Raiz->Esquerda = CriarNo(12);
    Raiz->Esquerda->Esquerda = CriarNo(16);
    Raiz->Esquerda->Direita = CriarNo(18);
    Raiz->Direita->Direita = CriarNo(20);
    Raiz->Direita->Direita->Direita = CriarNo(19);
    Raiz->Direita->Direita->Esquerda = CriarNo(17);


    GerarGraphviz(Raiz, NULL);

    /*
    Calcular arvore -> N = 2^altura - 1.
    */


    return 0;
}