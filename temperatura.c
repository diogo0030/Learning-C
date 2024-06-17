#include <stdio.h>
int main(){

float temp,kelvin,fa;
printf("Qual a temperatura?\n");
scanf("%f",&temp);
kelvin= temp+273.15;
fa= temp*9/5+32;
printf("Temperatura em kelvin:%f\n",kelvin);
printf("Temperatura em fahrenheit:%f\n",fa);
return 0;






}