#include <stdio.h>

void ordena (int notas[][2],int n)
{
    int pos=0,imin,i,aux;
            while(pos<n-1)
                 {imin=pos;
                 i=pos+1;
                 while(i<n)
                 {if(notas[i][1]<notas[imin][1])
                    { imin=i;
                 i++;}
                 if(imin!=pos)
                    { aux=notas[pos][1];
                     notas[pos][1]=notas[imin][1];
                     notas[imin][1]=aux;
                     
                 }
                 pos++;
                 }   
             

}
}

int main(){

int notas[100][2],n,i,j,k=0;
printf("Insira o numero de alunos");
scanf("%d",&n);

for (i=0;i<n;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&notas[i][j]);
    }
}
ordena(notas,n);
while(k<n) {printf("%d",notas[k++][1]);printf("\n");}

return 0;
}
