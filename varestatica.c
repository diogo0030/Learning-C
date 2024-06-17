#include <stdio.h>
#include <stdlib.h>




int proximofib()
{  
     static int x=1,y=0;
     int j;
    j=x+y;
    y=x;
    x=j;

return j;

}


int main()
{
    int a ,i;
    
    
    
    

printf("Introduza um numero maximo de valores ");
scanf("%d",&a);

 for (i=0;i<a-2;i++)
 { printf("%d,",proximofib());
    
 }
 return 0;
 }





