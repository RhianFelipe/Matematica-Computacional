
#include <stdio.h>
#include <string.h>

struct endereco {//structs com os dados de  enderecos
    char rua[100];
    char bairro[100];
    char cidade[100];
    char estado[100];
    int cep;

};

struct cadastro {//structs com todos os dados para cadastro do usuario
    char nome[100];
    float salario;
    int identidade;
    int cpf;
    char estadoCivil[100];
    int telefone;
    int idade;
    char sexo;

    struct endereco endereco;


};

int main()
{

    int idadeFiltro;

    struct cadastro pessoa[5];


    for (int i = 0;i < 5;i++) { //for para formulario de cadastro do usuario

        printf("\n|-----[CADASTRO DO %i° USUARIO]-----|\n", i + 1);
        printf("Digite seu nome\n");
        fgets(pessoa[i].nome, 100, stdin);

        printf("Digite seu salario\n");
        scanf(" %f", &pessoa[i].salario);
        while (getchar() != '\n');
        printf("Digite sua identidade\n");
        scanf(" %i", &pessoa[i].identidade);
        while (getchar() != '\n');
        printf("Digite seu CPF\n");
        scanf(" %i", &pessoa[i].cpf);
        while (getchar() != '\n');
        printf("Digite seu estado civil\n");
        fgets(pessoa[i].estadoCivil, 100, stdin);

        printf("Digite seu telefone\n");
        scanf(" %i", &pessoa[i].telefone);
        while (getchar() != '\n');
        printf("Digite seu idade\n");
        scanf(" %i", &pessoa[i].idade);
        while (getchar() != '\n');
        printf("Digite seu sexo(Digite M para masculino ou F para feminino)\n");
        scanf("%c", &pessoa[i].sexo);
        while (getchar() != '\n');
        //endereco
        printf("Digite o nome da rua de sua casa\n");
        fgets(pessoa[i].endereco.rua, 100, stdin);

        printf("Digite  nome do seu bairro\n");
        fgets(pessoa[i].endereco.bairro, 100, stdin);

        printf("Digite  o nome de sua cidade\n");
        fgets(pessoa[i].endereco.cidade, 100, stdin);

        printf("Digite o nome de seu estado\n");
        fgets(pessoa[i].endereco.estado, 100, stdin);

        printf("Digite seu CEP\n");
        scanf(" %i", &pessoa[i].endereco.cep);
        while (getchar() != '\n');
    }

   //cadeia de if else para ver qual a maior idade entre os 5 cadastrados
    if (pessoa[0].idade > pessoa[1].idade && pessoa[0].idade > pessoa[2].idade && pessoa[0].idade > pessoa[3].idade && pessoa[0].idade > pessoa[4].idade) {
        printf("A maior idade e %i\n", pessoa[0].idade);
    }
    else if (pessoa[1].idade > pessoa[2].idade && pessoa[1].idade > pessoa[3].idade && pessoa[1].idade > pessoa[4].idade) {
        printf("A maior idade e %i\n", pessoa[1].idade);
    }
    else if (pessoa[2].idade > pessoa[3].idade && pessoa[2].idade > pessoa[4].idade) {
        printf("A maior idade e %i\n", pessoa[2].idade);
    }
    else if (pessoa[3].idade > pessoa[4].idade) {
        printf("A maior idade e %i\n", pessoa[3].idade);
    }
    else {
        printf("A maior idade e %i\n", pessoa[3].idade);
    }

 //if com for para ver quem é masculino
    for (int i = 0;i < 5;i++) {
        if (pessoa[i].sexo == 'M') {
            printf("%s e masculino\n", pessoa[i].nome);
        }
    }
//if com for para ver quem tem salario maior que 1000 reais
    for (int i = 0;i < 5;i++) {
        if (pessoa[i].salario > 1000) {
            printf("%s tem salario maior que 100 reias\n",pessoa[i].nome);
        }
    }
 //Solicitação de filtro por idade ao usuario
    printf("Digite a idade que deseja filtrar\n");
    scanf(" %i", &idadeFiltro);
    while (getchar() != '\n');

//for para mostrar as pessoas coma  aidade filtrada
    for (int i = 0;i < 5;i++) {
        if (pessoa[i].idade == idadeFiltro) {
            printf("\nNome do usuario:%s \n", pessoa[i].nome);
            printf("Salario:%.2f\n", pessoa[i].salario);
            printf("Identidade:%i\n", pessoa[i].identidade);
            printf("CPF:%i\n", pessoa[i].cpf);
            printf("Estado civil:%s", pessoa[i].estadoCivil);
            printf("Telefone:%i\n", pessoa[i].telefone);
            printf("Idade:%i\n", pessoa[i].idade);
            if (pessoa[i].sexo == 'M') {
                printf("Sexo:Masculino");
            }
            else {
                printf("Sexo:Feminino");
            }
            //endereco
            printf("Rua:%s", pessoa[i].endereco.rua);
            printf("Bairro:%s", pessoa[i].endereco.bairro);
            printf("Cidade:%s", pessoa[i].endereco.cidade);
            printf("Estado:%s", pessoa[i].endereco.estado);
            printf("CEP:%i\n", pessoa[i].endereco.cep);



        }

    }




    return 0;
}





