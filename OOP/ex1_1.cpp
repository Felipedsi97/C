#include <iostream>
#include <math.h>

using namespace std;

class Polinomio
{
private:
    double vet[100];
    int ordem;
public:
    Polinomio();
    Polinomio(double [], int);
    ~Polinomio() {};
    double f(double x);
    double df(double x);

    Polinomio operator+(Polinomio&);
    Polinomio operator-(Polinomio&);
    friend istream& operator>>(istream& in, Polinomio& p);
    friend ostream& operator<<(ostream& out, const Polinomio& p);
    void newton();
};

Polinomio::Polinomio()
{
    ordem = 0;
    for (int i = 0; i < 100; i++)
    {
        this->vet[i] = 0;
    }
}

Polinomio::Polinomio(double vet[100], int ordem)
{
    this->ordem = ordem;
    for (int i = 0; i <= ordem; i++)
    {
        this->vet[i] = 0;
        this->vet[i] = vet[i];
    }
}

Polinomio Polinomio :: operator+(Polinomio& p)
{
    int m;
    double vetor[100];

    if (ordem > p.ordem)
    {
        m = ordem;
    }
    else
        m = p.ordem;
    for (int i = 0; i <= m; i++)
    {
        vetor[i] = vet[i] + p.vet[i];
    }
    cout << "\nSoma: ";
    return Polinomio(vetor, m);
}

Polinomio Polinomio :: operator-(Polinomio& p)
{
    int m;
    double vetor[100];

    if (ordem > p.ordem)
    {
        m = ordem;
    }
    else
        m = p.ordem;
    for (int i = 0; i <= m; i++)
    {
        vetor[i] = vet[i] - p.vet[i];
    }
    cout << "\nSubtracao: ";
    return Polinomio(vetor, m);
}

istream& operator>>(istream& in, Polinomio& p)
{
    cout << "Digite a ordem do Polinomio" << endl;
    in >> p.ordem;

    if (p.ordem <= 100)
    {
        cout << "Digite os numeros do Polinomio" << endl;
        for (int i = p.ordem; i >= 0; i--)
        {
            in >> p.vet[i];
        }
    }
}

ostream& operator<<(ostream& out, const Polinomio& p)
{
    for (int i = p.ordem; i >= 0; i--)
    {
        if (p.vet[i] != 0)
        {
            if (i > 1)
                out << p.vet[i] << "x^" << i << " + ";
            else if (i == 1)
                out << p.vet[i] << "x" << " + ";
            else
                out << p.vet[i] << endl;
        }
    }
}

double Polinomio:: f(double x)
{
    x = 5*pow(x, 4) - sin(x);       //Digitar o polinomio desejado aqui

    return x;
}

double Polinomio::df(double x)
{
    x = 20*pow(x, 3) - cos(x);      //Digitar a derivada do polinomio aqui
    return x;
}

void Polinomio::newton()
{
    float solucao = 0., xini , xnovo = 0., Fxnovo = 0.,
          Fdxnovo = 0., E, E2, fnovo,xt;
    int k = 0;

    cout << "Digite o x inicial: " << endl;
    cin >> xini;
    cout <<"Digite a precisao: " << endl;
    cin >> E;
    cout <<"Digite a precisao 2: " << endl;
    cin >> E2;


    while( fabs(f(xnovo))  >= E || fabs(xnovo - xini) >= E2)
    {
       Fxnovo = f(xini);
       Fdxnovo = df(xini);
       xnovo = xini - ( Fxnovo / Fdxnovo);
        k = k + 1;
        fnovo = f(xnovo);
        xt = xnovo - xini;
        if(xt<0){
            xt = xt*(-1);
        }
        xini = xnovo;

    }
    cout <<  "Raiz:" << xnovo << endl;
    cout << "Numero de iteracoes "<< k << endl;
}

int main()
{
    Polinomio p1;

    p1.newton();
}

