#include <stdio.h>
#include <strings.h>
#include <string.h>
void inverte(char *str1,char*str2)
{int i=0,x;
  x=strlen(str1);
   for(i=0;i<x;i++)
   {
       str2[i]=str1[x-1-i];
   }



}



int main(){
char str1[100] , str2[100];

printf("Escreva uma frase: ");
gets(str1);
inverte(str1,str2);
printf("A frase invertida é: %s",str2);

}