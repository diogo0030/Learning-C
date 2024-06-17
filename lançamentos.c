#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(){

  char vec[]={'*','*','*','*','*','*'};
  int lancamentos,i,x,j;
  srand(time(NULL));
  printf("Quantos lançamentos:\n");
  scanf("%d",&lancamentos);
  
for(i=0;i<lancamentos;i++)
{ x=rand()%6+1;  
    for(j=0;j<x;j++)
    {printf(" %c ",vec[j]);

    }
printf("\n");
}

 }