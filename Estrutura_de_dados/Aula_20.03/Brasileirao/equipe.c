
// são implementadas as operações do TAD equipe

#include <stdio.h>
#include <stdlib.h>

#include "equipe.h"

Equipe * lerDados(char * Arquivo) {

    FILE * fp = fopen(Arquivo, "r");

    if (fp == NULL) {
        printf("ERRO\n");
        exit(1);
    }

    printf("O arquivo foi aberto com sucesso\n");

    Equipe * T = malloc(20 * sizeof(Equipe));

    if(T == NULL) {
        printf("ERRO: NAO FOI POSSIVEL ALOCAR MEMORIA PARA O VETOR DE EQUIPES\n");
        exit(1);
    }

    printf("A MEMORIA PARA O VETOR DE EQUIPES FOI EXECUTADA COM SUCESSO\n");


    char Buffer[100];
    fscanf(fp, "%[^\n]\n", Buffer);

    int i = 0; // para indicar o indice do vetor

    // Pos;Estado;Equipe;Pts;J;V;E;D;GP;GC;SG
    // 1;Rio de Janeiro;Botafogo (C);79;38;23;10;5;59;29;+30

    while(fscanf(fp, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d\n",
     &T[i].Pos,
     T[i].Estado,
     T[i].Time,
     &T[i].Pontos,
     &T[i].Jogos,
     &T[i].V,
     &T[i].E,
     &T[i].D,
     &T[i].GP,
     &T[i].GC,
     &T[i].SG

     ) == 11) {

        T[i].aproveitamento = 100.0 * (T[i].Pontos / 3.0 * T[i].J);
        i++;

     }

     fclose(fp);
     return T;


}

