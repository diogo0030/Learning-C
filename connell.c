#include <stdio.h>

int main (){

int i,c=1,j=1; 

for(i=1;i<7;i++)
{c=1;
       while(c<=i)
     {
           printf("%d\n",j);
    
    
       if (c<i) 
           j=j+2;
    else if (c==i ) 
       j=j+1;
    
c=c+1;

}

}
return 0;
}