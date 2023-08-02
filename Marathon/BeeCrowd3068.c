#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, n, a, b, i;
    int contador = 1;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    while(x1 || y1 || x2 || y2)
    {
        int meteoro = 0;

        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &b);
            if((a >= x1) && (a <= x2) && (b <= y1) && (b >= y2))
                meteoro = meteoro + 1;
        }

        printf("Teste %d\n%d\n", contador, meteoro);
        contador = contador + 1;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }

    return 0;
}