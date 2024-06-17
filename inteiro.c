#include <stdio.h>
int main(){
float nr,f;
int dec;
printf("Insira o numero\n");
scanf("%f",&nr);
dec= nr;
f=nr -dec;
printf("Parte inteira = %d\n",dec);
printf("Parte decimal = %f\n",f) ;


return 0;


}