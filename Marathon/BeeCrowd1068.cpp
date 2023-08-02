#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int correto;
    while(cin >> str)
    {
        stack<char> s;
        correto = 1;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(')
            {
                s.push(str[i]);
            }   
            else if(str[i] == ')' && !s.empty())
            {
                s.pop();
            }
            else if(str[i] == ')' && s.empty())
            {
                correto = 0;              
            }

        }       
        
        if(s.empty() && correto)
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
        str.clear();   
    }
    return 0;
}