
//h = header / é definido o tipo abstrato de dados equipe (structs) e indicado o protótipo de cada operação
//Pos;Estado;Equipe;Pts;J;V;E;D;GP;GC;SG

#ifndef EQUIPE_H
#define EQUIPE_H

typedef struct {

    int Pos;
    char Estado[50];
    char Time[32];
    int Pontos; //(formula: 3 * vitorias + 1 * empates)
    int Jogos; //(V + E + D)
    int V;
    int E;
    int D;
    int GP;
    int GC;
    int SG; // (GP - GC)
    float aproveitamento; //percentual de pontos conquistados(100.0 * (P / 3 * J))

} Equipe;

Equipe * lerDados(char * Arquivo);

#endif