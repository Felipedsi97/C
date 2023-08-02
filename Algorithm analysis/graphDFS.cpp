/* Felipe dos Santos - 2019002970 */
#include <iostream>
#define SIZE 10

using namespace std;

bool visitado[SIZE];
int grafo[SIZE][SIZE];

void dfs(int v)
{
    visitado[v] = true;
    cout << v << " ";


    for(int i = 0; i < SIZE; i++)
        if((grafo[v][i] == 1) && (!visitado[i]))
            dfs(i);
}

void dfs_explore()
{

    for(int i = 0; i < SIZE; i++)
        visitado[i] = false;


    for(int i = 0; i < SIZE; i++)
    {
        if(!visitado[i])
            dfs(i);
    }
}

int main()
{
    int arestas;
    int fonte, destino;

    cout << "Entre com a quantidade de arestas: ";
    cin >> arestas;


    cout << "Entre com todas as arestas: \n";
    for(int i = 0; i < arestas; i++)
    {
        cin >> fonte >> destino;
        grafo[fonte][destino] = 1;
        grafo[destino][fonte] = 1;
    }

    cout << "Ordem de visita: ";
    dfs_explore();
    cout << endl;

    return 0;
}