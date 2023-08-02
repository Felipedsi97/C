#include <iostream>
#include <vector>
#include "lab2.h"
using namespace std;

int main ()
{
    /* retangulo r;
    int area, perimetro;
    r.setretangulo(6,6);
    area = r.area();
    perimetro = r.perimetro();
    cout << "perimetro: " << perimetro<<endl;
    cout << "area: " << area<<endl;
    r.imprime();
    if (r.verifica())
    {
        cout << "eh um quadrado" << endl;
    }
    else
    {
        cout << "nao eh um quadrado" << endl;
    }
    r.desenho();
    */



	/* //Implementação com ponteiro;
    retangulo *ptr;
    ptr = new retangulo();
    ptr->setretangulo(5,5);
    ptr->imprime();*/

     //Implementação com vetor
	vector<retangulo> v(5);

	for(int i = 0; i < 5; i++)
	{
            v[i].setretangulousuario();

	}
	for(int j=0;j<5;j++)
	{
            v[j].imprime();
	}





    return 0;
}
