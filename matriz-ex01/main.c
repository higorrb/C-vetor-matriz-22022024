#include <stdio.h>

int main()
{
    int i, j, matriz[3][3], vetorsoma[3] = {0,0,0};

    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
            vetorsoma[i] += matriz[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("A media da %d coluna foi: %d \n", i+1, vetorsoma[i]/3);
    }
    
    
    return 0;
}