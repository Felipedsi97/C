#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k, n, m, x, y, i;
    scanf("%d", &k);
    while(k != 0)
    {
        
        if (k == 0)
            break;
        scanf("%d %d", &n, &m);
        for (i = 0; i < k; i++)
        {
            scanf("%d %d", &x, &y);
            if(n == x || m == y)
                printf("divisa\n");
            else if (x < n && y > m)
                printf("NO\n");
            else if (x > n && y > m)
                printf("NE\n");
            else if (x > n && y < m)
                printf("SE\n");
            else if (x < n && y < m)
                printf("SO\n"); 
        }  
        scanf("%d", &k);   
    }

    return 0;
}