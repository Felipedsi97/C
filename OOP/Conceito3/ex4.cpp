#include <iostream>


using namespace std;

class CVetor
{
private:

    int *dado;
    int tamanho;

public:

    CVetor();
    CVetor(const CVetor&);
    CVetor(int);
    ~CVetor();
    int& operator[](int);
    void imprime();
    friend istream& operator>>(istream&, CVetor&);
    friend ostream& operator<<(ostream&, const CVetor&);
    bool operator>(CVetor);
    bool operator<(CVetor);
    bool operator>=(CVetor);
    bool operator<=(CVetor);
    bool operator==(CVetor);
    bool operator!=(CVetor);


};

CVetor::CVetor()
{
    tamanho = 1;
    dado = new int[tamanho];

}

CVetor::CVetor(int tam)
{
    tamanho = tam;
    dado = new int[tamanho];
}

CVetor::CVetor(const CVetor& copia)
{
    tamanho = copia.tamanho;
    dado = new int[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        dado[i] = copia.dado[i];
    }

}



CVetor::~CVetor()
{
    delete []dado;

}

int& CVetor::operator[](int indice)
{
    if (indice > 0 && indice < tamanho)
    {

        return dado[indice];
    }
    else
    {
        return dado[0];
    }
}

bool CVetor::operator>(CVetor a)
{
    if(tamanho > a.tamanho)
        return 1;
    else
    {
        return 0;
    }
}

bool CVetor::operator<(CVetor a)
{
    if(tamanho < a.tamanho)
        return 1;
    else
    {
        return 0;
    }
}

bool CVetor::operator>=(CVetor a)
{
    if(tamanho >= a.tamanho)
        return 1;
    else
    {
        return 0;
    }
}

bool CVetor::operator<=(CVetor a)
{
    if(tamanho <= a.tamanho)
        return 1;
    else
    {
        return 0;
    }
}

bool CVetor::operator==(CVetor a)
{
    if(tamanho == a.tamanho)        //Definido o tamanho para identificar se o objeto é igual ao outro, quanto ao tamanho.
        return 1;
    else
    {
        return 0;
    }
}

bool CVetor::operator!=(CVetor a)
{
    if(tamanho != a.tamanho)
        return 1;                   //Definido o tamanho para identificar se o objeto é diferente do outro, quanto ao tamanho.
    else
    {
        return 0;
    }
}


istream& operator>>(istream& in, CVetor& x)
{
    for(int i = 0; i<x.tamanho; i++)
    {
        in >> x.dado[i];
    }
    return in;
}

ostream& operator<<(ostream& out, const CVetor& x)
{
    for(int i = 0; i<x.tamanho; i++)
    {
        out << x.dado[i] << endl;
    }
    return out;
}




void CVetor::imprime()
{
    for(int i=0; i < tamanho; i++)
    {
        cout << dado[i] << endl;
    }
}


int main ()
{
    /*CVetor x(3);
    x[0] = 0;
    x[1] = 2;
    x[2] = 4;
    CVetor y(x);

    y.imprime();
    */

    CVetor x(3);
    CVetor y(2);
    cin >> x;
    cin >> y;
    cout << x;
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
