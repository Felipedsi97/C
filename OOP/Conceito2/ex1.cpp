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


int main ()
{
    complexo a(1,3);
    complexo b(1,-1);
    complexo resultadosoma, resultadosub, resultadodiv, resultadomult;


    a.imprimir();
    b.imprimir();
    resultadodiv = a.Dividir(b);
    resultadosoma = a.Somar(b);
    resultadosub= a.Subtrair(b);
    resultadomult = a.Multiplicar(b);
    cout << "resultado da soma" << endl;
    resultadosoma.imprimir();
    cout << "resultado da subtracao" << endl;
    resultadosub.imprimir();
    cout << "resultado da multiplicacao" << endl;
    resultadomult.imprimir();
    cout << "resultado da divisao" << endl;
    resultadodiv.imprimir();
    cout <<"Objetos instanciados na main: " << contador << endl;




    return 0;
}
