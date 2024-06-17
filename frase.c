#include <stdio.h>
int main(){
char frase;
int a=0,e=0,i=0,o=0,u=0;
printf ("escreve a frase\n");
while(frase!='.')
{scanf("%c",& frase);

switch (frase)
{
case'a':
case 'A':
a++;
break;
case 'e':
case 'E':
e++;
break;
case'i':
case'I':
i++;
break;
case'o':
case'O':
o++;
break;
case'u':
case'U':
u++;
break;
}
}
printf("A-%d,E-%d,I-%d,O-%d,U-%d\n",a,e,i,o,u);



}