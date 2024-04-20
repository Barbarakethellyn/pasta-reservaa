#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
//definindo variaveis
int i;
for(i=1;i<=10;i++){
        printf("\n %d",i);
}
for(i=1;i<=10;i++){
        printf("\n 5 x %d = %d",i, 5*i);
}
}
