#include <iostream>

int main()
{
    int a = 10;
    int* pa = &a;

    printf("a의 값 : %d\n", a);
    printf("a의 포인터 값 : %p\n", &a);
    printf("f의 값 : %d\n", *pa);
    printf("f의 포인터 값 : %p\n", pa);

    a = 15;
    printf("a의 값 : %d\n", a);
    printf("a의 포인터 값 : %p\n", &a);
    printf("f의 값 : %d\n", *pa);
    printf("f의 포인터 값 : %p\n", pa);

}


