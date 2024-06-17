#include <stdio.h>
int main (){
int num,resultado,cota,p,j,i,c,n,k;

printf("Insira um numero\n");
scanf("%d",&num);
n=100000;
k=10;
resultado=0;
cota=0;
p=400;
j=76;
while(p>1)
{p=num%n;
n=n/10;
for(i=2;i<=p/2;i++)
{if(p%i==0)
{resultado=resultado+1;
break;}}}


while(j>1)
{j=num/k;
k=k*10;
for(c=2;c<=j/2;c++)
{
    if (j%c==0)
    {cota++;
    break;}
    
  
}
}

if (resultado==0)
printf("truncavel a esquerda\n");
if (cota==0)
printf("truncavel a direita\n");
if (cota!=0 && resultado!=0)
printf("nao truncavel a direita e a esquerda\n");

return 0;


}