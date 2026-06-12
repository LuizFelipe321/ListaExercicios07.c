#include <stdio.h>

int main() {
  int matriz[4][4];
  int soma = 0;
  int maior;

    // Leitura dos elementos
    printf("Digite os 16 numeros da matriz:\n");

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) { //for dentro de outro for, preenchendo largura e altura da matriz
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j]; //armazena em soma, a soma da matriz

            if(i == 0 && j == 0) {
                maior = matriz[i][j];
            } else if(matriz[i][j] > maior) {
                maior = matriz[i][j];
      }
    }
  }

    // (a) Imprimir a matriz
    printf("\nMatriz 4 de largura e 4 de altura:\n");

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }

    }

    // (b) Soma dos elementos
    printf("\nSoma dos elementos: %d\n", soma);

    // (c) Maior valor
    printf("Maior valor da matriz: %d\n", maior);

    return 0;
}
