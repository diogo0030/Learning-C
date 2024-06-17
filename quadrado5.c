#include <stdio.h>
int main(){
int n,i,j;
printf("Numero\n");
scanf("%d",&n);

for(i=0;i<=n;i++)
{printf("%d",5);
    for(j=0;j<=n;j++)
     {   if(j==0 && j==n)
     printf("%d",n);
         else if(j==n)
         printf("\n");
         else printf("%d",n-1);
         
         ;
     }




}
return 0;
}