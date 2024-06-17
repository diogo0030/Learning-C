#include <stdio.h>

int  f(int n)
{
if (n==0)
return 0;
if (n==1)
return 1;

return f(n-1)+f(n-2);    }



int main(){

int a,n,p,l,i=0;

printf("Pretende usar numero maximo de valores(1) ou valor maximo(2)? \n");
scanf("%d",&a);
if (a==1)
{printf("Introduza um numero maximo de valores: ");
 scanf("%d",&n);
 
 for(p=0;p<n;p++)
 printf("%d,",f(p));
 
}
if (a==2)
{printf("Introduza o valor maximo:");
scanf("%d",&l);
 for(i=0;f(i)<l;i++)
 printf("%d,",f(i));
 

}
return 0;
}