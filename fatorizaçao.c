
#include <stdio.h>
int main() {
int n, fator = 2;
printf("Digite um numero inteiro positivo: ");
scanf("%d", &n);
if (n==1|| n==0)
printf("Impossivel de fatorizar\n");
while (n > 1) {
if ((n % fator) == 0) {
printf("%d\n", fator);
n = n / fator;
} else
fator++;
}
return 0;
}

   
