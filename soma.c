#include <stdio.h>
int main (){

int numero,n1,n2,n3, resultado ;
printf("Insira um numero\n");
scanf("%d",&numero);

n1=numero%10;
n2=((numero%100)-n1)/10;
n3=(numero-(numero%100))/100;
resultado=n1+n2+n3;
printf("A soma dos digitos é %d\n",resultado);
return 0;




}