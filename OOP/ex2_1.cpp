#include <iostream>
#include <string>

using namespace std;


class politico
{
public:
    politico(string, string);
    ~politico();
    void imprime();
private:
    string nome;
    string partido;
};

class presidente:public politico
{
public:
    presidente(string, string, string);
    ~presidente();
    void imprime();
private:
    string pais;
};

class governador:public presidente
{
private:
    string estado;
public:
    governador(string, string, string, string);
    ~governador();
    void imprime();
};

class prefeito:public governador
{
private:
    string cidade;
public:
    prefeito(string, string, string, string, string);
    ~prefeito();
    void imprime();
};

politico::politico(string a, string b)
{
    cout << "passando pelo construtor da classe politico" << endl;
    nome = a;
    partido = b;

}

politico::~politico()
{
    cout << "passando pelo destrutor da classe politico" << endl;
}

void politico::imprime()
{
    cout << "Nome: " << nome << endl << "Partido: " << partido << endl;

}

presidente::presidente(string a, string b, string c)
    : politico(a, b), pais(c)
{


    cout << "passando pelo construtor da classe presidente" << endl;


}

presidente::~presidente()
{
    cout << "passando pelo destrutor da classe presidente" << endl;
}

void presidente::imprime()
{
    politico::imprime();
    cout << "Pais: " << pais << endl;

}

governador::governador(string a, string b, string c, string d):presidente(a,b,c), estado(d)
{
    cout << "passando pelo construtor da classe governador" << endl;
}
void governador::imprime()
{
    presidente::imprime();
    cout << "Estado: " << estado << endl;
}

governador::~governador()
{
    cout << "passando pelo destrutor da classe governador" << endl;
}

prefeito::prefeito(string a, string b, string c, string d, string e):governador(a, b, c, d), cidade(e)
{
    cout << "passando pelo construtor da classe prefeito" << endl;
}
    prefeito::~prefeito()
    {
         cout << "passando pelo destrutor da classe prefeito" << endl;
    }
    void prefeito::imprime()
    {
        governador::imprime();
        cout << "Cidade: " << cidade << endl;

    }

int main()
{

    prefeito b("felipe", "psl", "brasil", "sp", "pinda");
    b.imprime();



    return 0;
}

