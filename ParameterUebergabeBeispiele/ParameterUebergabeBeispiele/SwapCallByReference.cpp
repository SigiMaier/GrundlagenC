#include <stdio.h>

void swap(int* i1, int* i2)
{
    int tmp;

    tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}

int main()
{
    int a = 27;
    int b = 11;

    printf("a: %d, b: %d\n", a, b);

    swap(&a,&b);

    printf("a: %d, b: %d\n", a, b);

    return 0;
}