#include <stdio.h>
#include <stdlib.h>
#include "aula.h"

int main() {
    system("cls");

    No * Raiz = CriarNo(25);

    InserirNo(Raiz, 15);
    InserirNo(Raiz, 25);
    InserirNo(Raiz, 65);
    InserirNo(Raiz, 75);
    InserirNo(Raiz, 45);
    InserirNo(Raiz, 195);
    InserirNo(Raiz, 14);
    InserirNo(Raiz, 166);
    InserirNo(Raiz, 17);
    InserirNo(Raiz, 45);
    InserirNo(Raiz, 24);
    InserirNo(Raiz, 36);
    InserirNo(Raiz, 67);
    InserirNo(Raiz, 15);

    GerarGraphviz(Raiz, NULL);


    return 0;
}