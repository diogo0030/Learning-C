#include <stdio.h>
int procurar(int v[],int n , int x, int pro[])
{ int i,contar=0;   
    for(i=0;i<n;i++)
    {
        if(v[i]==x)
        contar=contar+1;
    }
return contar;
}
int main (){
int v[100],pro[100],i,x,n;
printf("Insira o tamanho do vetor\n");
scanf( "%d",&n);
printf("Insira o vetor:\n");
for(i=0;i<n;i++)
{scanf("%d",&v[i]);
pro[i]=i;}
printf("Qual o valor?");
scanf("%d",&x);
printf("%d",procurar(v,n,x,pro));
return 0;
}