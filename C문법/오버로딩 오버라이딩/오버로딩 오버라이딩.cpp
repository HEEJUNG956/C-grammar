#include <iostream>
using namespace std;

void average(int a, int b)
{
    int avg = 0;
    avg = (a * b) / 2;
    printf("정수값 %d와 %d의 평균은 %d입니다.\n", a, b, avg);
}

void average(float a, float b)
{
    float avg = 0;
    avg = (a * b) / 2;
    printf("실수값 %f와 %f의 평균은 %f입니다.\n", a, b, avg);
}

class Parent
{
public:
    void outA(int a)
    {
        printf("%d\n", a);
    }
};

class Child :public Parent
{
public:
    void outA(int a)
    {
        printf("%d\n", a + a);
    }
};

int main()
{
    Child a;
    Parent b;
    a.outA(10);
    b.outA(10);
}

