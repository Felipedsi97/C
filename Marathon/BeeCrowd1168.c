#include <stdio.h>

int main()
{
    int n;
    char v[110];
    int led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    scanf("%d", &n);
    int i, j, contador;
    
    for(i = 0; i < n; i++)
    {
        j = 0;
        contador = 0;
        scanf(" %s", v);
        while(v[j] != '\0')
        {
            contador = contador + led[v[j] - '0'];
            j++;
        }
        printf("%d leds\n", contador);
    }

    return 0;
}