#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    int n, aux, aux2, cont;
    cin >> n;    
    int numeros[n];    
    aux = 0;
    
    while (aux < n) {
        cin >> numeros[aux];
        aux++;
    }
    
    sort(numeros, numeros + n);
    
    aux = 0;
    while (aux < n) 
    {       
        cont = 1;
        aux2 = 0;
        
        while (aux2 < n) 
        {
            if (numeros[aux] == numeros[aux2] && aux != aux2)
                cont++;
            aux2++;
        }
        cout << numeros[aux] << " aparece " << cont << " vez(es)" << endl;
        aux += cont;
    }
    
     

    
    

    return 0;
}