#include <stdio.h>
#include <time.h>
#include <stdbool.h>
    int main()
{
    int lancamento_dado1, lancamento_dado2; //Variavel para randomizar
    bool ponto, derrota, vitoria, j1, j2, j3; // status do jogador
    int dado1_j1, dado2_j1, dado1_j2, dado2_j2, dado1_j3, dado2_j3;//Manipulação dos valores dos dados
    int resultado_somaJ1, resultado_somaJ2, resultado_somaJ3;// Resultado das somas dos valores dos dados
    int ponto1, ponto2, ponto3; //Para condição de 'ponto'
    printf("|-----PRIMEIRA RODADA-----|\n");
    srand(time(0));
    //randomizar os dados do 1º jogador
    printf("Lançamento dos dados do Jogador 1...\n");
    lancamento_dado1 = rand();
    lancamento_dado2 = rand();
    dado1_j1 = ((lancamento_dado1 % 6) + 1);
    dado2_j1 = ((lancamento_dado2 % 6) + 1);
    resultado_somaJ1 = dado1_j1 + dado2_j1;

    if (resultado_somaJ1 == 7 || resultado_somaJ1 == 11) { //condição para  Vitoria
        printf("Resultado do Jogador 1: Vitoria com soma  %i \n", resultado_somaJ1);
        vitoria = true;
        j1 = vitoria;

    }
    else if (resultado_somaJ1 == 2 || resultado_somaJ1 == 3 || resultado_somaJ1 == 12) {//Condição para derrota
        printf("Resultado do Jogador 1: Derrota com soma %i \n", resultado_somaJ1);
        derrota = true;
        j1 = derrota;
    }//condição de 'Ponto'
    else if (resultado_somaJ1 == 4 || resultado_somaJ1 == 5 || resultado_somaJ1 == 6 || resultado_somaJ1 == 8 || resultado_somaJ1 == 9 || resultado_somaJ1 == 10) {
        printf("Resultado do Jogador 1: 'Ponto' com soma %i \n", resultado_somaJ1);
        ponto = true;
        ponto1 = resultado_somaJ1;
        j1 = ponto;
    }
    printf("\n");
    //randomizar os dados do 2º jogador
    printf("Lançamento dos dados do Jogador 2...\n");

    lancamento_dado1 = rand();
    lancamento_dado2 = rand();
    dado1_j2 = ((lancamento_dado1 % 6) + 1);
    dado2_j2 = ((lancamento_dado2 % 6) + 1);
    resultado_somaJ2 = dado1_j2 + dado2_j2;

    if (resultado_somaJ2 == 7 || resultado_somaJ2 == 11) {//Condicao para Vitoria

        printf("Resultado do Jogador 2: Vitoria com soma %i \n", resultado_somaJ2);
        vitoria = true;
        j2 = vitoria;

    }
    else if (resultado_somaJ2 == 2 || resultado_somaJ2 == 3 || resultado_somaJ2 == 12) {//condicao para derrota
        printf("Resultado do Jogador 2: Derrota com soma %i \n", resultado_somaJ2);
        j2 = derrota;
        derrota = true;

    }//condicao para 'ponto'
    else if (resultado_somaJ2 == 4 || resultado_somaJ2 == 5 || resultado_somaJ2 == 6 || resultado_somaJ2 == 8 || resultado_somaJ2 == 9 || resultado_somaJ2 == 10) {
        printf("Resultado do Jogador 2: 'Ponto' com soma %i \n", resultado_somaJ2);
        ponto = true;
        j2 = ponto;
        ponto2 = resultado_somaJ2;
    }
    printf("\n");
    //randomizar os dados do 3º jogador
    printf("Lançamento dos dados do Jogador 3...\n");
    lancamento_dado1 = rand();
    lancamento_dado2 = rand();
    dado1_j3 = ((lancamento_dado1 % 6) + 1);
    dado2_j3 = ((lancamento_dado2 % 6) + 1);
    resultado_somaJ3 = dado1_j3 + dado2_j3;
    if (resultado_somaJ3 == 7 || resultado_somaJ3 == 11) { //condiçao para Vitoria
        printf("Resultado do Jogador 3:  Vitoria com soma %i \n", resultado_somaJ3);
        vitoria = true;
        j3 = vitoria;

    }
    else if (resultado_somaJ3 == 2 || resultado_somaJ3 == 3 || resultado_somaJ3 == 12) { //condicao para Derrota
        printf("Resultado do Jogador 3: Derrota com soma %i \n", resultado_somaJ3);
        derrota = true;
        j3 = derrota;
    }//condicao para 'ponto'
    else if (resultado_somaJ3 == 4 || resultado_somaJ3 == 5 || resultado_somaJ3 == 6 || resultado_somaJ3 == 8 || resultado_somaJ3 == 9 || resultado_somaJ3 == 10) {
        printf("Resultado do Jogador 3: 'Ponto' com soma %i \n", resultado_somaJ3);
        ponto = true;
        j3 = ponto;
        ponto3 = resultado_somaJ3;
    }

    //Cadeia de condições caso o jogo deva continuar,se não tiver Vitoria na primeira rodada

    if (j1 == derrota) {//Caso o j1 tiver perdido,fazer  apenas o jogo entre j2 e j3

        while (j2 != vitoria || j3 != vitoria) {//enquanto ninguem conseguir o status de vitoria,continue o jogo
            printf("|-----PRÓXIMA RODADA-----|");
            printf("\n");
            if (j2 == ponto) {
                //randomizar os dados do 2º jogador
                printf("Lançamento dos dados do Jogador 2...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j2 = ((lancamento_dado1 % 6) + 1);
                dado2_j2 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ2 = dado1_j2 + dado2_j2;

                if (resultado_somaJ2 == ponto2) {
                    printf("Resultado do Jogador 2: Vitoria com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    vitoria = true;
                    j2 = vitoria;
                } else if (resultado_somaJ2 == 7) {
                    printf("Resultado do Jogador 2: Derrotacom soma %i \n", resultado_somaJ2);
                    printf("\n");
                    derrota = true;
                    j2 = derrota;
                } else {
                    printf("Resultado do Jogador 2: 'Ponto' com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    ponto = true;
                    j2 = ponto;
                }

            }

            if (j3 == ponto) {
                //randomizar os dados do 3º jogador
                printf("Lançamento dos dados do Jogador 3...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j3 = ((lancamento_dado1 % 6) + 1);
                dado2_j3 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ3 = dado1_j3 + dado2_j3;

                if (resultado_somaJ3 == ponto3) {
                    printf("Resultado do Jogador 3: Vitoria com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    vitoria = true;
                    j3 = vitoria;
                } else if (resultado_somaJ3 == 7) {
                    printf("Resultado do Jogador 3: Derrota com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    derrota = true;
                    j3 = derrota;
                } else {
                    printf("Resultado do Jogador 3: 'Ponto' com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    ponto = true;
                    j3 = ponto;
                }
            }

        }


    } else if (j2 == derrota) {//Caso o j2 tiver perdido,fazer  apenas o jogo entre j1 e j3

        while (j1 != vitoria || j3 != vitoria) {//enquanto ninguem conseguir o status de vitoria,continue o jogo
            printf("|-----PRÓXIMA RODADA-----|");
            printf("\n");

            if (j1 == ponto) {
                //randomizar os dados do 1º jogador
                printf("Lançamento dos dados do Jogador 1...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j1 = ((lancamento_dado1 % 6) + 1);
                dado2_j1 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ1 = dado1_j1 + dado2_j1;

                if (resultado_somaJ1 == ponto1) {
                    printf("Resultado do Jogador 1: Vitoria com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    vitoria = true;
                    j1 = vitoria;

                } else if (resultado_somaJ1 == 7) {
                    printf("Resultado do Jogador 1: Derrota com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    derrota = true;
                    j1 = derrota;
                } else {
                    printf("Resultado do Jogador 1: 'ponto' com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    ponto = true;
                    j1 = ponto;
                }

            }

            if (j3 == ponto) {
                //randomizar os dados do 3º jogador
                printf("Lançamento dos dados do Jogador 3...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j3 = ((lancamento_dado1 % 6) + 1);
                dado2_j3 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ3 = dado1_j3 + dado2_j3;

                if (resultado_somaJ3 == ponto3) {
                    printf("Resultado do Jogador 3: Vitoria com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    vitoria = true;
                    j3 = vitoria;
                } else if (resultado_somaJ3 == 7) {
                    printf("Resultado do Jogador 3: Derrota com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    derrota = true;
                    j3 = derrota;
                } else {
                    printf("Resultado do Jogador 3: 'Ponto' com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    ponto = true;
                    j3 = ponto;
                }

            } // if(j1==ponto)

        }

    } else if (j3 == derrota) {//Caso o j3 tiver perdido,fazer  apenas o jogo entre j1 e j2

        while (j1 != vitoria || j2 != vitoria) {//enquanto ninguem conseguir o status de vitoria,continue o jogo
            printf("|-----PRÍXOMA RODADA-----|");
            printf("\n");

            if (j1 == ponto) {
                //randomizar os dados do 1º jogador
                printf("Lançamento dos dados do Jogador 1...\n");
                printf("\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j1 = ((lancamento_dado1 % 6) + 1);
                dado2_j1 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ1 = dado1_j1 + dado2_j1;

                if (resultado_somaJ1 == ponto1) {
                    printf("Resultado do Jogador 1: Vitoria com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    vitoria = true;
                    j1 = vitoria;

                } else if (resultado_somaJ1 == 7) {
                    printf("Resultado do Jogador 1: Derrota com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    derrota = true;
                    j1 = derrota;
                } else {
                    printf("Resultado do Jogador 1: 'Ponto'com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    ponto = true;
                    j1 = ponto;
                }

            }
            if (j2 == ponto) {
                //randomizar os dados do 2º jogador
                printf("Lançamento dos dados do Jogador 2...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j2 = ((lancamento_dado1 % 6) + 1);
                dado2_j2 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ2 = dado1_j2 + dado2_j2;

                if (resultado_somaJ2 == ponto2) {
                    printf("Resultado do Jogador 2: Vitoria com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    vitoria = true;
                    j2 = vitoria;
                } else if (resultado_somaJ2 == 7) {
                    printf("Resultado do Jogador 2: Derrota com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    derrota = true;
                    j2 = derrota;
                } else {
                    printf("Resultado do Jogador 2: 'Ponto' com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    ponto = true;
                    j2 = ponto;
                }

            }
        }
    } else if (j1 == derrota && j2 == derrota) {
        while (j3 != vitoria) {//enquanto ninguem conseguir o status de vitoria,continue o jogo
            printf("|-----PRÍXOMA RODADA-----|");
            printf("\n");
            if (j3 == ponto) {
                //randomizar os dados do 2º jogador
                printf("Lançamento dos dados do Jogador 2...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j3 = ((lancamento_dado1 % 6) + 1);
                dado2_j3 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ3 = dado1_j3 + dado2_j3;

                if (resultado_somaJ3 == ponto3) {
                    printf("Resultado do Jogador 3: Vitoria com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    vitoria = true;
                    j3 = vitoria;
                } else if (resultado_somaJ3 == 7) {
                    printf("Resultado do Jogador 3: Derrota com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    derrota = true;
                    j3 = derrota;
                } else {
                    printf("Resultado do Jogador 3: 'Ponto' com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    ponto = true;
                    j3 = ponto;
                }

            }
        }
    } else if (j1 == derrota && j3 == derrota) {
        while (j2 != vitoria) {//enquanto ninguem conseguir o status de vitoria,continue o jogo
            printf("|-----PRÍXOMA RODADA-----|");
            printf("\n");

            if (j2 == ponto) {
                //randomizar os dados do 2º jogador
                printf("Lançamento dos dados do Jogador 2...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j2 = ((lancamento_dado1 % 6) + 1);
                dado2_j2 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ2 = dado1_j2 + dado2_j2;

                if (resultado_somaJ2 == ponto2) {
                    printf("Resultado do Jogador 2: Vitoria com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    vitoria = true;
                    j2 = vitoria;
                } else if (resultado_somaJ2 == 7) {
                    printf("Resultado do Jogador 2: Derrota com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    derrota = true;
                    j2 = derrota;
                } else {
                    printf("Resultado do Jogador 2: 'Ponto' com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    ponto = true;
                    j2 = ponto;
                }

            }
        }

    } else if (j2 == derrota && j3 == derrota) {
        while (j1 != vitoria) {//enquanto ninguem conseguir o status de vitoria,continue o jogo
            printf("|-----PRÍXOMA RODADA-----|");
            printf("\n");

            if (j1 == ponto) {
                //randomizar os dados do 1º jogador
                printf("Lançamento dos dados do Jogador 1...\n");
                printf("\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j1 = ((lancamento_dado1 % 6) + 1);
                dado2_j1 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ1 = dado1_j1 + dado2_j1;

                if (resultado_somaJ1 == ponto1) {
                    printf("Resultado do Jogador 1: Vitoria com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    vitoria = true;
                    j1 = vitoria;

                } else if (resultado_somaJ1 == 7) {
                    printf("Resultado do Jogador 1: Derrota com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    derrota = true;
                    j1 = derrota;
                } else {
                    printf("Resultado do Jogador 1: 'Ponto'com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    ponto = true;
                    j1 = ponto;
                }

            }

        }



    } else {//Caso nenhum dos 3 perderam
        while (j1 != vitoria || j2 != vitoria || j3 != vitoria) { ////enquanto ninguem conseguir o status de vitoria,continue o jogo
            printf("|-----PRÓXIMA RODADA-----|");
            printf("\n");

            if (j1 == ponto) {
                //randomizar os dados do 1º jogador
                printf("Lançamento dos dados do Jogador 1...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j1 = ((lancamento_dado1 % 6) + 1);
                dado2_j1 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ1 = dado1_j1 + dado2_j1;

                if (resultado_somaJ1 == ponto1) {
                    printf("Resultado do Jogador 1: Vitoria com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    vitoria = true;
                    j1 = vitoria;

                } else if (resultado_somaJ1 == 7) {
                    printf("Resultado do Jogador 1: Derrota com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    derrota = true;
                    j1 = derrota;
                } else {
                    printf("Resultado do Jogador 1: 'Ponto' com soma %i \n", resultado_somaJ1);
                    printf("\n");
                    ponto = true;
                    j1 = ponto;
                }

            }

            if (j2 == ponto) {
                //randomizar os dados do 2º jogador
                printf("Lançamento dos dados do Jogador 2...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j2 = ((lancamento_dado1 % 6) + 1);
                dado2_j2 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ2 = dado1_j2 + dado2_j2;

                if (resultado_somaJ2 == ponto2) {
                    printf("Resultado do Jogador 2: Vitoria com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    vitoria = true;
                    j2 = vitoria;
                } else if (resultado_somaJ2 == 7) {
                    printf("Resultado do Jogador 2: Derrota com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    derrota = true;
                    j2 = derrota;
                } else {
                    printf("Resultado do Jogador 2: 'Ponta' com soma %i \n", resultado_somaJ2);
                    printf("\n");
                    ponto = true;
                    j2 = ponto;
                }

            }

            if (j3 == ponto) {
                //randomizar os dados do 3º jogador
                printf("Lançamento dos dados do Jogador 3...\n");
                lancamento_dado1 = rand();
                lancamento_dado2 = rand();
                dado1_j3 = ((lancamento_dado1 % 6) + 1);
                dado2_j3 = ((lancamento_dado2 % 6) + 1);
                resultado_somaJ3 = dado1_j3 + dado2_j3;

                if (resultado_somaJ3 == ponto3) {
                    printf("Resultado do Jogador 3: Vitoria com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    vitoria = true;
                    j3 = vitoria;
                } else if (resultado_somaJ3 == 7) {
                    printf("Resultado do Jogador 3: Derrota com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    derrota = true;
                    j3 = derrota;
                } else {
                    printf("Resultado do Jogador 3: 'Ponto' com soma %i \n", resultado_somaJ3);
                    printf("\n");
                    ponto = true;
                    j3 = ponto;
                }

            }

        }

    }


    return 0;
}


