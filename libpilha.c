#include "libpilha.h"

Pilha *pilhaCria()
{
    Pilha *p = malloc(sizeof(Pilha));
    if (!p)
    {
        printError("Erro! A pilha não foi criada");
        return NULL;
    }

    p->dados = malloc(sizeof(int) * PILESIZE);

    if (!p->dados)
    {
        free(p);
        p = NULL;
        printError("Erro! A matriz de dados não foi criada");
        return NULL;
    }

    p->topo = -1;

    return p;
}

int pilhaVazia(Pilha *p)
{

    if (p->topo == -1)
        return 1;

    return 0;
}

int pilhaPush(Pilha *p, int dado)
{

    if (!p)
        return printError("Erro! A pilha não existe");

    if (p->topo == PILESIZE - 1)
        return printError("Erro! A pilha esta cheia");

    p->topo++;
    p->dados[p->topo] = dado;

    return 1;
}

int pilhaPop(Pilha *p)
{
    if (!p)
        return printError("Erro! A pilha não existe");

    if (pilhaVazia(p))
        return printError("Erro! A pilha está vazia");

    p->dados[p->topo] = 0;
    p->topo--;

    return 1;
}

int pilhaTopo(Pilha *p)
{
    if(!p)
        printError("Erro! A pilha não existe");

    return p->topo;
}

int pilhaTamanho(Pilha *p){
    if(!p)
        printError("Erro! A pilha não existe");

    return p->topo + 1;
}

void esvaziaPilha(Pilha *p)
{
    for(int i = 0; i < PILESIZE; i++){
        p->dados[i] = 0;
    }
}

void pilhaLibera(Pilha *p)
{
    //Evita que os dados fiquem na memória
     if(!pilhaVazia(p))
            esvaziaPilha(p);
    

    free(p->dados);
    free(p);
}

void pilhaImprime(Pilha *p){
    if(!p)
    {
        printError("Erro! A pilha não existe");
        exit(0);
    }
    
    printf("Pilha Atual:\n");
    printf("___\n");
    for(int i = p->topo; i > -1; i--)
    {
        printf("|%d|\n", p->dados[i]);
        printf("___\n");
    }
    printf("\n");
}
