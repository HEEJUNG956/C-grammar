// C플러스.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void SWAPReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SWAPPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void func(int *ptr, int& ref){}

int main()
{
    int a = 100;
    int b = 200;


    SWAPPointer(&a, &b);
    printf("포인터 이용해서\n");
    printf("a = %d\nb = %d\n", a, b);

    SWAPReference(a, b);
    printf("참조 이용해서\n");
    printf("a = %d\nb = %d\n", a, b);



    int num = 777;
    func(&num, num);
    printf("&num =%d\nnum= %d\n", &num, num);
    system("pause");
}
