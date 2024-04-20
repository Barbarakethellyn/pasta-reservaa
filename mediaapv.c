#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL,"");
    //Crie um algoritmo que leia 3 notas e calcule a média entre elas.
    //Se o valor for maior que 7 informe que o aluno foi aprovado,
    //senão foi reprovado.
//DEFININDO VARIAVEIS
float n1, n2, n3, media;
//INFORME AS NOTAS
printf("\n informe a primeira nota %f:",n1);
scanf("%f", &n1);
printf("\n informe a segunda nota %f:", n2);
scanf("%f",&n2);
printf("\n informe a terceira nota %f:", n3);
scanf("%f",&n3);
media = (n1+n2+n3)/3;
printf("\n sua media final é: %f", media);
if (media>=7.0){
        printf("\n voce esta aprovado %.2f");
}
else if (media>=4.0 && media <=6.9){
        printf("\n voce esta em recuperação");
}
else {
        printf("\n voce esta reprovado %.2f");

}
}

