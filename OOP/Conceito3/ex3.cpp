#include <iostream>

using namespace std;
int contador = 0; // conta os objetos instanciados apenas na main, objetos criados dentro de metodos não são contados;

class complexo
{
public:
    complexo();
    complexo(double,double);
    ~complexo();
    complexo Somar(complexo x);
    complexo Subtrair(complexo x);
    complexo Multiplicar(complexo x);
    complexo Dividir(complexo x);
    void imprimir();

    complexo operator+(complexo);
    complexo operator-(complexo);
    complexo operator*(complexo);
    complexo operator/(complexo);
    bool operator>(complexo);
    bool operator<(complexo);
    bool operator>=(complexo);
    bool operator<=(complexo);
    bool operator==(complexo);
    bool operator!=(complexo);
    friend istream& operator>>(istream&, complexo&);
    friend ostream& operator<<(ostream&, const complexo&);


private:
    double a, b;


};

complexo::complexo()
{
    a = b = 2;
    contador++;
}
complexo::complexo(double x, double y)
{
    a = x;
    b = y;
    contador++;

}

complexo::~complexo() {}

complexo complexo::Somar(complexo x)
{
	complexo resultado;
	resultado.a = a + x.a;
	resultado.b = b + x.b;
	contador--;
	return resultado;
}

complexo complexo::Subtrair(complexo x)
{
	complexo resultado;
	resultado.a = a - x.a;
	resultado.b = b - x.b;
	contador--;
	return resultado;
}

complexo complexo::Multiplicar(complexo x)
{
	complexo resultado;
	resultado.a = a * x.a;
	resultado.b = (a * x.b) + (b * x.a) - (b*x.b);
	contador--;
	return resultado;
}

complexo complexo::Dividir(complexo x)
{
	complexo resultado;
	double divisor;
	divisor = (a*x.a)-(x.b*(-x.b));
	resultado.a = ((a*x.a)-(b*(-x.b)))/divisor;
	resultado.b = ((b * x.a)+ (a*(-x.b)))/divisor;

	contador--;
	return resultado;
}


void complexo::imprimir()
{
    cout << a << "+" << "(" << b << "i"<< ")" << endl;

}

complexo complexo::operator+(complexo m)
 {
     double x = a + m.a;
     double y = b + m.b;
     return complexo(x, y);
 }

complexo complexo::operator-(complexo m)
{
     double x = a - m.a;
     double y = b - m.b;
     return complexo(x, y);
}

complexo complexo::operator*(complexo m)
{
    double x = a * m.a;
     double y = b * m.b;
     return complexo(x, y);

}

complexo complexo::operator/(complexo m)
{
    double x = a / m.a;
     double y = b / m.b;
     return complexo(x, y);
}

bool complexo::operator>(complexo m)
{
    if(a > m.a && b > m.b)
    {
        return 1;
    }
    else{return 0;}
}

bool complexo::operator<(complexo m)
{

    if(a < m.a && b < m.b)
    {
        return 1;
    }
    else{return 0;}
}

bool complexo::operator>=(complexo m)
{

    if(a >= m.a && b >= m.b)
    {
        return 1;
    }
    else{return 0;}
}

bool complexo::operator<=(complexo m)
{

    if(a <= m.a && b <= m.b)
    {
        return 1;
    }
    else{return 0;}
}

bool complexo::operator==(complexo m)
{
    if(a == m.a && b == m.b)
    {
        return 1;
    }
    else{return 0;}
}

bool complexo::operator!=(complexo m)
{
    if(a != m.a || b != m.b)
    {
        return 1;
    }
    else{return 0;}
}

istream& operator>>(istream& in, complexo& x)
{
    in >> x.a;
    in >> x.b;

    return in;
}

ostream& operator<<(ostream& out, const complexo& x)
{
    out << x.a << "+" << "(" << x.b << "i"<< ")" << endl;

    return out;
}

int main ()
{
    complexo a(2,3);
    complexo b(1,-1);
    complexo c;
    //cin >> c;
    complexo resultado;
    /*
    resultado = a+b;
    resultado = a-b;
    resultado = a*b;
    resultado = a/b;
    */
    cout << a;
    cout << b;
    if(a > b)
    {
        cout << "objeto a maior que o objeto b" << endl;
    }
    if(b < a)
    {
        cout << "objeto b menor que o objeto a" << endl;
    }
    if(a >= b)
    {
        cout << "objeto a maior ou igual ao objeto b" << endl;
    }
    if(b <= a)
    {
        cout << "objeto b menor ou igual ao objeto a" << endl;
    }
    if(b == a)
    {
        cout << "objeto b igual ao objeto a" << endl;
    }
    if(b != a)
    {
        cout << "objeto b diferente do objeto a" << endl;
    }







    return 0;
}

