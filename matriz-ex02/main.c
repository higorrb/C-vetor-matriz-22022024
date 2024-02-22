#include <stdio.h>

int main()
{
    int i, j, d, matriz[3][3], primo, contaprimo = 0;

    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
            primo = 1;
                if (matriz[i][j] <= 1)
                {
                    primo = 0;
                }
                else{
                    for(d = 2; d < matriz[i][j]; d++)
                    {
                        if (matriz[i][j] % d == 0)
                        {
                            primo = 0;
                            break;
                        }
                        
                    }
                }
                if (primo == 1)
                {
                    contaprimo++;
                }
                
                
        }
    }
printf("Foram digitados %d numeros primos", contaprimo);
    
    return 0;
}