#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

int main() {

    char nomes[5][50] = {
        "Joaquina", "Pedro", "Mizael", "Carla", "Eloisa"
    };

    int tamanho = sizeof(nomes) / sizeof(nomes[0]);

    char busca[50];

    pesquisarNome(busca);
    buscaSequencial(nomes, tamanho, busca);

    return 0;
}