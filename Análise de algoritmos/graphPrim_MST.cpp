/* Minimum Spanning Tree - Prim
-Felipe dos Santos
-2019002970
*/

#include <iostream>
#include <cstring>
#define INFINITY 1000000
#define GRAPH_SIZE 6

using namespace std;

int custo[GRAPH_SIZE];
int anterior[GRAPH_SIZE];
bool visitado[GRAPH_SIZE];
int grafo[GRAPH_SIZE][GRAPH_SIZE];

void prim(int fonte)
{
    int custoMST = 0;
    int vcm = -1;

    for (int i = 0; i < GRAPH_SIZE; i++)
    {
        custo[i] = INFINITY;
        anterior[i] = -1;
        visitado[i] = false;
    }
    custo[fonte] = 0;

    while (true)
    {
        vcm = -1;
        for (int i = 0; i < GRAPH_SIZE; i++)
            if ((!visitado[i]) && ((vcm == -1) || (custo[i] < custo[vcm])))
                vcm = i;
        if (vcm < 0)
            break;
        visitado[vcm] = true;
        for (int i = 0; i < GRAPH_SIZE; i++)
        {
            if ((!visitado[i]) && (grafo[vcm][i] != 0) && (custo[i] > grafo[vcm][i]))
            {
                custo[i] = grafo[vcm][i];
                anterior[i] = vcm;
            }
        }
    }

    for (int i = 0; i < GRAPH_SIZE; i++)
        custoMST += custo[i];
    cout << "Custo MST: " << custoMST << "\n";
    cout << "Arestas MST: ";
    for (int i = 1; i < GRAPH_SIZE; i++)
        cout << "(" << i << " - " << anterior[i] << ") ";
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    memset(grafo, 0, sizeof grafo);
    grafo[0][1] = 5;
    grafo[1][0] = 5;
    grafo[0][2] = 6;
    grafo[2][0] = 6;
    grafo[0][3] = 4;
    grafo[3][0] = 4;
    grafo[1][2] = 1;
    grafo[2][1] = 1;
    grafo[1][3] = 2;
    grafo[3][1] = 2;
    grafo[2][3] = 2;
    grafo[3][2] = 2;
    grafo[2][4] = 5;
    grafo[4][2] = 5;
    grafo[2][5] = 3;
    grafo[5][2] = 3;
    grafo[3][5] = 4;
    grafo[5][3] = 4;
    grafo[4][5] = 4;
    grafo[5][4] = 4;

    for (int i = 0; i < GRAPH_SIZE; i++)
    {
        for (int j = 0; j < GRAPH_SIZE; j++)
        {
            cout << grafo[i][j] << " ";
        }
        cout << "\n";
    }

    prim(0);

    return 0;
}
