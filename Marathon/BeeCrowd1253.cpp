#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, shift, aux;
    string str;
    string::iterator it;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        cin >> shift;
        aux = shift;
        for (int j = 0; j < str.length(); j++)
        {
            if(str[j] - shift >= 65)
            {
                str[j] = str[j] - shift;
            }
            else
            {
                shift = shift - (str[j] - 65);
                str[j] = 91 - shift;
            }
            shift = aux;
        }
        cout << str << endl;
    }
    


    return 0;
}