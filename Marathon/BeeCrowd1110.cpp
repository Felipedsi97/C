#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        queue<int> q;
        queue<int> discarded;
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        while(q.size() > 1)
        {
            discarded.push(q.front());
            q.pop();            
            q.push(q.front());
            q.pop();            
        }
        cout << "Discarded cards: " << discarded.front();
        while(discarded.size() > 1)
        {  
            discarded.pop();
            cout << ", " << discarded.front();
        }
        cout << "\nRemaining card: " << q.front() << endl;           

        
    }


    return 0;
}