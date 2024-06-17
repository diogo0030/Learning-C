#include <stdio.h>

int main (){
    char op;
    int a , b;

    printf("Insira o primeiro numero:\n");
    scanf(" %d",&a);
    printf("Insira o primeiro numero:\n");
    scanf(" %d",&b);
    printf("Qual a operaçao\n");
    scanf(" %c",&op);

    switch (op)
    {
    case '-': printf("O resultado é:%d\n",a-b);
        
        break;
    case '+': printf("O resultado é:%d\n",a+b);
        break;
        
    case '/': printf("O resultado é:%d\n",a/b);
        break;
    case '*': printf("O resultado é:%d\n",a*b);

    

    }
return 0;
}