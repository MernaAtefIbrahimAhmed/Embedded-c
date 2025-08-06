#include <stdio.h>

int main() {
 
    int x = 10, y = 20, z = 30;
    int *p = &x;
    int *q = &y;
    int *r = &z;

    printf("Before swapping pointers:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    r = p;
    p = q;
    q = r;

    printf("\nAfter swapping pointers:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", (void*)p, (void*)q, (void*)r);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    return 0;
}
