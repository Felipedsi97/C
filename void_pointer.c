#include <stdio.h>
//void pointer needs to be type casted and cannot be dereferenced


int main() {

    int a = 1;
    float b = 1.5;
    
    //dereferencing for int
    void* void_pointer = &a;
    printf("%d\n", *(int *)void_pointer);

    //dereferencing for float
    void_pointer = &b;
    printf("%f\n", *(float *)void_pointer);


    return 0;
}