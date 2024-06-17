#include <stdio.h>
 float potencia (int x,int n)
 {int i,res=1;
for(i=1;i<n+1;i++)
res=res*x;
 if (n==0)
 res=1;
 return res;}

float fatorial(int n)
{int i,res=1;
for(i=n;i==1;i--)
{res=res*i;

}
return res;}


int main(){
int n,i,x;
float resultado;
 printf("Quantos termos:\n");
 scanf("%d",&n);

 printf("Qual o valor de x:\n");
 scanf("%d",&x);

 for(i=1;i<n+1;i++)
{
resultado=resultado+(potencia(-1,i)*(potencia(x,2*i)/fatorial(2*i)));


}
printf("O resultado é : %f",resultado);
return 0;}