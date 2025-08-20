#include <stdio.h>

int main() {
    
    // TORRE movimento com FOR
    int movimentosTorre = 5; // casas que vai andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

  
    // BISPO movimento com WHILE
    int movimentosBispo = 5; // casas que vai andar
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    
    // RAINHA - movimento com DO-WHILE
    int movimentosRainha = 8; // casas que vai andar
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentosRainha);

    return 0;
}