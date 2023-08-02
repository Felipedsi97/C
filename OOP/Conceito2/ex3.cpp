#include <iostream>
#include <math.h>

using namespace std;

class triangulo
{
private:
    int cateto1, cateto2, hipotenusa;

public:
    triangulo();
    triangulo(int, int, int);
    ~triangulo();
    void verifica();


};

triangulo::triangulo(){cateto1 =3; cateto2 = 4; hipotenusa = 5;};

triangulo::triangulo(int x, int y, int z)
{
    if (x < 200 && y < 200 && z < 200)
    {
        cateto1 =x;
        cateto2 = y;
        hipotenusa = z;
    }
    else
        triangulo();


}

triangulo::~triangulo()
{

}

void triangulo::verifica()
{
    if((pow(hipotenusa,2))== (pow(cateto1,2))+(pow(cateto2,2)))
    {
        cout << "eh um triangulo retangulo" << endl;
    }
    else
    {
        cout << "Nao eh um triangulo retangulo" << endl;
    }
}


int main()
{
    triangulo a; // ou utilizar o construtor com parametros
    a.verifica();

    return 0;
}
