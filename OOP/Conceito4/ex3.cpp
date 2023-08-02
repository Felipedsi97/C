#include <iostream>

using namespace std;

class data
{

private:
    int dia, mes, ano;
public:
    data();
    data(int, int, int);
    ~data();
    friend istream& operator>>(istream&, data&);
    friend ostream& operator<<(ostream&, const data&);
    data operator++();
    data operator++(int);
};

data::data()
{

    dia = mes = ano = 0;

}

data::~data() {};

data::data(int d, int m, int a)
{

    dia = d;
    mes = m;
    ano = a;

}

istream& operator>>(istream& in, data& x)
{

    in >> x.dia >> x.mes >> x.ano;

    return in;

}

ostream& operator<<(ostream& out, const data& x)
{
    switch(x.mes)
    {
    case 1:
    {
        out << x.dia << " de janeiro de "<< x.ano <<endl;
        return out;
    }
    break;
    case 2:
    {
        out << x.dia << " de fevereiro de "<< x.ano <<endl;
        return out;
    }
    break;
    case 3:
    {
        out << x.dia << " de marco de "<< x.ano <<endl;
        return out;
    }
    break;
    case 4:
    {
        out << x.dia << " de abril de "<< x.ano <<endl;
        return out;
    }
    break;
    case 5:
    {
        out << x.dia << " de maio de "<< x.ano <<endl;
        return out;
    }
    break;
    case 6:
    {
        out << x.dia << " de junho de "<< x.ano <<endl;
        return out;
    }
    break;
    case 7:
    {
        out << x.dia << " de julho de "<< x.ano <<endl;
        return out;
    }
    break;
    case 8:
    {
        out << x.dia << " de agosto de "<< x.ano <<endl;
        return out;
    }
    break;
    case 9:
    {
        out << x.dia << " de setembro de "<< x.ano <<endl;
        return out;
    }
    break;
    case 10:
    {
        out << x.dia << " de outubro de "<< x.ano <<endl;
        return out;
    }
    break;
    case 11:
    {
        out << x.dia << " de novembro de "<< x.ano <<endl;
        return out;
    }
    break;
    case 12:
    {
        out << x.dia << " de dezembro de "<< x.ano <<endl;
        return out;
    }
    break;
    }

}
data data::operator++()
    {
        ++dia;
        ++mes;
        if(dia >= 31)
        {
            ++mes;
            dia = 1;
        }

        if(mes >= 12)
        {
            ++ano;
            mes = 1;
        }
        return *this;
    }


data data::operator++(int a)
    {
        data x(dia, mes, ano);
        ++(*this);
         return x;
    }


int main ()
{
    data x;
    cin >> x;
    cout << x;

    cout << x++;
    cout << x;












    return 0;
}
