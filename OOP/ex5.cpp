#include <iostream>

using namespace std;

int main ()
{
    int altura, largura, variavel;
    char c;

    cout << "Digite a altura, a largura e o caracter para preenchimento do retangulo respectivamente" << endl;
    cin >> altura;
    cin >> largura;
    cin >> c;

    cout << "Digite 1 para obter um quadrado preenchido ou 2 para obter um quadrado NAO preenchido"<<endl;
    cin >> variavel;
    switch(variavel)
    {
    //quadrado preenchido
    case 1:
        for(int i=0; i <largura; i++)
        {
            for(int j=0; j< altura; j++)
            {
            cout << c;

            }
        cout << endl;
        }
    break;

    //quadrado não preenchido
    case 2:
        for(int i=0; i <altura; i++)
        {
            for(int j=0; j<largura; j++)
            {
                if(i>0 && j >0 && i <(altura-1) && j < (largura-1))
                {
                    cout << " ";
                }
                else
                {
                    cout << c;
                }



            }
        cout << endl;
        }
    }







    return 0;
}
