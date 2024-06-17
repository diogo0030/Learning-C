#include <stdio.h>

 void imprimir(int vet[4][3])
 {
     int i,j;
     float media; 
     for(i=0;i<4;i++)
     {   printf("\n"); 
         
         for(j=0;j<3;j++)
    {    media=(vet[i][1]+vet[i][2])/2;
            
        
        printf("%d       ",vet[i][j]);
        if (j==2) 
        printf("  %.1f",media);
           
           
        
    }
    
printf("\n");
}
 }


int main(){
int i=0,j=0,vet[4][3];
float media;

for(i=0;i<4;i++)
{
    for(j=0;j<3;j++)
    {
        
         scanf("%d",&vet[i][j]);
           
           
        
    }
}
printf("NUMERO   NOTA 1   NOTA 2   MEDIA \n");
imprimir(vet);

return 0 ; 




}