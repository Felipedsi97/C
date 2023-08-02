
#include <iostream>
#include "CFracao.h"
#include "CFracao.cpp"
using namespace std;

int main (){
    // Testes das funções presentes na classe CFraçao
    CFracao a, r, b;
    b = a.Somar(r);
    b = a.Multiplicar(r);
    b = a.Dividir(r);
    b = a.Subtrair(r);
    cout << b.getDenominador() << endl;
    cout << b.getNumerador() << endl;
    cout << b.ComoFloat() << endl;
    cout << b.MaiorQue(r) << endl;
    cout << b.MenorQue(r) << endl;
    cout << b.Igual(r) << endl;
    b.Print();





    return 0;
}
