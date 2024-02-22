#include <stdio.h>

int main()
{
    int i, vetor[5];

    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Os valores digitados na ordem inversa foram:\n");
    for ( i = 4; i >= 0; i--)
    {
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}
