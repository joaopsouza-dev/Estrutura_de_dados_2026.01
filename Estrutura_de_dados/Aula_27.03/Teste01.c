#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lista.h"

int main() {

    system("cls");

    Tarefa * T = (Tarefa*) malloc (sizeof(Tarefa));

    strcpy(T->Titulo, "Estudar banco de dados");
    strcpy(T->Responsavel, "Andre");
    T->Status = EM_ANDAMENTO;
    T->Progresso = 0.80;
    T->Avaliacao = 3;

    printf("Endereco: %X\n", T);
    printf("A tarefa '%s' esta %.0f%% por cento desenvolvida!", T->Titulo, (T->Progresso * 100) ); 
    

    return 0;
}