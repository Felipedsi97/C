#include <iostream>

using namespace std;

class inteiro
{
private:
    char vetor[30];

public:
    inteiro();
    ~inteiro();
    void entrada();
    void imprimir();
    inteiro somar(inteiro r);
    inteiro subtrair(inteiro r);

    friend istream& operator>>(istream&, inteiro&);
    friend ostream& operator<<(ostream&, const inteiro&);
    bool operator>(inteiro);
    bool operator<(inteiro);
    bool operator>=(inteiro);
    bool operator<=(inteiro);
    bool operator==(inteiro);
    bool operator!=(inteiro);
};

bool inteiro::operator>(inteiro x)
{
    int soma = 0;
    int soma2= 0;
    for (int i=0;i<30;i++)
    {
        soma += vetor[i];
        soma2 += x.vetor[i];
    }
    if(soma > soma2)
    {
        return 1;
    }
    else {return 0;}
}

bool inteiro::operator<(inteiro x)
{
    int soma = 0;
    int soma2= 0;
    for (int i=0;i<30;i++)
    {
        soma += vetor[i];
        soma2 += x.vetor[i];
    }
    if(soma < soma2)
    {
        return 1;
    }
    else {return 0;}
}

bool inteiro::operator>=(inteiro x)
{
    int soma = 0;
    int soma2= 0;
    for (int i=0;i<30;i++)
    {
        soma += vetor[i];
        soma2 += x.vetor[i];
    }
    if(soma >= soma2)
    {
        return 1;
    }
    else {return 0;}


}

bool inteiro::operator<=(inteiro x)
{
    int soma = 0;
    int soma2= 0;
    for (int i=0;i<30;i++)
    {
        soma += vetor[i];
        soma2 += x.vetor[i];
    }
    if(soma <= soma2)
    {
        return 1;
    }
    else {return 0;}
}

bool inteiro::operator==(inteiro x)
{
    int soma = 0;
    int soma2= 0;
    for (int i=0;i<30;i++)
    {
        soma += vetor[i];
        soma2 += x.vetor[i];
    }
    if(soma == soma2)
    {
        return 1;
    }
    else {return 0;}
}

bool inteiro::operator!=(inteiro x)
{
    int soma = 0;
    int soma2= 0;
    for (int i=0;i<30;i++)
    {
        soma += vetor[i];
        soma2 += x.vetor[i];
    }
    if(soma != soma2)
    {
        return 1;
    }
    else {return 0;}
}

istream& operator>>(istream& in, inteiro& x)
{
    inteiro resultado;
    for (int i=0; i < 30;i++)
    {
        in >> x.vetor[i];

    }
    return in;
}

ostream& operator<<(ostream& out, const inteiro& x)

{
    for (int i = 0; i < 30; i++)
    {
        out << x.vetor[i] << "--";
    }

    return out;
}

inteiro::inteiro()
{
    for(int i=0; i<30; i++)
    {
        vetor[i] = '0';
    }
}



inteiro::~inteiro()
{

}

void inteiro::entrada()
{
    char x;
    for (int i =0; i <30; i++)
    {
        cin >> x;
        if(x >= '0' && x <= '9')
            vetor[i] = x - '0';

    }
}
void inteiro::imprimir()
{
    for (int i = 0; i <30; i++)
    {
        cout << (char)(vetor[i] + '0') << "  ";
    }
    cout << endl;
}
inteiro inteiro::somar(inteiro r)
{   inteiro resultado;
    char vai = 0;
    for (int i = 0;i < 30; i ++)
    {

     resultado.vetor[i] =  r.vetor[i] + vetor[i] + vai;
     if (resultado.vetor[i] > 9)
     {
         resultado.vetor[i] -= 10;
         vai = 1;
     }
     else{
        vai = 0;
     }
    }
    return resultado;
}

inteiro inteiro::subtrair(inteiro r)
{
    inteiro resultado;
    char vem;
    cout << "AVISO: A funcao subtrair nao trabalha com resultados negativos" << endl;
    for (int i =29; i>=0;i--)
    {

     if (r.vetor[i] < vetor[i])
     {
         if(r.vetor[i-1] != 0)
         {
         r.vetor[i-1] -= 1;
         vem = 10;
         }

     }
     else{
        vem = 0;
     }

     resultado.vetor[i] =  (r.vetor[i]+vem) - vetor[i];
    }
    return resultado;
}
int main ()
{
    inteiro x;
    inteiro y;
    cin >> x;
    cin >> y;
    cout << x;
    cout << y;
    if(x > y)
    {
        cout<< "x eh maior que y" << endl;
    }
    if(y < x)
    {
        cout<< "y eh menor que x" << endl;
    }
    if(x == y)
    {
        cout<< "x tem o mesmo tamanho que y y" << endl;
    }
    if(x != y)
    {
        cout<< "x nao tem o mesmo tamanho de y" << endl;
    }
    if(x >= y)
    {
        cout<< "x eh maior ou igual a y" << endl;
    }
    if(x <= y)
    {
        cout<< "x eh menor ou igual a y" << endl;
    }


    return 0;
}
