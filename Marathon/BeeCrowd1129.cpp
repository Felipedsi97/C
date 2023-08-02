#include <iostream>

using namespace std;

int main()
{
    int n, x, flag, position;
    cin >> n;
    while(n)
    {      
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            for (int j = 0; j < 5; j++)
            {
                cin >> x;
                if(x <= 127)
                {
                    position = j;
                    flag += 1;
                }
            }
            if(flag > 1 || flag == 0)
                cout << "*" << endl;
            else
            {
                if(position == 0)
                    cout << "A" << endl;
                else if(position == 1)
                    cout << "B" << endl;
                else if(position == 2)
                    cout << "C" << endl;
                else if(position == 3)
                    cout << "D" << endl;
                else
                    cout << "E" << endl;
            }
        }       
        cin >> n;    
    }
    return 0;
}