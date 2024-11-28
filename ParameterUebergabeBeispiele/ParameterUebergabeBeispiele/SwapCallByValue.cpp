#include <stdio.h>

/*int main()
{
    int a = 27;
    int b = 11;
    int tmp;

    printf("a: %d, b: %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("a: %d, b: %d", a, b);

    return 0;
}*/

void swap(int i1, int i2)
{
    int tmp;

    tmp = i1;
    i1 = i2;
    i2 = tmp;
}

//int main()
//{
//    int a = 27;
//    int b = 11;
//
//
//    printf("a: %d, b: %d\n", a, b);
//
//    swap(a, b);
//
//    printf("a: %d, b: %d\n", a, b);
//
//    return 0;
//}