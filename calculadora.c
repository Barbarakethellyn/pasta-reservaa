#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
//DEFININDO VARIAVEIS
float valor1, valor2;
int opcao;
//INFORMANDO CADA VALOR
printf("\n informe o primeiro valor: %f",valor1);
scanf("%f", &valor1);
printf("\n informe o segundo valor: %f", valor2);
scanf("%f",&valor2);
// CRIANDO MENU
printf("\n informe qual sua op��o:");
printf("\n 1- soma");
printf("\n 2- subtra��o");
printf("\n 3- multiplica��o");
printf("\n 1- divis�o\n");
scanf("%d", &opcao);

switch (opcao){
case 1:
    printf("\n o resultado da soma: %f", valor1+valor2);
    break;
case 2:
    printf("n o resultado da subtra��o: %f", valor1-valor2);
    break;
case 3:
    printf("n o resultado da multiplica��o: %f", valor1*valor2);
    break;
case 4:
    if(valor2==0){
            printf("\n n�o realizar a divis�o");
    }
    else{
            printf("\n o resultado da divis�o: %f", valor1/valor2);
    }
    break;
default:
    printf("\n nenhuma das op��es");

}
}

