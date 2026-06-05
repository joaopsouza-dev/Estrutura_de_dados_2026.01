#ifndef AULA_H
#define AULA_H

typedef struct No {

    int Valor;
    struct No * Esquerda;
    struct No * Direita;

} No;

No * CriarNo(int valor);
void GerarGraphviz(No *Raiz, FILE *arquivo);
No * InserirNo(No * Raiz, int valor);




#endif