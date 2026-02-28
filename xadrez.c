#include <stdio.h>

int main() {

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // TORRE - Move 5 casas para a Direita
    // Estrutura de repeticao utilizada: for
    // Motivo: sabemos exatamente quantas iteracoes serao feitas (5)
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasTorre = 5; // numero de casas que a Torre vai percorrer

    printf("Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        // A cada iteracao, imprime a direcao do movimento
        printf("Direita\n");
    }

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // BISPO - Move 5 casas na diagonal (Cima + Direita)
    // Estrutura de repeticao utilizada: while
    // Motivo: o loop continua enquanto a condicao for verdadeira,
    //         util para movimentos condicionais
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasBispo = 5; // numero de casas que o Bispo vai percorrer
    int contadorBispo = 0; // contador de casas percorridas

    printf("\nBispo:\n");
    while (contadorBispo < casasBispo) {
        // O Bispo se move na diagonal: imprime Cima e Direita a cada casa
        printf("Cima\n");
        printf("Direita\n");
        contadorBispo++; // incrementa o contador a cada casa percorrida
    }

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // RAINHA - Move 8 casas para a Esquerda
    // Estrutura de repeticao utilizada: do-while
    // Motivo: garante que o movimento seja executado pelo menos uma vez
    //         antes de verificar a condicao
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasRainha = 8;   // numero de casas que a Rainha vai percorrer
    int contadorRainha = 0; // contador de casas percorridas

    printf("\nRainha:\n");
    do {
        // A cada iteracao, imprime a direcao do movimento
        printf("Esquerda\n");
        contadorRainha++; // incrementa o contador a cada casa percorrida
    } while (contadorRainha < casasRainha);

    return 0;
}
