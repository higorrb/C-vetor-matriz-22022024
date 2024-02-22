#include <stdio.h>

int main()
{
    int i, vetor[5], conta = 0;;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] == 5)
        {
            conta++;
        }
        
    }
    printf("O valor 5 foi digitado: %d vez(es)", conta);
    return 0;
}
