#include <stdio.h>

int main(){

int b3,b2,b1,b0,dec;
printf("Numero em binário:\n ");
scanf("%d %d %d %d",&b3,&b2,&b1,&b0);

dec= b3*(2*2*2)+b2*(2*2)+ b1*(2)+ b0*1;

printf("Numero em decimal:%d\n",dec);
printf("Numero em octal:%o\n",dec);
printf("Numero hexadecimal:%x\n",dec);

return 0; 






}