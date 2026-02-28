#include <stdio.h>

// _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
// NIVEL MESTRE - Funcoes Recursivas para Torre, Bispo e Rainha
//
// Recursividade: uma funcao chama a si mesma ate atingir o caso-base.
// Caso-base: quando casas == 0, a recursao para (sem imprimir nada).
// Caso recursivo: imprime a direcao e chama a funcao com casas - 1.
// _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

// Funcao recursiva da Torre: move 'casas' vezes para a Direita
void moverTorre(int casas) {
    // Caso-base: sem casas restantes, encerra a recursao
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva com uma casa a menos
}

// Funcao recursiva da Rainha: move 'casas' vezes para a Esquerda
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Funcao recursiva do Bispo: move 'casas' vezes na diagonal (Cima + Direita)
// Alem da recursividade, o Bispo tambem e implementado com loops aninhados
// abaixo (loop externo = vertical, loop interno = horizontal)
void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

int main() {

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // TORRE - 5 casas para a Direita (recursiva)
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    printf("Torre:\n");
    moverTorre(5);

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // BISPO - 5 casas na diagonal com RECURSIVIDADE + LOOPS ANINHADOS
    //
    // Loop externo (for): controla o movimento vertical (Cima) - 5 iteracoes
    // Loop interno (for): controla o movimento horizontal (Direita) - 1 iteracao
    // Juntos representam 1 casa diagonal por ciclo do loop externo
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasBispo = 5;

    printf("\nBispo (loops aninhados):\n");
    for (int vertical = 0; vertical < casasBispo; vertical++) {
        // Loop interno: movimento horizontal a cada passo vertical
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    // Demonstracao adicional com a funcao recursiva do Bispo
    printf("\nBispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // RAINHA - 8 casas para a Esquerda (recursiva)
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    printf("\nRainha:\n");
    moverRainha(8);

    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
    // CAVALO - Movimento em L: 2 casas para Cima e 1 casa para a Direita
    //
    // Loops complexos com MULTIPLAS VARIAVEIS e CONDICOES
    // Loop for com duas variaveis: i controla casas para Cima (0 a 1)
    //                               j controla casas para Direita (0 a 0)
    // continue: pula iteracoes indesejadas
    // break: encerra o loop ao concluir o movimento
    // _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

    int casasCima = 2;      // numero de casas para Cima
    int casasDireita = 1;   // numero de casas para a Direita

    printf("\nCavalo:\n");

    // Loop externo com multiplas variaveis: i percorre as casas para Cima,
    // j percorre as casas para a Direita
    // Condicao multipla: loop continua enquanto i < casasCima OU j < casasDireita
    for (int i = 0, j = 0; i < casasCima || j < casasDireita; ) {

        // Se ainda ha casas para mover para Cima, move e incrementa i
        if (i < casasCima) {
            printf("Cima\n");
            i++;
            continue; // volta ao inicio do loop para checar a condicao
        }

        // Se ja subiu as 2 casas, move para a Direita
        if (j < casasDireita) {
            printf("Direita\n");
            j++;
        }

        // break: encerra o loop apos completar o movimento em L
        break;
    }

    return 0;
}
