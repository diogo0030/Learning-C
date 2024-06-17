#include <stdio.h>
int main(){
float numero;
printf("Indique o numero\n");
scanf("%f",&numero);
if (numero>120 && numero<=245)
printf("O numero encontra no intervalo ]120,245]\n");
else if (numero>=5 && numero<45)
printf("O numero encontra no intervalo [5,45[\n");
else if (numero<-10)
printf("O numero encontra no intervalo ]-∞,-10]\n");
else 
printf("O numero nao encontra nos intervalos\n");

return 0;






}