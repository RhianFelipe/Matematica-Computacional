#include <stdio.h>
#include <math.h>
//sqrt() == raiz
//pow() potencializacao

int main(void) {
	float x1, x2, y1, y2;//variaveis dos valores das coordenadas
	float disEucladiana, disManhattan, disChebyshev, disChebyshev1 ;//varaiveis dos resultados
	
	//Ler os valores das coordenadas que o usuario colocar
	printf("Digite o valor da coordenada X  do ponto inicial\n");
	scanf("%f", &x1);
	printf("Digite o valor da coordenada X  do ponto final\n");
	scanf("%f", &x2);
	printf("Digite o valor da coordenada Y  do ponto inicial\n");
	scanf("%f", &y1);
	printf("Digite o valor da coordenada Y  do ponto final\n");
	scanf("%f", &y2);

	disEucladiana = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2)); //calculo Eucladiana

	disManhattan = (x1 - y1) + (x2 - y2); //calculo Manhattan

	//calculo dos valores Chebyshev
	disChebyshev = (x1 - y1);
    disChebyshev1 = (x2 - y2);
	
		printf("O calculo da distancia Eucladiana e = %.2f\n", disEucladiana);
		printf("O calculo da distancia Manhattan e = %.2f\n", disManhattan);
		if (disChebyshev >= disChebyshev1) {//condiçãp para ver qual dos 2 pontos resultantes do calculo,e maior
			printf("O calculo da distancia Chebyshev e = %.2f\n", disChebyshev);
		}
		else  {
			printf("O calculo da distancia Chebyshev e = %.2f\n", disChebyshev1);
		}


	return 0;



}