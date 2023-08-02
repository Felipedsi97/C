#include <iostream>
#include <vector>
#include "lab2.h"
using namespace std;

retangulo::retangulo() {largura = comprimento = 1;
cout << "passando pelo construtor" << endl;}

retangulo::~retangulo()
{
    cout <<"passando pelo destrutor" << endl;
}

int retangulo::getlargura()
{
    return largura;
}

int retangulo::getcomprimento()
{
    return comprimento;
}

void retangulo::setretangulo(int x, int y )
{       if(x <=20 && y <= 20)
            {
                largura = x;
                comprimento = y;
            }

}
void retangulo::setretangulousuario()
{
    cin >> largura;
    cin >> comprimento;
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
    perimetro = (largura + comprimento)*2;
    return perimetro;
}

bool retangulo::verifica()
{
    if(comprimento == largura)
    {
        return true;
    }
    else
    {
        return false;
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
