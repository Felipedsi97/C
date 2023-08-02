#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, c, v, i;
    scanf("%d", &n);
    while(n != 0)
    {
        int pares = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &c, &v);
            pares += (v / 2);
        } 

        printf("%d\n", pares / 2);      
        
        scanf("%d", &n);
    }
    return 0;
}
