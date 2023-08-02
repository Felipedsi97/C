#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, contador;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        contador = 0;
        if(str.length() == 3)
        {
            if (str[0] == 'o')
                contador++;
            if (str[1] == 'n')
                contador++;
            if (str[2] == 'e')
                contador++;
            if(contador > 1)
            {
                cout << "1" << endl;
            }
            contador = 0;
            if (str[0] == 't')
                contador++;
            if (str[1] == 'w')
                contador++;
            if (str[2] == 'o')
                contador++;
            if(contador > 1)
            {
                cout << "2" << endl;
            }       
        }
        else
        {
            if(str[0] == 't')
                contador++;
            if (str[1] == 'h')
                contador++;
            if (str[2] == 'r')
                contador++;
            if (str[3] == 'e')
                contador++;
            if (str[4] == 'e')
                contador++;
            if(contador > 3)
                cout << "3" <<endl;
            
        }

    }
    
    return 0;
}