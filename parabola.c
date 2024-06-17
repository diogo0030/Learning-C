#include <stdio.h>
float parabola (int a, float x){
float f;
f=a*(x*x);
return f;}





int main (){
int int1, int2, a;
float in,i;
printf("Qual o valor de a?\n");
scanf(" %d",&a);
printf("Qual o intervalo?\n");
scanf(" %d%d",&int1,&int2);
printf("Qual o valor do incremento\n");
scanf(" %f",&in);
i=int1;
while (i<=int2)
{
    
    printf("f(%.1f)= %.1f\n",i,parabola(a,i));
    i=i+in;

}
return 0;


}