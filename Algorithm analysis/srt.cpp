/*
    Felipe dos Santos
    2019002970
*/

#include <iostream>
#include <fstream>

#define SIZE 925
#define LENGTH 8
#define MAX_VALUE 10

using namespace std;


void counting_sort(int *vet, int *out, int div)
{
    int aux[MAX_VALUE];
    for (int i = 0; i < MAX_VALUE; i++)
        aux[i] = 0;

    for (int i = 0; i < SIZE; i++)
        aux[(vet[i]/div)%10] += 1;
    
    for (int i = 1; i < MAX_VALUE; i++)
        aux[i] += aux[i-1];
    
    for (int i = SIZE-1; i >= 0; i--)
    {
        out[aux[(vet[i]/div)%10]-1] = vet[i];
        aux[(vet[i]/div)%10] -= 1;
    }
    
    for (int i = 0; i < SIZE; i++)
        vet[i] = out[i];
    
}

int max_value(int *vet) {
    int m = vet[0];
    for (int i = 0; i < SIZE; i++)
        if (m < vet[i]) m = vet[i];
    return m;
}

void radix_sort(int* vet, int* out) {
    int maior = max_value(vet);
    for (int div = 1; maior/div > 0; div *= 10)
        counting_sort(vet, out, div);
}

void ler_arquivo(int* vet)
{
    ifstream arquivo("dados.txt");
    if(arquivo)
        {   
            for(int i=0; i < SIZE; i++)
            {
                arquivo >> vet[i];
            }
            arquivo.close();
        }
}

void gravar_arquivo(int* vet)
{
    ofstream arquivo;
    arquivo.open ("ordenado.txt");
    for(int i=0; i < SIZE; i++)
        {
            arquivo << vet[i] << endl;
        } 
    arquivo.close();
}

void print(int* vet)
{
    for(int i = 0; i < SIZE; i++)
        cout << vet[i] << endl;
}

int main() {
    int x[SIZE];
    int y[SIZE];
    //int* x = new int[SIZE]; dynamic allocation heap
    //int* y = new int[SIZE];
    ler_arquivo(x);
    radix_sort(x, y);
    gravar_arquivo(y);
    //delete x;
    //delete y;

    return 0;
}