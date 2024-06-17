#include <stdio.h>
int main (){
    int num1,i, num2,multiplo=1;

         printf("Insira o numero 1\n");
         scanf("%d",&num1);
         
         printf("Insira o numero 2\n");
         scanf("%d",&num2);
              if(num1<num2)
              {for(i=2;num2<=1;i++)
                {while(num2%i==0)
                {num2=num2/i;
                multiplo=multiplo*i;}}
              }
               if(num2<num1)
              {for(i=2;num1<=1;i++)
                {while(num1%i==0)
                {num1=num1/i;
                multiplo=multiplo*i;}}
              }
              
               
              
                
                printf("O minimo divisor comun é %d",multiplo);
                return 0 ; 
}
