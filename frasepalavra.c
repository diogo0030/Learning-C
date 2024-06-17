#include <stdio.h>
#include <string.h>

int conta(char *frase , char *palavra)
{   
    int i,x,contar=0;
    char *sub_str;
    sub_str=strtok(frase," ");
    while(sub_str){
        if(strcmp(sub_str,palavra)==0)
        contar++;
        sub_str=strtok(NULL," ");
    }
return contar;
}
int main(){
     char frase[100],palavra[100],contar;
     printf("Frase?");
     gets(frase);
     printf("Palavra?");
     gets(palavra);
     contar=conta(frase,palavra);
     printf("A palavra apareceu %d vezes",contar);


}