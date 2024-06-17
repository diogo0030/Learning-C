#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSTR 50
#define MAXV 100

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

int lerPalavras(char palavras[][MAXSTR])
{   int i=0,x,contar;
    char nome[MAXSTR]; 
    while(scanf("%s",nome)==1)
    { x=strlen(nome);
      if(x<=6)
      {strcpy(palavras[i],nome);
      contar++;
      i++;}
      
       
    }

    

    return contar;
}

int calcCriterio(char nomes[][MAXSTR], int n, int CQ[])
{   int i,j,k,nM=0,nL=0,nE=0,min=999999,pos; 
    
     for(i=0;i<n;i++)
        { for(j=0;j<MAXSTR;j++)
             {if(nomes[i][j]==' ')
             nE++;
              if(nomes[i][j]>='A' && nomes[i][j]<='Z')
             nM++;
             }
        nL=strlen(nomes[i])-nE;
        CQ[i]=abs(25-nL)-nM;
        nE=0;
        nM=0;
             }

     for(k=0;k<n;k++)    
     {if(min>CQ[k])
       {min=CQ[k];
       pos=k;}

     }    
             return pos;
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/ 

void geraNomes(char nomes[][MAXSTR], int n, char nomeCompleto[][MAXSTR]);
void imprimeNomes(char nomes[][MAXSTR], int n);
void imprimeNomeECriterio(char nome[][MAXSTR], int criterio[], int n, int max);

int main() {
    char nomes[MAXV][MAXSTR]={0};
    char nomeCompleto[MAXV][MAXSTR]={0};
    int  criterioQ[MAXV]={0};
    int  n=0, pos;

    n = lerPalavras(nomes);
    if(n > 0)
        printf("\nExistem %d palavras (%s ate' %s)\n\n", n, nomes[0], nomes[n-1]);
    else {
        printf("\nForam lidas 0 palavras.\n\n");
        return 1;
    }
    geraNomes(nomes, 10, nomeCompleto);
    pos = calcCriterio(nomeCompleto, 31, criterioQ);
    imprimeNomeECriterio(nomeCompleto, criterioQ, 31, pos);
    printf("\n");

    return 0;
}

void geraNomes(char palavras[][MAXSTR], int n, char nomesCompletos[][MAXSTR]) {
    char nome[MAXSTR];
    int i, j;
    srand(100);

    for(i=0; i<MAXV; ){
        strcpy( nome, palavras[rand()%n] );
        strcat( nome, " " );
        strcat( nome, palavras[rand()%n] );
        for(j=0; j<i; j++)
            if(strcmp(nomesCompletos[j], nome) == 0)
                break;
        if(j==i)
            strcpy(nomesCompletos[i++], nome);
    }
}

void imprimeNomes(char nomes[][MAXSTR], int n){
    int iter=0;
    for(iter=0; iter<n; iter++)
        printf("%s\n", nomes[iter] );
}

void imprimeNomeECriterio(char nome[][MAXSTR], int criterio[], int n, int pos){
    int iter=0;
    for(iter=0; iter<n; iter++)
    {
        printf("%15s - %3d", nome[iter], criterio[iter] );
        printf(pos == iter ? " <--\n" : "\n");
    }
}