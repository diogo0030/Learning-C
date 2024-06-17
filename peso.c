#include <stdio.h>

float peso_ideal(float a , char sexo )
{
    float peso;
    if (sexo=='M')
    peso=72.7*a-58;
    else if (sexo=='F')
    peso=62.1*a-44.7;

    return peso;



}
int main()
{
    float a;
    char s;
    printf("Insira a altura da pessoa\n");
    scanf("%f",&a);
    printf("Insira o sexo da pessoa\n");
    scanf(" %c",&s);
    
    printf("O peso ideial seria %.2f quilos",peso_ideal(a,s));
    return 0;

}