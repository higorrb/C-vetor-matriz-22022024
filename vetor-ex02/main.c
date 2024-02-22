#include <stdio.h>

int main()
{
    int i, vetor[5], maiorvetor = 0, menorvetor = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] > maiorvetor)
        {
            maiorvetor = vetor[i];
        }
        else{
            menorvetor = vetor[i];
        }
    }
    printf("O maior numero digitado foi: %d\n", maiorvetor);
    printf("O menor numero digitado foi: %d", menorvetor);
    return 0;
}
