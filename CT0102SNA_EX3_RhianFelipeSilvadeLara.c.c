#include <stdio.h>


// nota:ó código será refatorado.
    int main(){

    int kernel[3][3] = { { 1, 0, 1 }, { 0, 1, 0 }, { 1, 0, 1 } //valor Kernel fixo
};

//valores da matriz original para calculo de multiplicação com o kernel
int  calculolinha1_1[3][3] = { { 1, 1, 1 }, { 0, 1, 1 }, { 0, 0, 1 } };
int  calculolinha1_2[3][3] = { { 1, 1, 0 }, { 1, 1, 1 }, { 0, 1, 1 } };
int  calculolinha1_3[3][3] = {{ 1, 0, 0 }, { 1, 1, 0 }, { 1, 1, 1 } };

int  calculolinha2_1[3][3] = { { 0, 1, 1 }, { 0, 0, 1 }, { 0, 0, 1 } };
int  calculolinha2_2[3][3] = { { 1, 1, 1 }, { 0, 1, 1 }, { 0, 1, 1 } };
int  calculolinha2_3[3][3] = { { 1, 1, 0 }, { 1, 1, 1 }, { 1, 1, 0 } };

int  calculolinha3_1[3][3] = { { 0, 0, 1 }, { 0, 0, 1 }, { 0, 1, 1 } };
int  calculolinha3_2[3][3] = { { 0, 1, 1 }, { 0, 1, 1 }, { 1, 1, 0 } };
int  calculolinha3_3[3][3] = {{ 1, 1, 1 }, { 1, 1, 0 }, { 1, 0, 0 } };

//Variaveis para armazenar 
int resultadoMatriz1 = 0;
int resultadoMatriz2 = 0;
int resultadoMatriz3 = 0;

int resultadoMatriz4 = 0;
int resultadoMatriz5 = 0;
int resultadoMatriz6 = 0;

int resultadoMatriz7 = 0;
int resultadoMatriz8 = 0;
int resultadoMatriz9 = 0;

int matrizResultado[3][3];

//calculo da matriz original com o kernel
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        resultadoMatriz1 += kernel[i][j] * calculolinha1_1[i][j];
        resultadoMatriz2 += kernel[i][j] * calculolinha1_2[i][j];
        resultadoMatriz3 += kernel[i][j] * calculolinha1_3[i][j];
        resultadoMatriz4 += kernel[i][j] * calculolinha2_1[i][j];
        resultadoMatriz5 += kernel[i][j] * calculolinha2_2[i][j];
        resultadoMatriz6 += kernel[i][j] * calculolinha2_3[i][j];
        resultadoMatriz7 += kernel[i][j] * calculolinha3_1[i][j];
        resultadoMatriz8 += kernel[i][j] * calculolinha3_2[i][j];
        resultadoMatriz9 += kernel[i][j] * calculolinha3_3[i][j];
    }/*Não consegui transformar a variavel resultadoMatriz em vetor
       ao calcular ele como vetor dava uma resposta indesejada,diferente da variavel.*/
};

//Atribuição dos valores na matriz resultante
matrizResultado[0][0] = resultadoMatriz1;
matrizResultado[0][1] = resultadoMatriz2;
matrizResultado[0][2] = resultadoMatriz3;
matrizResultado[1][0] = resultadoMatriz4;
matrizResultado[1][1] = resultadoMatriz5;
matrizResultado[1][2] = resultadoMatriz6;
matrizResultado[2][0] = resultadoMatriz7;
matrizResultado[2][1] = resultadoMatriz8;
matrizResultado[2][2] = resultadoMatriz9;
/*tambem não consegui utilizar as  matrizes acima diretamente no for para o calculo
alguns valores resultam diferente*/

//mostrando os valores da matriz resultante  na tela
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("Elemento[%i][%i]da matriz resultante = %i \n", i, j, matrizResultado[i][j]);
    }
};



return 0;
}

