#include <iostream>
using namespace std;

class CFracao
{
protected:
    int m_numerador;
    int m_denominador;

    // responde ao receptor com o mínimo denominador comun
    CFracao Reduzida(void);

public:
    // Construtor sem parametros inline
    CFracao(void)
    {
        m_numerador = 1;
        m_denominador = 1;
    }
    CFracao(int Num, int Denom) : m_numerador(Num),
        m_denominador(Denom) { };
    CFracao( const CFracao& f) // Construtor de copia
    {
        m_numerador = f.m_numerador;
        m_denominador = f.m_denominador;
    }
    ~CFracao(void) { };		// Destrutor

    //
    //métodos de acesso
    //
    CFracao operator+(CFracao);
    CFracao operator-(CFracao);
    CFracao operator*(CFracao);
    CFracao operator/(CFracao);
    bool operator>(CFracao);
    bool operator<(CFracao);
    bool operator>=(CFracao);
    bool operator<=(CFracao);
    bool operator==(CFracao);
    bool operator!=(CFracao);
    friend istream& operator>>(istream&, CFracao&);
    friend ostream& operator<<(ostream&, const CFracao&);
    int getNumerador(void)
    {
        return m_numerador;
    }
    int getDenominador(void)
    {
        return m_denominador;
    }

    //
    //métodos aritiméticos
    //
    // retorna uma nova Fracao que é a soma do receptor com _F
    CFracao Somar(CFracao _F);
    // retorna uma nova Fracao que é a subtração do receptor com _F
    CFracao Subtrair(CFracao _F);
    // retorna uma nova Fracao que o produto do receptor e _F
    CFracao Multiplicar(CFracao _F);
    // retorna uma nova Fracao que o quociente do receptor e _F
    CFracao Dividir(CFracao _F);

    //
    //métodos de coparação
    //
    // devolve verdadeiro se receptor menor que _Fracao
    int MenorQue(CFracao _Fracao);
    // devolve verdadeiro se receptor maior que _Fracao
    int MaiorQue(CFracao _Fracao);
    // devolve verdadeiro se receptor igual a _Fracao
    int Igual(CFracao _Fracao);

    //
    //métodos de conversão
    //

// devolve o valor da fração como float
    float ComoFloat(void);

    //
    //métodos de impressão
    //
    // mostrar o receptor no formato m_numerador/m_denominador
    void Print(void);

};




//
// Métodos Protegidos da classe CFracao
//
CFracao CFracao::Reduzida(void)
{
    int gcd = 1;
    int minimo = m_numerador;
    if (m_numerador > m_denominador)
        minimo = m_denominador;
    for(int i = 1; i <= minimo; i++)
    {
        if ((m_numerador%i == 0) && (m_denominador%i == 0))
            gcd = i;
    }
    m_numerador /= gcd;
    m_denominador /= gcd;
    return (*this);
}

//
// Métodos Aritméticos da classe CFracao
//
// retorna uma nova Fracao que é a soma do receptor com _Fracao
CFracao CFracao::Somar(CFracao _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_denominador +
                 m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
    return temp.Reduzida();
}

// retorna uma nova Fracao que é a subtração do receptor com _Fracao
CFracao CFracao::Subtrair(CFracao _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_denominador -
                 m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
    return temp.Reduzida();
}

// retorna uma nova Fracao que o produto do receptor e _Fracao
CFracao CFracao::Multiplicar(CFracao _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador );
    return temp.Reduzida();
}

// retorna uma nova Fracao que o quociente do receptor e _Fracao
CFracao CFracao::Dividir(CFracao _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_denominador,
                 m_denominador*_Fracao.m_numerador );
    return temp.Reduzida();
}

//
// Métodos de comparação da classe CFracao
//
// devolve verdadeiro se receptor menor que _Fracao
int CFracao::MenorQue(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador <
            m_denominador*_Fracao.m_numerador );
}

// devolve verdadeiro se receptor maior que _Fracao
int CFracao::MaiorQue(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador >
            m_denominador*_Fracao.m_numerador );
}

// devolve verdadeiro se receptor igual a _Fracao
int CFracao::Igual(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador ==
            m_denominador*_Fracao.m_numerador );
}

//
// Métodos de conversão
//
// devolve o valor da fração como float
float CFracao::ComoFloat(void)
{
    return ((float)m_numerador/(float)m_denominador);
}

//
// Métodos de impressão
//
// mostrar o receptor no formato m_numerador/m_denominador
void CFracao::Print(void)
{
    cout << m_numerador << "/" << m_denominador;
}

CFracao CFracao::operator+(CFracao x)
{

    int numerador = x.m_numerador + m_numerador;
    int denominador = x.m_denominador + m_denominador;
    return CFracao(numerador, denominador);

}
CFracao CFracao::operator-(CFracao x)
{

    int numerador = x.m_numerador - m_numerador;
    int denominador = x.m_denominador - m_denominador;
    return CFracao(numerador, denominador);

}
CFracao CFracao::operator*(CFracao x)
{

    int numerador = x.m_numerador * m_numerador;
    int denominador = x.m_denominador * m_denominador;
    return CFracao(numerador, denominador);

}
CFracao CFracao::operator/(CFracao x)
{

    int numerador = x.m_numerador / m_numerador;
    int denominador = x.m_denominador / m_denominador;
    return CFracao(numerador, denominador);

}

bool CFracao::operator>(CFracao x)
{
    if((m_numerador/m_denominador) > (x.m_numerador/x.m_denominador))
        return 1;
    else
    {
        return 0;
    }
}
bool CFracao::operator<(CFracao x)
{
    if((m_numerador/m_denominador) < (x.m_numerador/x.m_denominador))
        return 1;
    else
    {
        return 0;
    }

}

bool CFracao::operator>=(CFracao x)
{
    if((m_numerador/m_denominador) >= (x.m_numerador/x.m_denominador))
        return 1;
    else
    {
        return 0;
    }
}

bool CFracao::operator<=(CFracao x)
{
    if((m_numerador/m_denominador) <= (x.m_numerador/x.m_denominador))
        return 1;
    else
    {
        return 0;
    }
}

bool CFracao::operator==(CFracao x)
{
    if((m_numerador/m_denominador) == (x.m_numerador/x.m_denominador))
        return 1;
    else
    {
        return 0;
    }
}
bool CFracao::operator!=(CFracao x)
{
    if((m_numerador/m_denominador) != (x.m_numerador/x.m_denominador))
        return 1;
    else
    {
        return 0;
    }
}

istream& operator>>(istream& in, CFracao& x)
{

    in >> x.m_numerador;
    in >> x.m_denominador;

    return in;
}

ostream& operator<<(ostream& out, const CFracao& x)
{
    out << x.m_numerador <<  "  " << x.m_denominador << endl;

    return out;
}

int main()
{
    CFracao x(12, 2);
    CFracao resultado;
    //cin >> x;
    CFracao y(8, 2);
    cout << x << endl << y << endl;
    //resultado = x + y;
    //cout <<resultado;
    //resultado = x - y;
    //cout << resultado;                  // Funções de operações comentadas porque é legal testar uma por vez
    //resultado = x * y;
    //cout << resultado;
    //resultado = x / y;
    //cout << resultado;

    if(x>y)
    {
        cout << "objeto x eh maior que o objeto y" << endl;
    }
    if(y<x)
    {
        cout << "objeto y eh menor que o objeto x" << endl;
    }
    if(x>=y)
    {
        cout << "objeto x eh maior ou igual ao objeto y" << endl;
    }
    if(y<=x)
    {
        cout << "objeto y eh menor ou igual ao objeto x" << endl;
    }
    if (x==y)
    {
        cout << "os objetos sao iguais" << endl;
    }
    if (x!=y)
    {
        cout << "os objetos sao diferentes" << endl;
    }





    return 0;
}

