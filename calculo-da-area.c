#include <stdio.h>
int main() {
  printf("Calculo da area e perimetro da circunferência\n");
  
float pi,perimetro,area;
printf("Insira o pi\n");
scanf("%f",& pi);
float raio; 
printf("Insira o raio da circunferência\n");
scanf("%f",& raio);

perimetro = 2*raio*pi;
area=raio*raio*pi;
 printf("A area é %f e o perimetro é %f\n",area,perimetro);
 return 0;

}