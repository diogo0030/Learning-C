#include <stdio.h>
int main(){
int num;
int i=1,c=0;
printf("Insira o numero\n");
scanf("%d",&num);

while(i<=num/2)
{
    if(i==1)
    {printf("1 ");
     c=c+1;}
else if(num%i==0 && i!=num/2)
{printf(" + %d ",i);
c=c+i;}
 else if(num%i==0 && i==num/2)
{c=c+i;
    printf("+ %d = %d \n",i ,c);
}
else if (i==num/2)
 printf("= %d \n",c);
i=i+1;}

if(c==num)
printf("O numero %d é numero perfeito\n",c);
else if(c!=num)
printf("Nao e numero prefeito");
return 0;

}