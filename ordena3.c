#include <stdio.h>
void ordenna(int *valor1,int *valor2,int *valor3 )
{ 
    if(*valor1>*valor2 & *valor1>*valor3 & *valor2>*valor3)
    printf("%d %d %d",*valor3,*valor2,*valor1);
    if(*valor1>*valor2 & *valor1>*valor3 & *valor3>*valor2)
    printf("%d %d %d",*valor2,*valor3,*valor1);
    if(*valor2>*valor1 & *valor2>*valor3 & *valor1>*valor3)
    printf("%d %d %d",*valor3,*valor1,*valor2);
    if(*valor2>*valor1 & *valor2>*valor3 & *valor3>*valor1)
    printf("%d %d %d",*valor1,*valor3,*valor2);
    if(*valor3>*valor2 & *valor3>*valor1 & *valor2>*valor1)
    printf("%d %d %d",*valor1,*valor2,*valor3);
    if(*valor3>*valor2 & *valor3>*valor1 & *valor1>*valor2)
    printf("%d %d %d",*valor2,*valor1,*valor3);


}
int main()
{
    int valor1, valor2 ,valor3;

    printf("Insira os valores:");
    scanf("%d %d %d",&valor1,&valor2,&valor3);
    ordenna(&valor1,&valor2,&valor3);
}