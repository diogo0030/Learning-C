#include <stdio.h>
int main(){
int cont ;
float media,soma ,valor2, valor,maximo = 0,minimo = 100000;
printf("Insira o valor\n");
scanf("%f",&valor);


cont=0;
soma=0;



while (valor)

{soma=soma+valor;
cont=cont+1;
scanf("%f",&valor);
if (maximo>valor)
maximo=valor;
else if (minimo<valor)
minimo=valor2;

}

media=soma/cont;
printf("A media é %f \n",media);
printf("%.2f \n",maximo);
printf("%.2f \n",minimo);



}