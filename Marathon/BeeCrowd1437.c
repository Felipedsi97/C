#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    char saida;
    char command[1000];
    scanf("%d", &n);
    while (n != 0)
    {
        saida = 'N';
        for (i = 0; i < n; i++)
        {            
            scanf(" %c", &command[i]);
            if(saida == 'N' && command[i] == 'D')
                saida = 'L';
            else if(saida == 'N' && command[i] == 'E')
                saida = 'O';
            else if(saida == 'L' && command[i] == 'D')
                saida = 'S';
            else if(saida == 'L' && command[i] == 'E')
                saida = 'N';
            else if(saida == 'S' && command[i] == 'D')
                saida = 'O';
            else if(saida == 'S' && command[i] == 'E')
                saida = 'L';
            else if(saida == 'O' && command[i] == 'D')
                saida = 'N';
            else if(saida == 'O' && command[i] == 'E')
                saida = 'S';            
        }
        
        printf("%c\n", saida);
        scanf("%d", &n);
    }
    
    return 0;
}

