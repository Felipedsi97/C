#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m;

while(n || m)
{   
    int contador = 0;
    int flag = 0;
    int aux = 0;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {        
        cin >> aux;
        v.push_back(aux);
    }
        sort(v.begin(), v.end());
    for(int i = 0; i < m; i++)
    {
        if(v[i] == v[i+1])
        {
            contador++;
            aux = v[i];
            while(aux == v[i+1])
            {
                i++;
            }
        }
    }  
    cout << contador << endl;
    cin >> n >> m;
}
    return 0;
}
