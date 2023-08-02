#include <iostream>
#include <math.h>
using namespace std;

class equacao
{
private:
    double a, b, c;


public:
    equacao();
    ~equacao();
    int qtdraiz();
    void input();



};

equacao::equacao()
{
    a = b = c = 1;
}

equacao::~equacao(){}

void equacao::input()
{
    cin >> a;
    cin >> b;
    cin >> c;
}

int equacao::qtdraiz()
{
    if ((pow(b,2) - ((4*a*c))) < 0)
    {
        return 0;
    }
    else if ((pow(b,2) - ((4*a*c))) == 0)
    {
        return 1;
    }
    else if ((pow(b,2) - ((4*a*c))) > 0)
    {
        return 2;
    }

}

int main ()
{
    equacao x;
    x.input();
    cout << "a equacao possui " << x.qtdraiz() << " raiz(es) reais" << endl;

    return 0;
}
