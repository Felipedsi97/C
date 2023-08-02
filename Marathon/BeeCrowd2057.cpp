#include <iostream>

using namespace std;

int main()
{
    int s, t, f, result;
    cin >> s >> t >> f;
    result = s + t + f;
    if(result == 24)
        cout << "0" << endl;
    else
    {
        if(result > 24)
        {
            result = result - 24;
            cout << result << endl;
        }
        else if(result < 0)
        {
            result = result + 24;
            cout << result << endl;
        }
        else
            cout << result << endl;
    }

    return 0;
}