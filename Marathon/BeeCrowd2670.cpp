#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3;
    int andar1, andar2, andar3;
    cin >> a1 >> a2 >> a3;

    andar1 = 2 * a2 + 4 * a3;
    andar2 = 2 * a1 + 2 * a3;
    andar3 = 4 * a1 + 2 * a2;

    if (andar1 <= andar2 && andar1 <= andar3)
        cout << andar1 << endl;
    else if (andar2 <= andar1 && andar2 <= andar3)
        cout << andar2 << endl;
    else
        cout << andar3 << endl;
        
    return 0;
}