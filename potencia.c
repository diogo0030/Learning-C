#include <stdio.h>
int main(){
int op,p,r,conta=0;

printf("Insira um operando\n");
scanf("%d",& op);

printf("Insira outro operando (potencia de 2)\n");
scanf("%d",& p);

while(p>1) 
     {p=p/2;
     conta++;
       if (p==1)
       break;}

r=op<<conta;
printf("resultado :%d\n",r);
return 0;
}