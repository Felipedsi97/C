#include <iostream>

using namespace std;


int mdc (int a, int b)
{

   int q = 0;
   int r = 0;


   do {

      q = b / a;
      r = b % a;


      b = a;
      if (r) a = r;

   } while (r != 0);
return a;
}

int main ()

{
    int x;
    int y;
    cout << "Digite dois numeros para calcular o MDC" << endl;
    cin >> x;
    cin >> y;
    int resultado = mdc(x, y);
    cout << resultado << endl;


    return 0;
}
