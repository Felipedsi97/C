#include <iostream>
#include <stdexcept>

using namespace std;

template <typename t>
class CVetor
{
private:

    t *dado;
    int tamanho;

public:

    CVetor();
    CVetor(const CVetor&);
    CVetor(int);
    ~CVetor();
    t& operator[](int);
    void imprime();
    friend istream& operator>>(istream&, CVetor&);
    friend ostream& operator<<(ostream&, const CVetor&);
    bool operator>(CVetor);
    bool operator<(CVetor);
    bool operator>=(CVetor);
    bool operator<=(CVetor);
    bool operator==(CVetor);
    bool operator!=(CVetor);
    void ordena();


};

template <typename t>
void CVetor<t>::ordena()
{
	t aux;
	for(int i =0; i < tamanho; i++)
	{
		for (int j=0; j < tamanho - 1 - i; j++)
		{
			if(dado[j+1] < dado[j])
			{
				aux = dado[j];
				dado[j] = dado[j+1];
				dado[j+1] = aux;
			}
		}
		
		
	}
	
	
}

template <typename t>
CVetor<t>::CVetor()
{
    tamanho = 1;
    dado = new t[tamanho];

}

template <typename t>
CVetor<t>::CVetor(int tam)
{
    tamanho = tam;
    dado = new t[tamanho];
}

template <typename t>
CVetor<t>::CVetor(const CVetor& copia)
{
    tamanho = copia.tamanho;
    dado = new t[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        dado[i] = copia.dado[i];
    }

}


template <typename t>
CVetor<t>::~CVetor()
{
    delete []dado;

}

template <typename t>
t& CVetor<t>::operator[](int indice)
{
    if (indice >= 0 && indice < tamanho)
    {

        return dado[indice];
    }
    else
    {	
    	throw out_of_range("fora de faixa");
        //return dado[0];
    }
}

template <typename t>
bool CVetor<t>::operator>(CVetor a)
{
    if(tamanho > a.tamanho)
        return 1;
    else
    {
        return 0;
    }
}

template <typename t>
bool CVetor<t>::operator<(CVetor a)
{
    if(tamanho < a.tamanho)
        return 1;
    else
    {
        return 0;
    }
}

template <typename t>
bool CVetor<t>::operator>=(CVetor a)
{
    if(tamanho >= a.tamanho)
        return 1;
    else
    {
        return 0;
    }
}
template <typename t>
bool CVetor<t>::operator<=(CVetor a)
{
    if(tamanho <= a.tamanho)
        return 1;
    else
    {
        return 0;
    }
}
template <typename t>
bool CVetor<t>::operator==(CVetor a)
{
    if(tamanho == a.tamanho)        //Definido o tamanho para identificar se o objeto é igual ao outro, quanto ao tamanho.
        return 1;
    else
    {
        return 0;
    }
}
template <typename t>
bool CVetor<t>::operator!=(CVetor a)
{
    if(tamanho != a.tamanho)
        return 1;                   //Definido o tamanho para identificar se o objeto é diferente do outro, quanto ao tamanho.
    else
    {
        return 0;
    }
}

/*
template <typename t>
istream& operator>>(istream& in, CVetor& x)
{
    for(int i = 0; i<x.tamanho; i++)
    {
        in >> x.dado[i];
    }
    return in;
}
template <typename t>
ostream& operator<<(ostream& out, const CVetor& x)
{
    for(int i = 0; i<x.tamanho; i++)
    {
        out << x.dado[i] << endl;
    }
    return out;
}

*/

template <typename t>
void CVetor<t>::imprime()
{
    for(int i=0; i < tamanho; i++)
    {
        cout << dado[i] << endl;
    }
}


int main ()
{
    CVetor<float> x(3);
    
   
	x[0] = 8.9;
    x[1] = 7.9;
    x[5] = 4.8;
    x.ordena();
    //CVetor<float> y=x; copy constructor syntax
	
    x.imprime();





    return 0;
}
