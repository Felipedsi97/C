#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n[3];
    int aux[3];
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    for (int i = 0; i < 3; i++)
    {
      aux[i] = n[i];  
    }
    
    sort(n, n + 3);
    printf("%d\n%d\n%d\n\n", n[0], n[1], n[2]);
    printf("%d\n%d\n%d\n", aux[0], aux[1], aux[2]);
    

    return 0;
}