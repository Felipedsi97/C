#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, finalA, tamB;
    cin >> n;
    string a, b;
    
    for(int i = 0; i < n; i++)
    {
        int flag = 0;
        int aux = 0;
        cin >> a;
        cin >> b;
        finalA = a.length();
        tamB = b.length();
        for(int j = (finalA - tamB); j < finalA; j++)
        {
            if(a[j] != b[aux])
            {
                flag = 1;
                aux += 1;
            }
            else
                aux += 1;
        }
        if(flag == 1)
            cout << "nao encaixa" << endl;
        else
            cout << "encaixa" << endl;
    }

    return 0;
}