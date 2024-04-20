#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"");
// definindo variavel
int a=5, b=6;
//soma
printf("\n o resultado da soma entre %d + %d = %d", a, b, a+b);
//subtração
printf("\n o resultado da subtração entre %d - %d = %d", a, b, a-b);
//multiplicação
printf("\n o resultado da multiplicação entre %d * %d = %d", a, b, a*b);
//divisão
printf("\n o resultado da divisão entre %d / %d = %d", a, b, a/b);
//resto da divisão
printf("\n o resto da divisão entre %d e %d = %d", a, b, a%b);
//valor absoluto
printf("\n o valor absoluto de %d - %d = %d ", abs(a-b));
}
