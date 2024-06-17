#include <stdio.h>
int main(){
int tempo, dias,horas, minutos, segundos,resto;
printf("Quantos segundos?\n");
scanf("%d",&tempo);
dias= tempo/86400;
resto=tempo%86400;
horas=resto/3600;
resto=tempo%3600;
minutos=resto/60;
segundos=tempo%60;
printf("%d correspondem %d dias %d horas %d minutos %d segundos ", tempo,dias,horas,minutos,segundos);
return 0;



}