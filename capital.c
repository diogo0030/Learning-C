#include <stdio.h>
int main(){
float ca,ci,o,n,u,j,elevado;
printf("Qual a capital inicial?\n");
scanf("%f",&ci);
printf("Qual a taxa de juro dada pelo banco?\n ");
scanf("%f",&j);
printf("Durante quantos anos?\n");
scanf("%f",&n);
elevado=1;
o=(1+(j/100));
u=1;
while(elevado<n+1)
{
u=u*o;
elevado=elevado+1;
}

ca=ci*u;

printf("A capital acumulado ao fim de %.0f anos e de %f euros\n",n,ca);
return 0;
}