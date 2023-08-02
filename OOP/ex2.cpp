#include <iostream>

using namespace std;

int main()
{
    cout << "Programa para mostrar os 20 primeiros numeros primos " << endl;

    int n = 1;
    int contador;
    int qntd = 0;
    for (int j =0; j <100; j++)
    {
        contador = 0;
        n++;
        for(int i = 1; i <= n; i++)
        {
            if ((n%i)== 0)
                contador++;
        }
        if (contador <= 2)
        {
            cout << n << endl;
            qntd++;
        }
        if(qntd == 20)
            break;


    }


  return 0;
}
