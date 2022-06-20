#include <iostream>
using namespace std;

void funcPrint()
{
    cout << "funcPrint 호출" << endl;
}

void paraPrint(int x)
{
    cout << "매개변수에 전달받은 값 : " << x << endl;
}

void paraPrint(int x, double y)
{
    cout << "매개변수 x에 전달받은 값 : " << x << endl;
    cout << "매개변수 y에 전달받은 값 : " << y << endl;
}

void ChangeValue(int x)
{
    cout << "x의 값 : " << x << endl;
    x += 10;
    cout << "x의 값 : " << x << endl;
}

void ChangeValuePointer(int& x)
{
    x += 10;
}

void ChangePtr(int*& x)
{
    x = nullptr;
}

int main()
{
    funcPrint();
    paraPrint(3);
    paraPrint(4, 10.1);

    int arg1 = 1;
    printf("arg1의 값 : %d\n", arg1);
    ChangeValue(arg1);
    printf("arg1의 값 : %d\n", arg1);

    printf("함수 호출 전 arg1의 값 : %d\n", arg1);
    ChangeValuePointer(arg1);
    printf("함수 호출 전 arg1의 값 : %d\n", arg1);

    int arg = 1;
    int* int_ptr = &arg;
    printf("함수 호출전 int_ptr의 값 : %p\n", int_ptr);
    ChangePtr(int_ptr);
    printf("함수 호출후 int_ptr의 값 : %p\n", int_ptr);

    return 0;
}

