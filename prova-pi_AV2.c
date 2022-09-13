#include <stdio.h>
#include <time.h>


#define TAM 34000

int main(void)
{

    int i = 0, j = 0;
    int lancamento_dado1;
    int lancamento_dado2;
    int dado1[TAM] = { 0 };
    int dado2[TAM] = { 0 };
    float quantia[11] = { 0 };//quantia de valores que deram as somas dos dados
    int soma = 0;//armazenar soma dos 2 dados
    float matriz[6][6] = { 0 }; //matriz para armazenar os valores de linha e coluna desejadas
    float matrizPorcentagem[7][7] = { 0 }; //matriz para armazenar os valores em porcentagem
    float porcentagem[11] = { 0 }; //vetor para armazenar os valores em porcentagem


    srand(time(0));

    for (i = 0; i < TAM; i++) { //for para repetir os lançamentos dos dados na quantia do valor criado
        lancamento_dado1 = rand();
        lancamento_dado2 = rand();

        //para aleatorizar as jogadas até 6 numeros
        dado1[i] = ((lancamento_dado1 % 6) + 1);
        dado2[i] = ((lancamento_dado2 % 6) + 1);
       // printf("[%i] = %i [%i] = %i\n", i, dado1[i], i, dado2[i]); Para printar todos os valores

        soma = (dado1[i] + dado2[i]); //armazenar a soma de cada um para entrar ans condições
        if (soma == 2) {//cadeia de ifs para caso a soma da condição seja true acrescente um número na posição do vetor indicado
            quantia[0]++;
        }
        else if (soma == 3) {
            quantia[1]++;
        }
        else if (soma == 4) {
            quantia[2]++;
        }
        else if (soma == 5) {
            quantia[3]++;
        }
        else if (soma == 6) {
            quantia[4]++;
        }
        else if (soma == 7) {
            quantia[5]++;
        }
        else if (soma == 8) {
            quantia[6]++;
        }
        else if (soma == 9) {
            quantia[7]++;
        }
        else if (soma == 10) {
            quantia[8]++;
        }
        else if (soma == 11) {
            quantia[9]++;
        }
        else if (soma == 12) {
            quantia[10]++;
        }

    }
    printf("");
    for (i = 0;i < 11;i++) { //for para printar os valores da quantia de somas
        
        printf("O valor da soma para o número %i tem quantia = %.0f\n",i+2, quantia[i]);
    }
    printf("");
    for (i = 0; i < 11; i++) {//for para printar os valores da quantia de somas em porcentagem

        porcentagem[i] = quantia[i]/TAM;
        porcentagem[i] = porcentagem[i] * 100;
        printf("A quantia em porcentagem da soma para o número %i = %.2f%\n",i+2 ,porcentagem[i]);

    }
  
    for (i = 0; i < TAM; i++) { //cadeia de if junto ao for para por os números de dados para cada caso nas posições das matrizes
        if (dado2[i] == 1) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[0][j]++;
                }
            }
        }
        else if (dado2[i] == 2) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[1][j]++;
                }
            }
        }
        else if (dado2[i] == 3) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[2][j]++;
                }
            }
        }
        else if (dado2[i] == 4) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[3][j]++;
                }
            }
        }
        else if (dado2[i] == 5) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[4][j]++;
                }
            }
        }
        else if (dado2[i] == 6) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[5][j]++;
                }
            }
        }
        else if (dado1[i] == 1) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[j][0]++;
                }
            }
        }
        else if (dado1[i] == 2) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[j][1]++;
                }
            }
        }
        else if (dado1[i] == 3) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[j][2]++;
                }
            }
        }
        else if (dado1[i] == 4) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[j][3]++;
                }
            }
        }
        else if (dado1[i] == 5) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[j][4]++;
                }
            }
        }
        else if (dado1[i] == 6) {
            for (j = 1; j <= 6; j++) {
                if (dado1[i] == j) {
                    matriz[j][5]++;
                }
            }
        }


    }
    
    printf("");
  printf("\nQuantia de valores que combinam linha e coluna:\n");
    for (i = 0;i < 6;i++) {// for para printar os valores da primeira matriz
        for (j = 1;j <= 6;j++) {

            printf("[%i][%i] = %.0f\n", i+1, j, matriz[i][j]);
            soma += matriz[i][j];
        }
    }
printf("");
  printf("\nQuantia de valores que combinam linha e coluna em forma de porcentagem:\n");
    for (i = 0;i < 6;i++) {// for para printar e tranformar os valores da matriz anterior em porcentagem
        for (j = 1;j <= 6;j++) {

            matrizPorcentagem[i][j] = matriz[i][j] / TAM;
            matrizPorcentagem[i][j] = matrizPorcentagem[i][j] * 100;
            printf("[%i][%i] = %.2f %\n", i+1, j, matrizPorcentagem[i][j]);
        }
    }



    return 0;
}
