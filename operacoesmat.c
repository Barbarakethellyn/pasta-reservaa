#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"");
// definindo variavel
int a=5, b=6;
//soma
printf("\n o resultado da soma entre %d + %d = %d", a, b, a+b);
//subtra��o
printf("\n o resultado da subtra��o entre %d - %d = %d", a, b, a-b);
//multiplica��o
printf("\n o resultado da multiplica��o entre %d * %d = %d", a, b, a*b);
//divis�o
printf("\n o resultado da divis�o entre %d / %d = %d", a, b, a/b);
//resto da divis�o
printf("\n o resto da divis�o entre %d e %d = %d", a, b, a%b);
//valor absoluto
printf("\n o valor absoluto de %d - %d = %d ", abs(a-b));
}
