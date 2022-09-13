
#include <stdio.h>





   

int main(void){

int quantAlunos,quantProvas; //Variaveis do tipo inteiro para armazenar a quantia de provas e alunos
 float mediaAluno;
    float mediaTotal = 0; 
    int M = 0;
    int N = 0;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d",&quantAlunos); //Ler  a quantidade de Alunos na turma
    printf("Digite a quantidade de provas: ");
    scanf("%d",&quantProvas); // Ler a quantidade de provas que a turma realizou

    float notas[quantProvas][quantAlunos];//Matriz para armazenar as notas de tal aluno   
// for utilizado para colocar as notas dos alunos na  matriz
  
    for(M = 0; M < quantAlunos;M++){
         printf("Digite as notas do %d° aluno: \n",M+1);
        for( N = 0; N < quantProvas;N++){
            scanf("%f",&notas[M][N]); //Ler as notas dos alunos
        }
        
    }

   
// for para demostrar a media dos alunos
    for( M = 0; M< quantAlunos;M++){ 
        mediaAluno = 0;//Zerar a media a cada loop
        for( N = 0; N< quantProvas;N++){
            mediaAluno += notas[M][N];//Passar a nota do aluno para a variavel
        }
        mediaAluno /= quantProvas;
        mediaTotal += mediaAluno;
        printf("A media do aluno %d e: %.2f\n",M+1,mediaAluno); // mostra na tela a media de cada aluno

    }
    printf("A media da turma e: %.2f\n",mediaTotal/quantAlunos); // mostra na tela  a media da turma interia

    return 0;
}



