#include <stdio.h>

int main()
{
    int n, indice, min, i;
    int t[100];
    indice = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
      scanf("%d", &t[i]);
    }
    min = t[0];
    for (i = 0; i < n; i++)
    {
      if(t[i] < min)
        {
            min = t[i];
            indice = i+1;
        }
    }
    
    printf("%d\n", indice);
    

    return 0;
}