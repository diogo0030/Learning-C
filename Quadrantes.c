#include <stdio.h>
int main(){
  float x,y;

  printf("Indique o ponto (x,y) ");
  scanf("%f %f",&x,&y);

if (x>0 && y>0)
printf("O ponto encontra-se no 1º quadrante\n");
else if (x>0 && y<0)
printf("O ponto encontra-se no 4º quadrante\n");
else if (x<0 && y>0)
printf("O ponto encontra-se no 2º quadrante\n");
else if (x<0 && y<0)
printf("O ponto encontra-se no 3º quadrante\n");
else if (x==0 && y!=0)
printf("O ponto encontra-se no eixo dos ys\n");
else if (y==0 && x!=0)
printf("O ponto encontra-se no eixo dos xs\n");
else 
printf("O ponto encontra-se na origem\n");

return 0;




}