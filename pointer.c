#include <stdio.h>

int *vmaior(int *valor1, int *valor2)
{   if (*valor2>*valor1)
         return valor2;
    if (*valor1>*valor2)
        return valor1;

}


int main()
{
     int a ,b,maior;
     printf("Insira dois valores\n");
     scanf("%d %d",&a,&b);
     printf(" Endereços da variaveis: %p %p\n",&a,&b);
     printf(" Endereço do maior:%p\n",&*vmaior(&a,&b));

}
