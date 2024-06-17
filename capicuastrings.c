#include <stdio.h>
#include <string.h>
int capicua(char *str)
{
    int i,x;
    x=strlen(str);
     char str2[x+1];
    for(i=0;i<x+1;i++)
    {
        str2[i]=str[x-1-i];               
        
    }
    
    if(strcmp(str,str2)==0)
    return 1;

    
    else return 0;}
  int main()
{
    char str[100];
    int x,i=1;

        printf("Palavra?");
        scanf("%s",str);
        x=capicua(str);
        if (x==1)
        printf("%s é capicua",str);
        if(x==0)
        printf("%s nao é capicua",str);
    
    
    return 0;
}