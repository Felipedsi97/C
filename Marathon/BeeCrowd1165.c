#include <stdio.h>

int main()
{
    int n, i, j, flag;
    long int t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        flag = 1;
        scanf("%ld", &t);
        if(t == 1 || t == 0)
            flag = 0;
        for (j = 2; j < t; j++)
        {
            if(t % j == 0)
            {
                flag = 0;
                break;
            }
        }  
        if(flag == 1)
            printf("%d eh primo\n", t);
        else
            printf("%d nao eh primo\n", t);  
    }   
    return 0;
}