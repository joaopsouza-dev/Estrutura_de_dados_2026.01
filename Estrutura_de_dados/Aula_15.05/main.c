#include <stdio.h>
#include <stdlib.h>
#include "dados.h"

int main() {

    system("cls");

    Fila * fila1 = criarFila();
    addFila(fila1, criarItem(132));
    addFila(fila1, criarItem(216));
    addFila(fila1, criarItem(659));
    addFila(fila1, criarItem(118));
    exibirFila(fila1);
    remFila(fila1);
    remFila(fila1);
    exibirFila(fila1);


    return 0;
}