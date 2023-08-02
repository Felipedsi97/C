#include <iostream>

using namespace std;

int main ()
{
    int variavel;
    cout << "Menu de selecao" << endl << "Digite 1, 2 ou 3 para selecionar uma opcao" << endl;
    cin >> variavel;

    switch(variavel)
    {
        case 1:
        cout << "Voce selecionou a opcao 1" << endl;
        break;

        case 2:
        cout << "Voce selecionou a opcao 2" << endl;
        break;

        case 3:
        cout << "Voce selecionou a opcao 3" << endl;
        break;


    }


    return 0;
}
