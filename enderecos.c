#include <stdio.h>

int *vmaior(int*valor1 , int *valor2)
{
    if (*valor1>*valor2)
    return valor1;
    if(*valor1<*valor2)
    return valor2;
}



int main(){
int valor1,valor2;

printf("Insira os valores\n");
scanf("%d %d",&valor1,&valor2);
printf("Endereços: %p , %p\n",&valor1 ,&valor2);
printf("Endereço do maior:%p\n", &*vmaior(&valor1,&valor2));
printf("Valor:%d\n",*vmaior(&valor1,&valor2));
return 0;
}