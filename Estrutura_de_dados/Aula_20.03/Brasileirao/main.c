// é implementada a função main, que acessa o TAD equipe

#include <stdio.h>
#include <stdlib.h>

#include "equipe.h"

int main() {

    system("cls");

    Equipe * T = lerDados("Tabela2024.csv");

    for(int i = 0; i < 20; i++) {
        printf("%s \t %d \t %d \t %.2f \n", T[i].Time, T[i].Pontos, T[i].aproveitamento);
    }

    return 0;
}