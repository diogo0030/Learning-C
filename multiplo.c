#include <stdio.h>
int main(){
 int nr1,nr2;
 printf("Numero inteiro 1\t");
 scanf("%d",&nr1);
 printf("Numero inteiro 2\t");
 scanf("%d",&nr2);

if (nr1%nr2==0)
{printf("%d é multiplo de %d\n",nr1 , nr2 ); 
    
}
else
{printf("%d nao é multiplo de %d\n",nr1 , nr2 );

}

return 0;






}