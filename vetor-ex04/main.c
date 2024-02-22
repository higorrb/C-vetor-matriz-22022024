#include <stdio.h>

int main()
{
    int i, vetor[5], somavetor = 0, conta = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            somavetor += vetor[i];
            conta++;
        }
        
        
    }
    printf("A media dos valores pares foi: %d", somavetor/conta);
    return 0;
}
