#include <stdio.h>
#include <stdlib.h>
#include "aux.h"

#ifndef PILHA_H
#define PILHA_H

#define PILESIZE 10
// Tamanho maximo da pilha será estatico
typedef struct pilha{
    int topo;
    int *dados;
    int tamanho;
}Pilha;

Pilha *pilhaCria();

// Insere um elemento no topo da pilha
// Retorna 1 se a inserção foi bem sucedida e 0 caso contrário
int pilhaPush(Pilha *p, int dado);

// Remove o elemento do topo da pilha
// Retorna o elemento removido
// Retorna -1 se a pilha estiver vazia
int pilhaPop(Pilha *p);

// Retorna o elemento do topo da pilha
// Retorna -1 se a pilha estiver vazia
int pilhaTopo(Pilha *p);

// Retorna 1 se a pilha estiver vazia e 0 caso contrário
int pilhaVazia(Pilha *p);

// Retona o tamanha da pilha
int pilhaTamanho(Pilha *p);

// Libera a memória alocada para a pilha
void pilhaLibera(Pilha *p);

// Função de teste
// APAGAR
void pilhaImprime(Pilha *p);

#endif