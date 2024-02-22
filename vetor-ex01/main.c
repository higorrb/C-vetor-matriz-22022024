#include <stdio.h>

int main()
{
    int i, vetor[5], somavetor = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        somavetor += vetor[i];
    }
    printf("A soma dos valores foi: %d", somavetor);
    return 0;
}
