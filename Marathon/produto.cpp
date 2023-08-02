#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, aux, soma;
    char command;
    vector <int> v;
    int a, b;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        v.push_back(aux);
    }
    for(int i = 0; i < k; i++)
    {
        cin >> command >> a >> b;
        if(command == 'C')
        {
            v[a-1] = b;
        }
        else
        {
            for(int j = a-1; j < b; j++)
            {
                //soma = 0;
                //soma = v[j] * v[j+1];
                if(soma > 0)
                {
                    cout << "+";
                }
                else if(soma < 0)
                {
                    cout << "-";
                }
                else
                {
                    cout << "0";
                }
            }
        }
        cout << endl;
    }


    return 0;
}
