#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class poligonos
{
public:
    poligonos();
    ~poligonos();
    void setpoligono(int, int);
    int getn();
    int getcomprimento();
    void imprime();
    float area();
    int perimetro();

private:
    int n, comprimento;

};

poligonos::poligonos() {n = comprimento = 3;
cout << "passando pelo construtor" << endl;}

poligonos::~poligonos()
{
    cout <<"passando pelo destrutor" << endl;
}

int poligonos::getn()
{
    return n;
}

int poligonos::getcomprimento()
{
    return comprimento;
}

void poligonos::setpoligono(int x, int y )
{       if(x >= 3 && x <=10)
            {
                n = x;
                comprimento = y;
            }

}

void poligonos::imprime()
{
    if (n == 3)
    cout << "eh um triangulo" << endl;
    if (n == 4)
    cout << "eh um quadrado" << endl;
    if (n == 5)
    cout << "eh um pentagono" << endl;
    if (n == 6)
    cout << "eh um hexagono" << endl;
    if (n == 7)
    cout << "eh um heptagono" << endl;
    if (n == 8)
    cout << "eh um octogono" << endl;
    if (n == 9)
    cout << "eh um eneagono" << endl;
    if (n == 10)
    cout << "eh um dodecagono" << endl;
}

float poligonos::area()
{
    float pi = 3.14159;



    return ((n*pow(comprimento, 2)*(cos(pi/n)/sin(pi/n)))/4);
}
int poligonos::perimetro()
{
    return n*comprimento;
}


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


    poligonos *ptr;
    ptr = new poligonos();
    ptr->setpoligono(3,3);
    ptr->imprime();
    cout << ptr->perimetro() << endl;
    cout << ptr->area() << endl;
    delete ptr;

    /* //Implementação com vetor
	vector<retangulo> v(5);

	for(int i = 0; i < 5; i++)
	{
            v[i].setretangulousuario();

	}
	for(int j=0;j<5;j++)
	{
            v[j].imprime();
	}
    */




    return 0;
}

