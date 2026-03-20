#include <stdio.h>
#include <stdlib.h>
#define ERRO -1 //se der erro, o código volta -1 para um elemento que não está no vetor

int PesquisaSequencial(int * Vetor, int Tamanho, int Chave);

// PESQUISA SEQUENCIAL

int main() {

    system("cls");

    int V[] = {
        14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        30, 41, 15, 27, 33, 18, 26, 39, 12, 21
    };

    int N = sizeof(V) / sizeof(int);
    int N_1 = 16;
    int Teste_1 = PesquisaSequencial(V, N, N_1);

    if(Teste_1 != ERRO) {
        printf("O ELEMENTO %d ESTA NA POSICAO %d.\n", N_1, Teste_1);
    } else {
        printf("O ELEMENTO NAO ESTA NO VETOR");
    }
}

int PesquisaSequencial(int * Vetor, int Tamanho, int Chave) {
    for(int i = 0; i < Tamanho; i++) {

        if(Vetor[i] == Chave) {
            return i; //retorna a posição do elemento chave
        }
    }
        return ERRO; // retorno de erro na função
}
