#include <stdio.h>
int main(){

int num,digito,contar=0;
printf("Insira o numero inteiro\n");
scanf("%d",&num);
printf("Insiara o digito\n ");
scanf("%d",&digito);
while(num!=0)
{  if (num%10==digito)
contar=contar+1;
    num=num/10;


}
printf("O digito %d aparece %d vezes ",digito ,contar);


return 0;
}