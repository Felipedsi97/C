#include <iostream>

using namespace std;

class retangulo
{
public:
    retangulo();
    void setretangulo(int, int);
    void imprime();
    int area();
    int perimetro();
    void verifica();
    void desenho();

private:
    int largura, comprimento;

};

retangulo::retangulo() {largura = comprimento = 1;}

void retangulo::setretangulo(int x, int y )
{       if(x <=20 && y <= 20)
            {
                largura = x;
                comprimento = y;
            }

}

void retangulo::imprime()
{
    cout << largura << endl << comprimento << endl;
}

int retangulo::area()
{
    int area;
    area = largura * comprimento;
    return area;
}
int retangulo::perimetro()
{
    int perimetro;
    perimetro = largura + comprimento;
    return perimetro;
}

void retangulo::verifica()
{
    if(comprimento == largura)
    {
        cout << "eh um quadrado" << endl;
    }
    else
    {
        cout << "nao eh um quadrado"<< endl;
    }
}

void retangulo::desenho()
{   char c;
    int variavel;
    cout << "Digite o caracter a ser usado para preenchimento" << endl;
    cin >> c;

    cout << "Digite 1 para obter um quadrado preenchido ou 2 para obter um quadrado NAO preenchido"<<endl;
    cin >> variavel;
    switch(variavel)
    {
    //quadrado preenchido
    case 1:
        for(int i=0; i <largura; i++)
        {
            for(int j=0; j<comprimento; j++)
            {
            cout << c;

            }
        cout << endl;
        }
    break;

    //quadrado não preenchido
    case 2:
        for(int i=0; i <comprimento; i++)
        {
            for(int j=0; j<largura; j++)
            {
                if(i>0 && j >0 && i <(comprimento-1) && j < (largura-1))
                {
                    cout << " ";
                }
                else
                {
                    cout << c;
                }



            }
        cout << endl;
        }
    }

}
int main ()
{
    retangulo r;
    int area, perimetro;
    r.setretangulo(6,6);
    area = r.area();
    perimetro = r.perimetro();
    cout << "perimetro: " << perimetro<<endl;
    cout << "area: " << area<<endl;
    r.imprime();
    r.verifica();
    r.desenho();






    return 0;
}

