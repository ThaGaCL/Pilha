#include "libpilha.h"

int main(){
    Pilha *pilha = pilhaCria();

    pilhaPush(pilha, 0);
    pilhaImprime(pilha);
    pilhaPush(pilha, 1);
    pilhaImprime(pilha);
    pilhaPush(pilha, 3);
    pilhaImprime(pilha);

    pilhaPop(pilha);
    pilhaImprime(pilha);
    pilhaPop(pilha);
    pilhaImprime(pilha);
    pilhaPop(pilha);
    pilhaImprime(pilha);
    pilhaPop(pilha);

    pilhaLibera(pilha);

    return 0;
}