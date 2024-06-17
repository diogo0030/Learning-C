#include <stdio.h>

void preencher_vetor(float v[], int n)
{int i;
    for(i=0;i<n;i++)
{printf("Introduza o elemento %d\n",i+1);
scanf(" %f", &v[i] );}



}
void imprimir_vetor(float v[], int n)
{int i ;
printf("{");

    for(i=0;i<n;i++)
    printf("%.1f ",v[i]);
    printf("}\n");
}




float somatorio_vetor(float v[], int n)
{int i;
float res=0;
    for(i=0;i<n;i++)
    {res=res+v[i];

    }
    return res;
}






int main(){

int elementos,i;
float v[14];
while(50)
{printf("Quantos elementos pretende aramzenar\n");
scanf("%d",&elementos);

if(elementos>15)
printf("O numero de elementos esta limitado a 15!\n");

else 
break;}
preencher_vetor(v,elementos);
printf("O vetor lido foi:");
imprimir_vetor(v,elementos);
printf("e a soma dos seus elementos e: %.1f", somatorio_vetor(v,elementos));
return 0;

}


