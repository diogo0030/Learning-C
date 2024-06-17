#include <stdio.h>
int main (){
int x, y, z;
float s1,s2,rest;
printf("kilometros\n");
scanf("%d",&x);
printf("Velocidade\n");
scanf("%d",&y);
printf("limite de velocidade\n");
scanf("%d",&z);

s1=(float)x/y;
s2=(float)x/z;
s1=s1*60;
s2=s2*60;
rest=s2-s1;
printf("%.2f minuros\n",rest);

return 0;




}