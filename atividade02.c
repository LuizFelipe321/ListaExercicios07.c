#include <stdio.h>

int main(){
    int gols[4][3]; //4 largura e 3 de altura
    int total[4] = {0};
    int maior = 0;
    int indiceMaior = 0;
    int primeiro = 0;
    int segundo = 1;
    int terceiro = -1;
    int quarto = -1;

    char selecoes[4][20] = {

        "Brasil",
        "Marrocos",
        "Haiti",
        "Escocia"
    };

    // Leitura dos gols, recebe os dados
    for(int i = 0; i < 4; i++) { // preenche largura de gols
        printf("\n%s\n", selecoes[i]);

        for(int j = 0; j < 3; j++) { //preenche altura de gols
            printf("Gols no Jogo %d: ", j + 1);
            scanf("%d", &gols[i][j]);

            total[i] += gols[i][j];
        }
    }

    // Exibir totais e encontrar maior artilharia
    printf("\n--- Total de gols por selecao ---\n");

    for(int i = 0; i < 4; i++) {
        printf("%s: %d gols\n", selecoes[i], total[i]);

        if(total[i] > total[indiceMaior]) {
            indiceMaior = i;
        }
    }

    printf("\nSelecao com mais gols: %s (%d gols)\n",
           selecoes[indiceMaior],
           total[indiceMaior]);

    // Encontrar os dois maiores totais

    if(total[segundo] > total[primeiro]) {
        int aux = primeiro;
        primeiro = segundo;
        segundo = aux;
    }

    for(int i = 2; i < 4; i++) {
        if(total[i] > total[primeiro]) {
            segundo = primeiro;
            primeiro = i;
        }
        else if(total[i] > total[segundo]) {
            segundo = i;
        }
    }

    for(int i = 0; i < 4; i++) {
        if(i != primeiro && i != segundo) {
            if(terceiro == -1)
                terceiro = i;
            else
                quarto = i;
        }
    }

    if(total[quarto] > total[terceiro]) {
        int aux = terceiro;
        terceiro = quarto;
        quarto = aux;
    }

    printf("\nCLASSIFICADOS\n");
    printf("1º %s - %d gols\n", selecoes[primeiro], total[primeiro]);
    printf("2º %s - %d gols\n", selecoes[segundo], total[segundo]);

    printf("\nELIMINADOS\n");
    printf("3º %s - %d gols\n", selecoes[terceiro], total[terceiro]);
    printf("4º %s - %d gols\n", selecoes[quarto], total[quarto]);

    return 0;
}
