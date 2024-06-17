#include <stdio.h>
int main (){
int n1 , n2,i,soma=0,contar=0,c;
float media;
printf("Insira o numero 1\n");
scanf("%d",&n1);
printf("Insira o numero 2\n");
scanf("%d",&n2);
c=n1;
while (c<=n2)
{soma=soma+c;
 contar=contar+1;
c=c+1;
    
}
media=  (float) soma/contar;
printf("soma:%d\n",soma);
printf("media:%.3f\n",media);

return 0;
}