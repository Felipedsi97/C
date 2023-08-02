#ifndef LAB2_H_INCLUDED
#define LAB2_H_INCLUDED
#include <iostream>
#include <vector>

using namespace std;

class retangulo
{
public:
    retangulo();
    ~retangulo();
    void setretangulo(int, int);
    int getlargura();
    int getcomprimento();
    void setretangulousuario();
    void imprime();
    int area();
    int perimetro();
    bool verifica();
    void desenho();

private:
    int largura, comprimento;

};

#endif // LAB2_H_INCLUDED
