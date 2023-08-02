#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, aux;
    cin >> n;
    vector<int> par;
    vector<int> impar;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        if(aux % 2 == 0)
        {
            par.push_back(aux);
        }
        else
        {
            impar.push_back(aux);
        }        
    }
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());

    for (vector<int>::iterator it = par.begin() ; it != par.end(); ++it)
        cout << *it << endl;
    for(vector<int>::reverse_iterator rit = impar.rbegin(); rit != impar.rend(); rit++)
        cout << *rit << endl;

    return 0;
}