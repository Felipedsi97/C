#include <iostream>

using namespace std;

int main()
{
    int n;
    int aux = 0;
    cin >> n;
    for(int i = 1; i < (n*4)+1; i++)
    {
        if (aux == 3)
        {
            cout << "PUM" << endl;
            aux = 0;
        }
            
        else
        {
            aux += 1;
            cout << i << " ";
        }
    }

    return 0;
}