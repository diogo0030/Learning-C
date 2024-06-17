#include <stdio.h>
int main (){

int x , y , z ,i, contar1=0 ,contar3=0, mininmo=1000000,c,ele;
printf("numero de pernas\n");
scanf("%d",&x);
printf("numero de cabeças\n");
scanf("%d",&y);
printf("numero de orelhas\n");
scanf("%d",&z);

contar1=x/4;

contar3=z/2;


for (i=1;i<4;i++)
{
if (i==1)
c=contar1;
else if (i==2)
c=y;
else if (i==3)
c=contar3;
if (mininmo>c)
{ele=c;
mininmo=c;
}
}
printf("Numeros de elefantes:%d\n",ele);
return 0;

















}