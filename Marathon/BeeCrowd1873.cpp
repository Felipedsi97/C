#include <iostream>
#include <string>

using namespace std;

int main()
{   
    int n, t;
    string a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a == b)
            cout << "empate" << endl;
        else
        {
            if (a == "tesoura" && b == "papel") 
                cout << "rajesh" << endl;
            else if (b == "tesoura" && a == "papel")
                cout << "sheldon" << endl;
   
            else if (a == "papel" && b == "pedra")
                cout << "rajesh" << endl;
            else if (b == "papel" && a == "pedra")
                cout << "sheldon" << endl;
   
            else if (a == "pedra" && b == "lagarto")
                cout << "rajesh" << endl;
            else if (a == "lagarto" && b == "pedra")
                cout << "sheldon" << endl;
   
            else if (a == "lagarto" && b == "spock")
                cout << "rajesh" << endl;
            else if (a == "spock" && b == "lagarto")
                cout << "sheldon" << endl;
   
            else if (a == "spock" && b == "tesoura")
                cout << "rajesh" << endl;
            else if (b == "spock" && a == "tesoura")
                cout << "sheldon" << endl;
   
            else if (a == "tesoura" && b == "lagarto")
                cout << "rajesh" << endl;
            else if (b == "tesoura" && a == "lagarto")
                cout << "sheldon" << endl;
   
            else if (a == "lagarto" && b == "papel")
                cout << "rajesh" << endl;
            else if (a == "papel" && b == "lagarto")
                cout << "sheldon" << endl;
   
            else if (a == "papel" && b == "spock")
                cout << "rajesh" << endl;
            else if (a == "spock" && b == "papel")
                cout << "sheldon" << endl;
   
            else if (a == "spock" && b == "pedra")
                cout << "rajesh" << endl;
            else if (a == "pedra" && b == "spock")
                cout << "sheldon" << endl;
   
            else if (a == "pedra" && b == "tesoura")
                cout << "rajesh" << endl;
            else
                cout << "sheldon" << endl;
        }
    }
    return 0;
}