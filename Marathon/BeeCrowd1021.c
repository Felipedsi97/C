#include <stdio.h>

int main()
{
    float n;
    int contador;
    scanf("%f", &n);

    printf("NOTAS:\n");
    contador = n / 100;
    n = n - (contador * 100);
    printf("%d nota(s) de R$ 100.00\n", contador);
    contador = n/50;
    n = n - (contador * 50);
    printf("%d nota(s) de R$ 50.00\n", contador);
    contador = n/20;
    n = n - (contador * 20);
    printf("%d nota(s) de R$ 20.00\n", contador);
    contador = n/10;
    n = n - (contador * 10);
    printf("%d nota(s) de R$ 10.00\n", contador);
    contador = n/5;
    n = n - (contador * 5);
    printf("%d nota(s) de R$ 5.00\n", contador);
    contador = n/2;
    n = n - (contador * 2);
    printf("%d nota(s) de R$ 2.00\n", contador);
    printf("MOEDAS:\n");
    contador = n/1;
    n = n - (contador * 1);
    printf("%d moeda(s) de R$ 1.00\n", contador);
    contador = (n*100)/50;
    n = (n*100) - (contador * 50);
    printf("%d moeda(s) de R$ 0.50\n", contador);
    contador = n/25;
    n = n - (contador * 25);
    printf("%d moeda(s) de R$ 0.25\n", contador);
    contador = n/10;
    n = n - (contador * 10);
    printf("%d moeda(s) de R$ 0.10\n", contador);
    contador = n/5;
    n = n - (contador * 5);
    printf("%d moeda(s) de R$ 0.05\n", contador);
    printf("%.0f moeda(s) de R$ 0.01\n", n);



    return 0;
}
