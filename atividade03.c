/*Escreva um programa que leia uma matriz 5x5 de números inteiros.
(a) Calcule a soma dos elementos da diagonal principal; \
(b) Calcule a soma dos elementos da diagonal secundária; /
(c) Informe qual das duas diagonais possui a maior soma.*/


#include <stdio.h>

int main()
{
    int matriz[5][ 5];
    int diagonal1 = 0 , diagonal2 = 0 , i, j;

    
    for( i= 0; i < 5; i++ ){ //Faz leitura da matriz , recebe os valores/ preenche com os valores
      for (j = 0; j< 5; j++){
        printf("Digite o elemento: %d %d", i, j);
        scanf("%d", &matriz[i][j]);
    }
  } 
    //soma das duas diagonais presentes na matriz 
    for (int i=0;  i < 5; i++){ //indice vai ate 4
    diagonal1 = diagonal1 + matriz[i][i]; //diagonal1, i incrementa +1 na largura e +1 na altura até valor 4
    diagonal2 += matriz[i][4 - i]; //diagonal2, i incrementa até valor 4 em largura e em altura decrementa em -1
    }

    printf("\n Soma da primeira diagonal: %d\n", diagonal1); 
    printf("\nSoma da diagonal secundaria: %d\n", diagonal2);

    if(diagonal1 - diagonal2){ //se diagonal1 for maior que diagonal2
        printf("\nA primeira diagonal possui a maior soma\n");
    }

    if (diagonal2 - diagonal1){ //se diagonal2 for maior que diagonal1
        printf("\nA segunda diagonal possui a maior soma\n");
    } else { //caso os dois valores da soma for iguais
        printf("\n As duas diagonais possuem o mesmo resultado das somas");

    }
    return 0; //encerra programa
}
