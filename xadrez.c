#include <stdio.h>

int main() {

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // TORRE - Move 5 casas para a Direita
    // Estrutura de repeticao: for
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasTorre = 5;

    printf("Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // BISPO - Move 5 casas na diagonal (Cima + Direita)
    // Estrutura de repeticao: while
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasBispo = 5;
    int contadorBispo = 0;

    printf("\nBispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima\n");
        printf("Direita\n");
        contadorBispo++;
    }

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // RAINHA - Move 8 casas para a Esquerda
    // Estrutura de repeticao: do-while
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasRainha = 8;
    int contadorRainha = 0;

    printf("\nRainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // NIVEL AVENTUREIRO
    // CAVALO - Move em L: 2 casas para Baixo e 1 casa para a Esquerda
    //
    // O movimento em L do Cavalo tem duas etapas distintas:
    //   Etapa 1: mover 2 casas para Baixo  (loop externo - for)
    //   Etapa 2: mover 1 casa para Esquerda (loop interno - while)
    //
    // Loops aninhados: o loop interno (while) executa completamente
    // para cada iteracao do loop externo (for)
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasBaixo = 2;    // numero de casas que o Cavalo move para Baixo
    int casasEsquerda = 1; // numero de casas que o Cavalo move para a Esquerda

    printf("\nCavalo:\n");

    // Loop externo (for): controla as 2 casas para Baixo
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while): controla a 1 casa para a Esquerda
    // Fica aninhado conceitualmente ao movimento do Cavalo:
    // so executados apos completar o movimento vertical
    int j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
