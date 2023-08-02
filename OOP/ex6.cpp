#include <iostream>

using namespace std;

int soma_recursiva(int n)
{
    if (n == 0 ? 0 : n + soma_recursiva(n-1));

}


int main ()
{
    int resultado;
    int n;
    cin >> n;
    resultado = soma_recursiva(n);
    cout << resultado << endl;




    return 0;
}
