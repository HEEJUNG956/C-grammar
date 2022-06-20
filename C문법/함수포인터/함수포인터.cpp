#include <iostream>
using namespace std;

void Printnum(int num)
{
    printf("%d\n", num);
}

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    Printnum(2);
    printf("%p", Printnum);

    void (*fptr1)(int) = Printnum;
    void(* const fptr2)(int) = Printnum;

    printf("함수 이름 호출 : %p\n", Printnum);
    printf("함수 포인터 호출 : %p\n", fptr1);
    printf("상수 함수 포인터 호출 : %p\n", fptr2);

    int num1 = 10, num2 = 23;
    int(*fptr)(int, int) = Sum;

    printf("\n-----------------------------------------------\n");
    printf("명시적 역참조 : %d\n", (*fptr)(num1, num2));
    printf("암시적 역참조 : %d\n", fptr(num1, num2));
    return 0;
}

