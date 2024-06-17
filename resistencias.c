#include <stdio.h>
int main (){

float res1,res2,r1 ,r2;

printf("Resistencia 1\n");
scanf("%f",&res1);
printf("Resistencia 2\n");
scanf("%f",&res2);

r1=res1 +res2;
r2= (res1*res2)/r1;
printf("Em serie:%f\n",r1);
printf("Em paralelo:%f\n",r2);
return 0;


}