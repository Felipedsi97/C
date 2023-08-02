#include <stdio.h>


int main(int argc, char const *argv[])
{
    char str[1500];
    int i;
    char caps;
    for(;;)
    {
        int flag = 1;
        gets(str);
        if (str[0] == '*')
            break;

        if(str[0]>=65 && str[0]<=90)
            caps = str[0]+32;
        else if(str[0]>=97 && str[0]<=122)
            caps = str[0]-32;
        for(i = 0; str[i] != 0; i++)
        {
            if(str[i] == ' ')
            {
                if(str[0] == str[i+1] || caps == str[i+1])
                    continue;
                else
                {
                    flag = 0;
                        break;
                }
            }
        }
        
        if(flag == 1)
            printf("Y\n");
        else
            printf("N\n");

    }
    return 0;
}