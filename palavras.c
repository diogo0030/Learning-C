#include <stdio.h>
#include <string.h>


int main(){
    char frase[1000];
    int x,i,nE=0,nL,j,max=0;
    char *str;
    float media,soma=0,contar=0;
    
    printf("Escreva uma frase\n");
    gets(frase);
    x=strlen(frase);
    //Conta o numero de esqpaços
          for(i=0;i<x;i++){
             if(frase[i]== ' ')
                  nE++;}
    //Numero de cararetes da strings - Numeros de espaços
    nL=strlen(frase)-nE;
            //Procurar espaços e ver qual e a palavra com o maio numero de letras
             str=strtok(frase," ");
             while(str)
             {    if(strlen(str)>max){
                 contar=contar+1;
                 max=strlen(str);}

                 str=strtok(NULL," ");
             }
                   

             
             media=nL/contar;
             printf("A media do numero de letras das palavras é %.3f\n",media);
             printf("A palavra com o numero maior de letra é %d\n",max);
             printf("A frase tem ao todo %d letras\n",nL);

    return 0;
             

}