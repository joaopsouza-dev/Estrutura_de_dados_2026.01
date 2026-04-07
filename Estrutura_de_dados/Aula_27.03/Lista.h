#ifndef LISTA_H
#define LISTA_H

//Caracteriza os TAD tarefa
#define TAM_TITULO 96
#define TAM_NOME 48
#define A_FAZER 0
#define EM_ANDAMENTO 1
#define FEITO 2

typedef struct {
    char Titulo[TAM_TITULO];
    char Responsavel[TAM_NOME];
    int Status; // 0 a 2
    float Progresso; // de 0.0 até 1.0
    int Avaliacao; // de 0 a 5


} Tarefa;


#endif