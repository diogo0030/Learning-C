#include <stdio.h>


int main (){
int pl , sl , tl;
int n3,n2,n1,d3,d2,d1,p3,p2,p1;
int s1,s2,s3,s4,s5,s6;
printf("Primeira linha\n");
scanf("%d",& pl);

printf("Segunda linha\n");
scanf("%d",& sl);

printf("Terceira linha\n");
scanf("%d",& tl);

n3=pl/100;
n2=pl/10;
n2=n2%10;
n1=pl%10;
 printf("%d %d %d\n",n3 ,n2,n1);


d3=sl/100;
d2=sl/10;
d2=d2%10;
d1=sl%10;

 printf("%d %d %d\n",d3 ,d2,d1);

p3=tl/100;
p2=tl/10;
p2=p2%10;
p1=tl%10;

 printf("%d %d %d\n",p3 ,p2,p1);
s1=n3+n2+n1;
s2=d3+d2+d1;
s3=p3+p2+p1;
s4=n3+d3+p3;
s5=n2+d2+p2;
s6=n1+d1+p1;

if (s1==s2 && s2==s3 && s3==s4 && s4==s5 && s5==s6 )
printf("Quadrado magico\n");
else
printf("Nao é quadrado magico\n");


}