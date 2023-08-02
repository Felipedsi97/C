#include <stdio.h>

int main()
{
    int n, i, j, shots;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int contador = 0;
        scanf("%d", &shots);
        int height[shots];
        char move[shots];
        for(j = 0; j < shots; j++)
        {
            scanf("%d ", &height[j]);
        }
        for(j = 0; j < shots; j++)
        {
            scanf(" %c", &move[j]);
        }      
        for(j = 0; j < shots; j++)
        {
            if((height[j] < 3) && (move[j] == 'S'))
                contador += 1;
            if((height[j] > 2) && (move[j] == 'J'))
                contador += 1;
        }
        printf("%d\n", contador);
    }
    return 0;
}