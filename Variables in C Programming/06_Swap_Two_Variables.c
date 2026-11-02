#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    printf("Before Swapping:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swapping:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
