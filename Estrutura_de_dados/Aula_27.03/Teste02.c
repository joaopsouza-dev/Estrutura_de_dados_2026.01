#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lista.h"

int main() {

    system("cls");

    Tarefa T = {"Estudar banco de dados", "Andre", EM_ANDAMENTO, 0.8, 3};

    printf("Endereco: %X\n", T);
    printf("A tarefa '%s' esta %.0f%% por cento desenvolvida!", T.Titulo, (T.Progresso * 100) ); 
    

    return 0;
}