#include <stdio.h>
int main (){

int i,j,c,k;
char carater;
printf("Insira o carater\n");
scanf("%c",&carater);
printf("Insira o numero de linhas\n");
scanf("%d",&i );
printf("Insira o numero de colunas\n");
scanf("%d",&j);


for(c=1;c<=i;c++)
{
    printf("\n%c",carater);   
      for(k=1;k<j;k++)
     { if(c!=1 && c!=i && k<=(j-2))
       printf("_");
       else 
       printf("%c",carater);
       
}



}











return 0 ;}