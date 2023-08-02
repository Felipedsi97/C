//function pointer
//like normal pointer
//can be used as functions parameter
//can be returned from a function
//can be used as an array of functions pointer
#include <stdio.h>

int add (int a, int b) {
    int c;
    c = a + b;
    return c;
}

int sub (int a, int b) {
    int c;
    c = a - b;
    return c;
}

int main() {
    int a;
    int b;
    int op;
    int result;
    a = b = 1;
    int (*func_ptr[])(int,int) = {add, sub};

    scanf("%d", &op);
    if (op > 1)
        return 0;

    result = (*func_ptr[op])(a, b);
    printf("%d\n", result);

    return 0;
}