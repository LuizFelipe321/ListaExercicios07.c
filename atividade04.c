#include <stdio.h>

 int main() {
  int matriz[6][6]; // sao 36 valores assim oculpa 36 x 4 bytes (int) = 144 bytes
  int pares = 0, impares = 0; // variaveis impar e par

  for (int i = 0; i < 6; i++) { // leitura da matriz, preenchimento dos valores i
    for (int j = 0; j < 6; j++) { // e j
       printf("Digite o elemento %d %d:", i, j);
       scanf("%d", &matriz[i][j]);

    if (matriz[i][j] % 2 == 0) { // se resto da divisao pela matriz e 2 == 0
        pares++; //variavel pares é recebido contador em +1
    } else {
         impares++; //caso contrario variavel impares é recebido contador em -1
    }
   }
}

  printf("\nQuantidade de pares: %d\n", pares); //imprime na tela quantidade de valores pares.
  printf("Quantidade de impares: %d\n", impares); //imprime na tela quantidade de valores impares.

  return 0; // encerra programa retornando valor 0, programa executado corretamente
}
