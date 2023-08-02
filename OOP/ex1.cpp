//Fatorial não recursivo

#include <iostream>

using namespace std;

int main()
{
    int fat;
    int n;
    cout << "Digite um numero para calcular o fatorial do mesmo: " << endl;
    cin >> n;

    fat = 1;

    for(int i = 1; i<=n; i++)
    {
        fat = fat * i;
    }
    cout << "o fatorial eh: " << fat << endl;

  return 0;
}



