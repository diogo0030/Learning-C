#include <stdio.h>
#include <string.h>

#define TSIZE 50
#define MAXATLETAS 36
#define DISTMAX 10.0
#define DESCONTO 7.0

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

/* Guarda nomes completos dos atletas no vetor de strings nomes e as suas 
 * pontuacoes na mesma posicao no vetor distancia.
 * Retorna o numero de atletas lidos.
 * Nota: a informacao da origem e’ lida, mas nao guardada. 
 */
int lerAtletas(char nomes[][TSIZE], float distancia[]){
        int i=0;
        char origem[TSIZE],primeironome[TSIZE];
          while (scanf("%s %s",origem,primeironome)==2)
          {   
              strcpy(nomes[i],primeironome);
              if (strcmp(origem,"Galia")!=0)
                  {strcat(nomes[i],"");
                  scanf("%s",primeironome);
                  strcat(nomes[i],primeironome);}

           scanf("%f",&distancia[i]);
           i++;}



	return i;}


/* Identifica quais sao os atletas romanos infratores (>10m) e 
 * penaliza em 7 metros a distancia desses atletas.
 * Retorna numero de correcoes feitas.
 */
int corrigeTabela(char nomes[][TSIZE], float distancia[], int nAtleta){
    int i,x,contar=0;
    for(i=0;i<nAtleta;i++)
       { x=strlen(nomes[i]);
         if(nomes[i][x-2]=='u' && nomes[i][x-1]=='s' && distancia[i]>10)
       {
           distancia[i]=distancia[i]-7;
           contar=contar+1;

       }

        
    }



	return contar;
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/
 
void imprimePontuacoes(float distancias[], int n);

int main() {
	char nomes[MAXATLETAS][TSIZE];
	float distancias[MAXATLETAS];
	int nAtletas, nCorrigidos;

	nAtletas = lerAtletas(nomes, distancias);
	printf("Numero de atletas lidos: %d\n", nAtletas);

	nCorrigidos = corrigeTabela(nomes, distancias, nAtletas);
	printf("Numero de valores corrigidos: %d\n", nCorrigidos);
	printf("Vetor corrigido:\n");
	imprimePontuacoes(distancias, nAtletas);

	return 0;
}

void imprimePontuacoes(float distancias[], int n){
	int i=0;
	for(; i<n; i++){
		if( (2*i+1) == MAXATLETAS)
			printf("\n");
		printf("%2.1f ", distancias[i] );
	}
}