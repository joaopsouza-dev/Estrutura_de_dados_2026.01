#include <stdio.h>
#include <stdlib.h>
#include "aula.h"

No * CriarNo(int valor) {

    No * N = (No *) malloc(sizeof(No));
    if(N == NULL) return NULL;

    N->Valor = valor;
    N->Direita = NULL;
    N->Esquerda = NULL;

    return N;

}


void GerarGraphviz(No *Raiz, FILE *arquivo) {

    int raizInicial = 0;

    if (Raiz == NULL) return;

    if (arquivo == NULL) {

        raizInicial = 1;

        arquivo = fopen("arvore.dot", "w");

        if (arquivo == NULL) {
            printf("Erro ao criar arquivo.\n");
            return;
        }

        fprintf(arquivo, "digraph Arvore {\n");
        fprintf(arquivo, "    node [shape=circle];\n\n");
    }

    fprintf(arquivo,
            "    \"%p\" [label=\"%d\"];\n",
            (void *)Raiz,
            Raiz->Valor);

    if (Raiz->Esquerda != NULL) {

        fprintf(arquivo,
                "    \"%p\" -> \"%p\";\n",
                (void *)Raiz,
                (void *)Raiz->Esquerda);

        GerarGraphviz(Raiz->Esquerda, arquivo);
    }

    if (Raiz->Direita != NULL) {

        fprintf(arquivo,
                "    \"%p\" -> \"%p\";\n",
                (void *)Raiz,
                (void *)Raiz->Direita);

        GerarGraphviz(Raiz->Direita, arquivo);
    }

    if (raizInicial) {

        fprintf(arquivo, "}\n");

        fclose(arquivo);
    }
}

No * InserirNo(No * Raiz, int valor) {

    if(Raiz == NULL) return CriarNo(valor);

    if(valor < Raiz->Valor) Raiz->Esquerda = InserirNo(Raiz->Esquerda, valor);
    else Raiz->Direita = InserirNo(Raiz->Direita, valor);

    return Raiz;


}

int ContarNo(No * Raiz) {
    if(Raiz == NULL) return 0;
    return 1 + ContarNo(Raiz->Esquerda) + ContarNo(Raiz->Direita);
}