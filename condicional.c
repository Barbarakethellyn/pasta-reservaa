#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main (){
    setlocale (LC_ALL,"");
// DEFININDO VARIAVEL
int a=6;
// CONDI��O
if (a%2==1){
        printf("a condi��o � impar");
}
else{
        printf("a condi��o � par");

}
}
