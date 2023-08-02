#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
    int n, valor, c, r, s;
    double pc, pr, ps;
    multimap<char, int> m;
    multimap<char, int>::iterator it;
    c = r = s = 0;
    pc = ps = ps = 0;
    char chave;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> valor >> chave;
        m.insert( make_pair(chave, valor) );
    }
    for (it = m.begin(); it != m.end(); it++)
    {
        if(it->first == 'C')
            c = c + it->second;
        else if(it->first == 'R')
            r = r + it->second;
        else
            s = s + it->second;
    }
    pc = ((float)100*c/(c+r+s));
    pr = ((float)100*r/(c+r+s));
    ps = ((float)100*s/(c+r+s));
    cout << "Total: " << c+r+s << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << pc << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << pr << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << ps << " %" << endl;



    return 0;
}