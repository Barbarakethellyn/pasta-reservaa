#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main (){
    setlocale (LC_ALL,"");
// DEFININDO VARIAVEL
int a=6;
// CONDIÇÃO
if (a%2==1){
        printf("a condição é impar");
}
else{
        printf("a condição é par");

}
}
