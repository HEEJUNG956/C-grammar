#include <iostream>

using namespace std;
int main()
{
    //int a = 10;
    //int* pa = &a;

    //printf("a의 값 : %d\n", a);
    //printf("a의 포인터 값 : %p\n", &a);
    //printf("f의 값 : %d\n", *pa);
    //printf("f의 포인터 값 : %p\n", pa);

    //a = 15;
    //printf("a의 값 : %d\n", a);
    //printf("a의 포인터 값 : %p\n", &a);
    //printf("f의 값 : %d\n", *pa);
    //printf("f의 포인터 값 : %p\n", pa);

    int p = 10;
    int* pt = &p;

    cout << p << endl;
    cout << *pt << endl;
    cout << &p << endl;
    cout << pt << endl;
    cout << &pt << endl;
}


