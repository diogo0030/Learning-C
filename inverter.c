#include <stdio.h>
int main (){

int num,p=2,n=1,k=10,j; 
printf("insira um numero\n");
scanf("%d",& num);

while (p>1)
{p=num/n;
n=n*10;
if( p>=1 && p<=9)
printf("%d",p);
else if (p<1)
continue;
else if (p>=10)
{j=p%k;
printf("%d",j);}
}
return 0;





}