#include <stdio.h>

int main() {
    int a = 10;
    int* p = &a;

    printf("Value of a: %d\n", a);       // 10
    printf("Address of a: %p\n", &a);    // e.g., 0x7ffee4e3c84c
    printf("Value of p: %p\n", p);       // same as &a
    printf("Value at address p: %d\n", *p); // 10

    *p = 20;  // change value using pointer

    printf("New value of a: %d\n", a);   // 20
    return 0;
}
