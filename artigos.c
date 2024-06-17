#include <stdio.h>
#include <string.h>

typedef struct {
    char tipo[50],marca[50],modelo[50];
    float preco;
    int quantidade;
} artigo;

int ler(artigo armazem[])
{int i=0;
    while(scanf("%s %s %s %f %d",armazem[i].tipo,armazem[i].marca,armazem[i].modelo,&armazem[i].preco,&armazem[i].quantidade)==5)
    {
        i++;
    }
    return i;
}
int totalArtigos(artigo armazem[], int n, char *marca, char *modelo){
       int i;
       for(i=0;i<n;i++){
           if(strcmp(armazem[i].marca,marca)==0 && strcmp(armazem[i].modelo,modelo)==0)
           break;}

return armazem[i].quantidade;}

void alertaArtigos(artigo armazem[], int n)
{
    int i;
    for(i=0;i<n;i++){
        if(armazem[i].quantidade <10)
        printf("%s %s %s %f %d\n",armazem[i].tipo,armazem[i].marca,armazem[i].modelo,armazem[i].preco,armazem[i].quantidade);
    }
}
void ordenaArtigos(artigo armazem[], int n){
    int i,imin,aux,pos=0,j;
    while(pos<n-1)
    {
        i=pos+1;
        imin=pos;
            while(i<n)
            {
                if(armazem[i].quantidade<armazem[imin].quantidade)
                imin=i;
                i++;
                if(imin!=pos)
                { aux=armazem[pos].quantidade;
                  armazem[pos].quantidade=armazem[imin].quantidade;
                  armazem[imin].quantidade=aux;

                }
                
            }
            pos++;
    }
    for(j=0;j<n;j++)
    {
       printf("%s %s %s %f %d\n",armazem[j].tipo,armazem[j].marca,armazem[j].modelo,armazem[j].preco,armazem[j].quantidade);
    }
}


int main(){
 artigo armazem[100];
 int x;
 char marca[50],modelo[50];
  x=ler(armazem);
  totalArtigos(armazem,x,marca,modelo);
  alertaArtigos(armazem,x);
  printf("\n\n\n\n\n");
  ordenaArtigos(armazem,x);
return 0;
}