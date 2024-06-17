#include <stdio.h>
 

 int horasmin(int total,int *horas, int *min)
 {
      *horas=total/60;
      *min=total%60;
      
      if(*horas >= 24)
      return 1;
      if(*horas <24)
      return 0; 
      

 }
 int main(){
      int total,horas,min,x;

      printf("Insira o total de minutos:");
      scanf("%d",&total);
      x=horasmin(total,&horas,&min);
      if(x==1)
      printf("%d minutos correspondem a %dh:%dm e e’ superior a 1 dia.",total,horas,min);
      if(x==0)
      printf("%d minutos correspondem a %dh:%dm e nao e’ superior a 1 dia.",total,horas,min);

      return 0;
 
 }