#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
    setlocale(LC_ALL,"");
//DEFININDO VARIAVEIS
int a=5, b=8;
char x='y';
//CODIGO EXEMPLO COM IF ELSE
if((a==4)&&(x=='b')){
   printf("\n op��o 1");
}
else if((a>=5 && b<=8)&&(x=='y')){
        printf("\n op��o 2");
}
else{
        printf("\n nenhuma das op��es");

}
switch (b){
case 5:
    printf("\n op��o 1");
    break;

case 8:
    printf("\n op�ao 2");
    break;

case 3:
    printf("\n op��o 3");
    break;

default:
    printf("\n nenhuma das op��es");
}
}
