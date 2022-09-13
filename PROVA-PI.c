#include <stdio.h>
#include <time.h>

int main()
{
    int lancamento_dado1, lancamento_dado2; //Variaveis para randomizar os lançamentos de dados
    int ponto = 1, derrota = 0, vitoria = 3, jogadores[3]; // status do jogador
    int dado1_j1, dado2_j1, dado1_j2, dado2_j2, dado1_j3, dado2_j3;//Manipulação dos valores dos dados para cada jogador
    int resultado_somaJ1 = 0, resultado_somaJ2 = 0, resultado_somaJ3 = 0;// Resultado das somas dos valores dos dados para cada jogador
    int ponto1 = 0, ponto2 = 0, ponto3 = 0; //Para condição de 'ponto'

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

        jogadores[0] = vitoria;

    }
    else if (resultado_somaJ1 == 2 || resultado_somaJ1 == 3 || resultado_somaJ1 == 12) {//Condição para derrota
        printf("Resultado do Jogador 1: Derrota com soma %i \n", resultado_somaJ1);

        jogadores[0] = derrota;
    }//condição de 'Ponto'
    else if (resultado_somaJ1 == 4 || resultado_somaJ1 == 5 || resultado_somaJ1 == 6 || resultado_somaJ1 == 8 ||
        resultado_somaJ1 == 9 || resultado_somaJ1 == 10) {//condicao para 'ponto'
        printf("Resultado do Jogador 1: 'Ponto' com soma %i \n", resultado_somaJ1);

        ponto1 = resultado_somaJ1;
        jogadores[0] = ponto;
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

        jogadores[1] = vitoria;

    }
    else if (resultado_somaJ2 == 2 || resultado_somaJ2 == 3 || resultado_somaJ2 == 12) {//condicao para derrota
        printf("Resultado do Jogador 2: Derrota com soma %i \n", resultado_somaJ2);
        jogadores[1] = derrota;


    }//condicao para 'ponto'
    else if (resultado_somaJ2 == 4 || resultado_somaJ2 == 5 || resultado_somaJ2 == 6 || resultado_somaJ2 == 8 ||
        resultado_somaJ2 == 9 || resultado_somaJ2 == 10) {//condicao para 'ponto'
        printf("Resultado do Jogador 2: 'Ponto' com soma %i \n", resultado_somaJ2);

        jogadores[1] = ponto;
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
        printf("\n");
        jogadores[2] = vitoria;

    }
    else if (resultado_somaJ3 == 2 || resultado_somaJ3 == 3 || resultado_somaJ3 == 12) { //condicao para Derrota
        printf("Resultado do Jogador 3: Derrota com soma %i \n", resultado_somaJ3);
        printf("\n");
        jogadores[2] = derrota;
    }
    else if (resultado_somaJ3 == 4 || resultado_somaJ3 == 5 || resultado_somaJ3 == 6 || resultado_somaJ3 == 8
        || resultado_somaJ3 == 9 || resultado_somaJ3 == 10) { //condicao para 'ponto'
        printf("Resultado do Jogador 3: 'Ponto' com soma %i \n", resultado_somaJ3);
        printf("\n");

        jogadores[2] = ponto;
        ponto3 = resultado_somaJ3;
    }


    //Enquanto não tiver nenhum jogador vencedor,faça as condiçoes
    while (jogadores[0] != vitoria && jogadores[1] != vitoria && jogadores[2] != vitoria) {

        if (jogadores[0] != derrota) {//Verifica se o jogador 1 foi derrotado
            printf("Lançamento dos dados do Jogador 1...\n");
            lancamento_dado1 = rand();
            lancamento_dado2 = rand();
            dado1_j1 = ((lancamento_dado1 % 6) + 1);
            dado2_j1 = ((lancamento_dado2 % 6) + 1);
            resultado_somaJ1 = dado1_j1 + dado2_j1;

            if (resultado_somaJ1 == ponto1) {//Nova condição de vitoria caso o jogador receba o status de  'ponto'
                printf("Resultado do Jogador 1: Vitoria com soma %i \n", resultado_somaJ1);
                printf("\n");

                jogadores[0] = vitoria;
            }
            else if (resultado_somaJ1 == 7) {//Nova condição de Derrota caso o jogador receba o status de  'ponto'
                printf("Resultado do Jogador 1: Derrota com soma %i \n", resultado_somaJ1);
                printf("\n");

                jogadores[0] = 0;
            }
            else {
                printf("Resultado do Jogador 1: 'Ponto' com soma %i \n", resultado_somaJ1);
                printf("\n");

                jogadores[0] = ponto;
            }

        }


        if (jogadores[1] != derrota) {//Verifica se o jogador 2 foi derrotado
            printf("Lançamento dos dados do Jogador 2...\n");
            lancamento_dado1 = rand();
            lancamento_dado2 = rand();
            dado1_j2 = ((lancamento_dado1 % 6) + 1);
            dado2_j2 = ((lancamento_dado2 % 6) + 1);
            resultado_somaJ2 = dado1_j2 + dado2_j2;

            if (resultado_somaJ2 == ponto2) {//Nova condição de vitoria caso o jogador receba o status de  'ponto'
                printf("Resultado do Jogador 2: Vitoria com soma %i \n", resultado_somaJ2);
                printf("\n");

                jogadores[1] = vitoria;
            }
            else if (resultado_somaJ1 == 7) {//Nova condição de Derrota caso o jogador receba o status de  'ponto'
                printf("Resultado do Jogador 2: Derrota com soma %i \n", resultado_somaJ2);
                printf("\n");

                jogadores[1] = 0;
            }
            else {
                printf("Resultado do Jogador 2: 'Ponto' com soma %i \n", resultado_somaJ2);
                printf("\n");

                jogadores[1] = ponto;
            }

        }

        if (jogadores[2] != derrota) {//Verifica se o jogador 3 foi derrotado
            printf("Lançamento dos dados do Jogador 3...\n");
            lancamento_dado1 = rand();
            lancamento_dado2 = rand();
            dado1_j3 = ((lancamento_dado1 % 6) + 1);
            dado2_j3 = ((lancamento_dado2 % 6) + 1);
            resultado_somaJ3 = dado1_j3 + dado2_j3;

            if (resultado_somaJ3 == ponto3) {//Nova condição de vitoria caso o jogador receba o status de  'ponto'
                printf("Resultado do Jogador 3: Vitoria com soma %i \n", resultado_somaJ3);
                printf("\n");

                jogadores[2] = vitoria;
            }
            else if (resultado_somaJ3 == 7) {//Nova condição de Derrota caso o jogador receba o status de  'ponto'
                printf("Resultado do Jogador 3: Derrota com soma %i \n", resultado_somaJ3);
                printf("\n");

                jogadores[2] = 0;
            }
            else {
                printf("Resultado do Jogador 3: 'Ponto' com soma %i \n", resultado_somaJ3);
                printf("\n");

                jogadores[2] = ponto;
            }
        }

    }


    return 0;
}


