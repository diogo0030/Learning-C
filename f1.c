#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXT 10
#define TSIZE 12
#define NSIZE 50

/* Guarda nomes das equipas no vetor de strings names e o total de 
 * pontos conquistados de cada equipa na mesma posição no vetor 
 * totalPontos. Retorna o número de equipas lidas, sem repetições.
 * Nota: os nomes dos jogadores são lidos, mas não são guardados. 
 * */
int lerEquipas(char nomes[][TSIZE], int totalPontos[]){
     int i,pontos,equi=1,p;
     char nome[50],sobrenome[50],equipa[12];
     
        scanf("%s %s %s %d",nome,sobrenome,nomes[0],&pontos);
          
          totalPontos[0]=pontos;
          while(scanf("%s %s %s %d",nome,sobrenome,equipa,&pontos)==4)
            {   for(i=0;i<12;i++){
                if(strcmp(nomes[i],equipa)==0)
               { totalPontos[i]+=pontos;
                 p=0;
                 break;}}
                if(p!=0){
                equi++;
                strcpy(nomes[equi],equipa);
                totalPontos[equi]=pontos;
               } p=p+1;}
                
                
               
                    

return equi;
}

/* Determina qual a equipa com maior pontuação.
 * Retorna a posição dessa equipa no vetor.
 * */
int melhorPontuacao(int pontos[], int n){
    int i,max=0,pos;
    for(i=0;i<n;i++)
    { if(pontos[i]>max){
        max=pontos[i];
        pos=i;}

    }
    return pos;

}

/*
 * ***** NAO ALTERAR ESTE CODIGO ****
 * */

int main()
{
    int nequipas, mequipa;
    char equipas[MAXT][TSIZE]={0};
    int pontosEquipas[MAXT]={0};

    nequipas = lerEquipas(equipas, pontosEquipas);
    printf("Total de equipas: %d\n", nequipas);

    mequipa = melhorPontuacao(pontosEquipas, nequipas);
    printf("Equipa com maior pontuacao: %s (%d pontos)\n", equipas[mequipa], pontosEquipas[mequipa]);

	return 0;
}